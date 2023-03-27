#include <Arduino.h>
#include <lvgl.h>
#include <LovyanGFX.hpp>
#include "mytimedate.h"
#include "timedatedisplay.h"
#include "GenericContainer.h"

LV_FONT_DECLARE (OrbitronBold40);
LV_FONT_DECLARE (OrbitronRegular16);

myTimeDate* pTimeDate;

Clock::Clock (lv_obj_t* parent) : GenericContainer (parent)
{
    pTimeDate = new myTimeDate ();

    lv_obj_set_size (mpContainerObj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    mClockLabel = lv_label_create (parent);
    lv_obj_align (mClockLabel, LV_ALIGN_LEFT_MID, 0, 0);
    lv_obj_set_size (mClockLabel, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
    lv_obj_add_style (mClockLabel, &mContainerStyle, LV_PART_MAIN);
    lv_obj_set_style_text_color (mClockLabel, lv_color_hex (0xe0ffff), LV_PART_MAIN);
    lv_obj_set_style_text_font (mClockLabel, &OrbitronBold40, LV_PART_MAIN);
    lv_label_set_text (mClockLabel, "");

    mUpdateIntervalSeconds = 1;
}

void Clock::update (void)
{
    if (readyToUpdate ())
    {
        String time = pTimeDate->getTimeString ();
        lv_label_set_text (mClockLabel, time.c_str ());
    }
}

Calendar::Calendar (lv_obj_t* parent)
    : GenericContainer (parent)
{
    lv_obj_align (mpContainerObj, LV_ALIGN_RIGHT_MID, 0, 0);
    lv_obj_set_size (mpContainerObj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
    lv_obj_set_layout (mpContainerObj, LV_LAYOUT_FLEX);
    lv_obj_set_flex_flow (mpContainerObj, LV_FLEX_FLOW_ROW);
    lv_obj_set_style_pad_row (mpContainerObj, 0, LV_PART_MAIN);
    lv_obj_set_style_pad_column (mpContainerObj, 10, LV_PART_MAIN);

    mMonthAndDayObj = lv_obj_create (mpContainerObj);
    lv_obj_add_style (mMonthAndDayObj, &mContainerStyle, LV_PART_MAIN);
    lv_obj_set_size (mMonthAndDayObj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
    lv_obj_set_layout (mMonthAndDayObj, LV_LAYOUT_FLEX);
    lv_obj_set_flex_flow (mMonthAndDayObj, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align (mMonthAndDayObj, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_END, LV_FLEX_ALIGN_CENTER);
    lv_obj_set_style_pad_column (mMonthAndDayObj, 0, LV_PART_MAIN);
    lv_obj_set_style_pad_row (mMonthAndDayObj, 2, LV_PART_MAIN);

    mDateObj = lv_obj_create (mpContainerObj);
    lv_obj_add_style (mDateObj, &mContainerStyle, LV_PART_MAIN);
    lv_obj_set_size (mDateObj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    mDayLabel = lv_label_create (mMonthAndDayObj);
    lv_obj_set_size (mDayLabel, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
    lv_obj_set_style_text_color (mDayLabel, lv_color_hex (0xffff00), LV_PART_MAIN);
    lv_obj_set_style_text_font (mDayLabel, &OrbitronRegular16, LV_PART_MAIN);

    mMonthLabel = lv_label_create (mMonthAndDayObj);
    lv_obj_set_size (mMonthLabel, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
    lv_obj_set_style_text_color (mMonthLabel, lv_color_hex (0xffff00), LV_PART_MAIN);
    lv_obj_set_style_text_font (mMonthLabel, &OrbitronRegular16, LV_PART_MAIN);

    mDateLabel = lv_label_create (mDateObj);
    lv_obj_set_size (mDateLabel, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
    lv_obj_set_style_text_color (mDateLabel, lv_color_hex (0xe0e0ff), LV_PART_MAIN);
    lv_obj_set_style_text_font (mDateLabel, &OrbitronBold40, LV_PART_MAIN);

    lv_label_set_text (mDayLabel, "");
    lv_label_set_text (mMonthLabel, "");
    lv_label_set_text (mDateLabel, "");

    mUpdateIntervalSeconds = 1;
}

void Calendar::update (void)
{
    // Serial.println ("Calendar::update");
    if (readyToUpdate ())
    {
        // Serial.println ("Calendar::update ready to update");
        String day = pTimeDate->getDay ();
        lv_label_set_text (mDayLabel, day.c_str ());
        String month = pTimeDate->getMonth ();
        lv_label_set_text (mMonthLabel, month.c_str ());
        int mDay = pTimeDate->getMDay ();
        lv_label_set_text (mDateLabel, String (mDay).c_str ());
    }
}

ClockCal::ClockCal (lv_obj_t* parent)
    : GenericContainer (parent)
{
    lv_obj_set_size (mpContainerObj, CLOCK_SIZEX, LV_SIZE_CONTENT);   
    lv_obj_set_pos (mpContainerObj, CLOCK_POSX, CLOCK_POSY); 

    Clock* pClock = new Clock (mpContainerObj);
    addChild (pClock);

    Calendar* pCalendar = new Calendar (mpContainerObj);
    addChild (pCalendar);
}