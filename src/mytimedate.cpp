#include <time.h>
#include <ESP32Time.h>

#include "mytimedate.h"

extern bool isWifiConnected (void);
long        timezoneOffset     = 36000;
long        lastTimezoneOffset = timezoneOffset;

myTimeDate::myTimeDate ()
{
    updateNTPTime (true);
}

void myTimeDate::init ()
{
    const char* ntpServer          = "pool.ntp.org";
    const long  gmtOffset_sec      = timezoneOffset;
    const int   daylightOffset_sec = 0;
    configTime (gmtOffset_sec, daylightOffset_sec, ntpServer);
    // Serial.println ("Just called configTime. TimezoneOffset = " + String (timezoneOffset));
}

void myTimeDate::updateNTPTime (bool force)
{
    static unsigned long lastCheck = 0;
    static ESP32Time     mRTC (0);
    unsigned long        now      = millis ();
    int                  tryCount = 5;
    int                  result   = 0;

    if (!isWifiConnected ())
    {
        return;
    }

    if (lastCheck + (TIME_CHECK_INTERVAL * 1000) < now || force)
    {
            init ();
        while (!result && tryCount--)
        {
            result = getLocalTime (&mNTPTime);
        }
        if (result)
        {
            // Serial.println ("GetLocalTime was successful");
            lastCheck = now;
            // mRTC.setTime(mNTPTime.tm_sec, mNTPTime.tm_min, mNTPTime.tm_hour, mNTPTime.tm_mday, mNTPTime.tm_mon, mNTPTime.tm_year);
        }
        else
        {
            Serial.println ("Failed to obtain NTP time");
        }
    }

    mRTCTime = mRTC.getTimeStruct ();
}

String myTimeDate::getTimeString (void)
{
    char hours[3];
    char minutes[3];

    if (timezoneOffset != lastTimezoneOffset)
    {
        updateNTPTime (true);
        // Serial.println ("Re-calling updateNTPTime");
        lastTimezoneOffset = timezoneOffset;
    }
    else
    {
        updateNTPTime (false);
    }

    strftime (hours, 3, "%I", &mRTCTime);
    strftime (minutes, 3, "%M", &mRTCTime);

    if (hours[0] == '0')
    {
        hours[0] = hours[1];
        hours[1] = hours[2];
    }

    String currentTime = String (hours) + ":" + String (minutes);

    return currentTime;
}

String myTimeDate::getDay (void)
{
    char day[10];

    updateNTPTime (false);
    strftime (day, 10, "%A", &mRTCTime);
    return String (day);
}

int myTimeDate::getMDay (void)
{
    updateNTPTime (false);
    return mRTCTime.tm_mday;
}

int myTimeDate::getHour (void)
{
    updateNTPTime (false);
    return mRTCTime.tm_hour;
}

String myTimeDate::getMonth (void)
{
    char month[10];

    updateNTPTime (false);
    strftime (month, 10, "%B", &mRTCTime);
    return String (month);
}

String myTimeDate::getAMPM (void)
{
    String AMPM = "AM";
    if (mRTCTime.tm_hour >= 12)
    {
        AMPM = "PM";
    }
    return AMPM;
}