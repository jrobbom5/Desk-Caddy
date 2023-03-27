#ifndef TIMEDATEDISPLAY_H
#define TIMEDATEDISPLAY_H

#include <Arduino.h>
#include <lvgl.h>
#include <LovyanGFX.hpp>
#include "GenericContainer.h"

#define CLOCK_POSX 12
#define CLOCK_POSY 268
#define CLOCK_SIZEX 316
#define CLOCK_SIZEY 55

class Clock : public GenericContainer
{
public:
    Clock (lv_obj_t* parent);
    void update (void);

private:
    lv_obj_t* mClockLabel;
};

class Calendar : public GenericContainer
{
public:
    Calendar (lv_obj_t* parent);
    void update (void);

private:
    lv_obj_t* mMonthAndDayObj;
    lv_obj_t* mDateObj;
    lv_obj_t* mMonthLabel;
    lv_obj_t* mDayLabel;
    lv_obj_t* mDateLabel;
};

class ClockCal : public GenericContainer
{
public:
    ClockCal (lv_obj_t* parent);

private:
};

#endif