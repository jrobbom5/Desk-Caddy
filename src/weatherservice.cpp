#include <Arduino.h>
#include <ArduinoJson.h>
#include <HTTPClient.h>
#include "weatherservice.h"
#include "mytimedate.h"

extern bool isWifiConnected (void);

extern long timezoneOffset;

WeatherService::WeatherService (void)
{
    // getCurrentWeatherObject ();
    // int temp = (int)(mCurrentObj["main"]["temp"].as<float> () + 0.5);
    // Serial.println ("Current temp is " + String (temp));
}

void WeatherService::update (void)
{
    unsigned long        currentUpdateInterval  = 300000; // 5 minutes
    unsigned long        forecastUpdateInterval = 1800000; // 30 minutes
    unsigned long        now                    = millis ();
    static unsigned long currentLastUpdate      = now;
    static unsigned long forecastLastUpdate     = now;
    static bool          firstCall              = true;

    if (!isWifiConnected ())
    {
        return;
    }

    if (currentLastUpdate + currentUpdateInterval < now || firstCall)
    {
        Serial.println ("Current WeatherService::update");
        getCurrentWeatherObject ();
        currentLastUpdate = now;
    }

    if (forecastLastUpdate + forecastUpdateInterval < now || firstCall)
    {
        Serial.println ("Forecast WeatherService::update");
        getForecastWeatherObject ();
        forecastLastUpdate = now;
    }

    firstCall = false;
}

void WeatherService::getCurrentWeatherObject (void)
{
    HTTPClient    http;
    String        payload;
    static String url = String (CURRENT_WEATHER_URL) + "lat=" + String (LATITUDE) + "&lon=" + String (LONGITUDE) + "&appid=" + String (WEATHER_API_KEY) + "&units=metric";

    http.begin (url);

    int httpCode = -100;
    int tryCount = 5;
    while (httpCode != HTTP_CODE_OK && tryCount-- > 0)
    {
        httpCode = http.GET ();
    }

    if (httpCode == HTTP_CODE_OK)
    {
        payload = http.getString ();
        Serial.println (payload);
    }
    else
    {
        Serial.printf ("[HTTP] GET... failed, error: %d: %s\n", httpCode, http.errorToString (httpCode).c_str ());
        payload = "";
        return;
    }

    http.end ();

    // DynamicJsonDocument  doc (MAX_WEATHER_JSON_SIZE);
    // StaticJsonDocument<MAX_WEATHER_JSON_SIZE> doc;
    DeserializationError err = deserializeJson (mCurrentDoc, payload);
    if (err)
    {
        Serial.println ("Failed to deserialise weather data file: " + String (err.f_str ()));
        delay (1000);
        ESP.restart ();
    }

    mCurrentObj    = mCurrentDoc.as<JsonObject> ();
    timezoneOffset = mCurrentObj["timezone"].as<long> ();
    // Serial.println ("setting timezoneOffset to " + String (timezoneOffset));
}

