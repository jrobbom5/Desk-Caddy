#include <Arduino.h>
#include <lvgl.h>
#include <LovyanGFX.hpp>
#include <WiFi.h>
#include <WiFiMulti.h>

#include "display.h"
#include "GenericContainer.h"
#include "timedatedisplay.h"

WiFiMulti wifiMulti;

extern void initialiseHardware (void);
void        wifiConnect (void);
bool        isWifiConnected (void);

Display* pDisplay;

void setup ()
{
    Serial.begin (115200);
    initialiseHardware ();

    pDisplay = new Display (lv_scr_act ());
    lv_timer_handler ();
}

void loop ()
{
    static unsigned long start = millis ();
    static bool WeatherActivated = false;
    unsigned long now = millis ();

    if (!isWifiConnected ())
    {
        wifiConnect ();
    }

    if (start + 15000 < now && !WeatherActivated)
    {
        pDisplay->pWeather->activate ();
        WeatherActivated = true;
    }

    pDisplay->updateChildren ();
    lv_timer_handler ();
}

void wifiConnect (void)
{
    wifiMulti.addAP ("TNET2.4G", "BulletIsMySpecialB0y");

    Serial.println ("Connecting Wifi...");
    pDisplay->pMessage->addText ("Connecting Wifi...");
    lv_timer_handler ();

    if (wifiMulti.run () == WL_CONNECTED)
    {
        Serial.println ("");
        Serial.println ("WiFi connected");
        Serial.println ("IP address: ");
        Serial.println (WiFi.localIP ());
        pDisplay->pMessage->addText ("");
        pDisplay->pMessage->addText ("WiFi connected");
        pDisplay->pMessage->addText ("IP address: ");
        pDisplay->pMessage->addText (WiFi.localIP ().toString ());
        lv_timer_handler ();
    }
}

bool isWifiConnected (void)
{
    if (WiFi.status () == WL_CONNECTED)
    {
        return true;
    }
    return false;
}
