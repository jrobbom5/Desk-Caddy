#ifndef DISPLAY_H
#define DISPLAY_H

#define LGFX_USE_V1

#include <Arduino.h>
#include "main.h"
#include <SPI.h>
#include <lvgl.h>
#include <LovyanGFX.hpp>

#include "GenericContainer.h"
#include "weatherservice.h"

LV_IMG_DECLARE (Box1);
LV_IMG_DECLARE (Box2);
LV_IMG_DECLARE (Box3);
LV_IMG_DECLARE (CyanBox);
LV_IMG_DECLARE (RedBox);
LV_IMG_DECLARE (YellowBox);
LV_IMG_DECLARE (MagentaBox);
LV_IMG_DECLARE (Background);

LV_IMG_DECLARE (icon01d);
LV_IMG_DECLARE (icon01n);
LV_IMG_DECLARE (icon02d);
LV_IMG_DECLARE (icon02n);
LV_IMG_DECLARE (icon04d);
LV_IMG_DECLARE (icon09d);
LV_IMG_DECLARE (icon09n);
LV_IMG_DECLARE (icon10d);
LV_IMG_DECLARE (icon10n);
LV_IMG_DECLARE (icon11d);
LV_IMG_DECLARE (icon11n);
LV_IMG_DECLARE (icon13d);
LV_IMG_DECLARE (icon13n);
LV_IMG_DECLARE (icon50d);
LV_IMG_DECLARE (icon50n);
LV_IMG_DECLARE (Raindrop);
LV_IMG_DECLARE (WindDirection1);

LV_FONT_DECLARE (OrbitronRegular10);
LV_FONT_DECLARE (OrbitronRegular12);
LV_FONT_DECLARE (OrbitronRegular16);
LV_FONT_DECLARE (OrbitronRegular18);
LV_FONT_DECLARE (OrbitronRegular20);
LV_FONT_DECLARE (OrbitronRegular24);

#define MAIN_BOX_POSX  17

#define MAIN_BOX_POSY  38
#define MAIN_BOX_SIZEX 310
#define MAIN_BOX_SIZEY 220
#define MAIN_BOX_ZOOM  255

#define MINI_BOX_POSX  342
#define MINI_BOX_SIZEX 122
#define MINI_BOX_SIZEY 86
#define MINI_BOX_ZOOM  100
#define MINI_BOX_POSY 25
#define MINI_BOX_YOFFSET 93

#define ZOOM_XOFFSET (MAIN_BOX_SIZEX - MINI_BOX_SIZEX) / 2
#define ZOOM_YOFFSET (MAIN_BOX_SIZEY - MINI_BOX_SIZEY) / 2


class BorderBox : public GenericContainer
{
public:
    BorderBox (lv_obj_t* parent);
    void init (lv_obj_t* parent, const void* boxImage, int yPos);
    void setEventCallback (lv_event_cb_t my_event_cb);
    void activate (void);
    void deactivate (void);
    void open (void);
    void close (void);
    void buildAnimationTimeline (void);

protected:
    lv_obj_t*           mpMiniBoxButton;
    lv_obj_t*           mpMiniContentBoxObj;
    lv_obj_t*           mpMainContentBoxObj;
    lv_obj_t*           mpMiniBoxStaticImageObj;
    lv_obj_t*           mpMiniBoxMovingImageObj;

private:
    const void*         mpBoxImage;
    int                 mYPos;
    lv_anim_timeline_t* mpActivationAnimationTimeline;
    lv_anim_timeline_t* mpDeactivationAnimationTimeline;
};

class WeatherBox : public BorderBox
{
public:
    WeatherBox (lv_obj_t* parent);
    void update (void);
    void setWeatherIconImage (lv_obj_t *parent, String icon);

private:
    lv_obj_t* mpMiniWeatherContainer;
    lv_obj_t* mpMiniCurrentTemperatureLabel;
    lv_obj_t* mpMiniCurrentTemperatureIcon;

    lv_obj_t* mpMainWeatherContainer;
    lv_obj_t* mpMainWeatherTopContainer;
    lv_obj_t* mpMainWeatherBottomContainer;

    lv_obj_t* mpMainCurrentTemperatureLabel;
    lv_obj_t* mpMainCurrentTemperatureIcon;
    lv_obj_t* mpMainCurrentRainfallLabel;
    lv_obj_t* mpMainCurrentRainfallIcon;
    lv_obj_t* mpMainCurrentWindLabel;
    lv_obj_t* mpMainCurrentWindIcon;

    lv_obj_t* mpForecastIcon[MAX_FORECAST_DAYS];
    lv_obj_t* mpForecastTemp[MAX_FORECAST_DAYS];
    lv_obj_t* mpForecastDay[MAX_FORECAST_DAYS];

};

class MessageBox : public BorderBox
{
public:
    MessageBox (lv_obj_t* parent);
    void addText (String text);

private:
    lv_obj_t* mpMiniLabel;
    lv_obj_t* mpMainLabel;
    String mLabelText;
};

class ReminderBox : public BorderBox
{
public:
    ReminderBox (lv_obj_t* parent);

private:
};

class Display : public GenericContainer
{
public:
    Display (lv_obj_t* parent);
    void drawBackground (lv_obj_t* parent);

    WeatherBox* pWeather;
    MessageBox* pMessage;
    ReminderBox* pReminder;
    BorderBox* pCurrentlyActive;
    GenericContainer* pMainBoxReference;

private:
    lv_obj_t* mpBackgroundObj;
    lv_obj_t* mpBackgroundImage;
};

#endif