void WeatherService::getForecastWeatherObject (void)
{
    HTTPClient    http;
    String        payload;
    static String url = String (FORECAST_WEATHER_URL) + "lat=" + String (LATITUDE) + "&lon=" + String (LONGITUDE) + "&appid=" + String (WEATHER_API_KEY) + "&units=metric";

    http.begin (url);

    int httpCode = -100;
    int tryCount = 5;
    while (httpCode != HTTP_CODE_OK && tryCount-- > 0)
    {
        httpCode = http.GET ();
    }

    if (httpCode == HTTP_CODE_OK)
    {
        payload = http.getString ();
        Serial.println (payload);
    }
    else
    {
        Serial.printf ("[HTTP] GET... failed, error: %d: %s\n", httpCode, http.errorToString (httpCode).c_str ());
        payload = "";
    }

    http.end ();

    // DynamicJsonDocument  doc (MAX_WEATHER_JSON_SIZE);
    // StaticJsonDocument<MAX_WEATHER_JSON_SIZE> doc;
    DeserializationError err = deserializeJson (mForecastDoc, payload);
    if (err)
    {
        Serial.println ("Failed to deserialise weather data file: " + String (err.f_str ()));
        delay (1000);
        ESP.restart ();
    }

    mForecastObj = mForecastDoc.as<JsonObject> ();

    // int maxTemp = ABSOLUTE_ZERO;
    // int recordNumber = 0;
    // int i = 0;
    int maxRecordsEntry = 0;
    for (int i = 0; i < MAX_FORECAST_DAYS; i++)
    {
        maxTempRecords[i] = { "", ABSOLUTE_ZERO, "" };
    }

    int  index          = 0;
    bool skipFirstEntry = false;

    for (JsonObject v : mForecastObj["list"].as<JsonArray> ())
    {
        String     rawTime     = v["dt"].as<String> ();
        time_t     currentTime = strtol (rawTime.c_str (), NULL, 10) + timezoneOffset;
        struct tm* timeInfo    = gmtime (&currentTime);
        // Serial.println (String (timeInfo->tm_mday) + ": " + String (timeInfo->tm_hour) + ". " + v["main"]["temp"].as<String> () + " " + v["weather"][0]["icon"].as<String> ());

        if (index == 0 && timeInfo->tm_hour >= 12)
        {
            skipFirstEntry = true;
        }
        else if (index != 0 && timeInfo->tm_hour < 12)
        {
            skipFirstEntry = false;
        }

        if (timeInfo->tm_hour >= 6 && timeInfo->tm_hour <= 21 && !skipFirstEntry)
        {
            if ((int)(v["main"]["temp"].as<float> () + 0.5) > maxTempRecords[maxRecordsEntry].temp)
            {
                char day[6];
                strftime (day, 6, "%a", timeInfo);
                maxTempRecords[maxRecordsEntry].day  = String (day);
                maxTempRecords[maxRecordsEntry].temp = (int)(v["main"]["temp"].as<float> () + 0.5);
                maxTempRecords[maxRecordsEntry].icon = v["weather"][0]["icon"].as<String> ();
            }
        }
        else
        {
            if (maxTempRecords[maxRecordsEntry].temp > ABSOLUTE_ZERO)
            {
                maxRecordsEntry++;
                if (maxRecordsEntry == MAX_FORECAST_DAYS)
                {
                    break;
                }
            }
        }
        index++;
    }

    for (int i = 0; i < MAX_FORECAST_DAYS; i++)
    {
        Serial.println (maxTempRecords[i].day + " " + String (maxTempRecords[i].temp) + " " + maxTempRecords[i].icon);
    }
}

int WeatherService::getCurrentTemperature (void)
{
    update ();
    int temp = (int)(mCurrentObj["main"]["temp"].as<float> () + 0.5);
    // Serial.println ("getCurrentTemp: Temp is " + String (temp));
    return temp;
}

String WeatherService::getCurrentWeatherIcon (void)
{
    update ();
    String icon = mCurrentObj["weather"][0]["icon"].as<String> ();
    return icon;
}

int WeatherService::getCurrentRainfall (void)
{
    update ();
    int rain = (int)(mCurrentObj["rain"]["1h"].as<float> () + 0.99);
    // Serial.println ("getCurrentTemp: Temp is " + String (temp));
    return rain;
}

int WeatherService::getCurrentWindSpeed (void)
{
    update ();
    int windSpeed = (int)((mCurrentObj["wind"]["speed"].as<float> () * 3.6) + 0.5);
    // Serial.println ("getCurrentTemp: Temp is " + String (temp));
    return windSpeed;
}

int WeatherService::getCurrentWindDirection (void)
{
    update ();
    int windDirection = mCurrentObj["wind"]["deg"];
    windDirection += 180;
    // Serial.println ("getCurrentTemp: Temp is " + String (temp));
    return windDirection;
}

maxTempRecord WeatherService::getMaxTempRecord (int recordNumber)
{
    return maxTempRecords[recordNumber];
}