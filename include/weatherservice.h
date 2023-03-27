#ifndef WEATHER_H
#define WEATHER_H 1

#include <Arduino.h>
#include <ArduinoJson.h>
// #include "weather.h"

#define MAX_CURRENT_WEATHER_JSON_SIZE 1024
#define MAX_FORECAST_WEATHER_JSON_SIZE 32000

#define WEATHER_API_KEY     "07d4a5f79d11e344a177a163cbe4aade"
#define LATITUDE            -37.93422
#define LONGITUDE           145.02311
#define CURRENT_WEATHER_URL "https://api.openweathermap.org/data/2.5/weather?"
#define FORECAST_WEATHER_URL "https://api.openweathermap.org/data/2.5/forecast?"

#define MAX_FORECAST_DAYS    4
#define ABSOLUTE_ZERO       -273

struct maxTempRecord
{
    String day;
    int temp;
    String icon;
};

class WeatherService
{
public:
    WeatherService (void);
    void   update (void);
    void   getCurrentWeatherObject (void);
    void   getForecastWeatherObject (void);
    int    getCurrentTemperature (void);
    String getCurrentWeatherIcon (void);
    int    getCurrentRainfall (void);
    int    getCurrentWindSpeed (void);
    int    getCurrentWindDirection (void);
    maxTempRecord getMaxTempRecord (int recordNumber);

private:
    StaticJsonDocument<MAX_CURRENT_WEATHER_JSON_SIZE> mCurrentDoc;
    StaticJsonDocument<MAX_FORECAST_WEATHER_JSON_SIZE> mForecastDoc;
    JsonObject mCurrentObj;
    JsonObject mForecastObj;
    maxTempRecord maxTempRecords [MAX_FORECAST_DAYS];
};

#endif