
#define LGFX_USE_V1

#include <Arduino.h>
#include "main.h"
#include <SPI.h>
#include <lvgl.h>
#include <LovyanGFX.hpp>
#include "displayhw.h"
#include "display.h"
#include "timedatedisplay.h"
#include "weatherservice.h"

static void anim_x_cb (void* var, int32_t v);
static void anim_y_cb (void* var, int32_t v);
static void anim_size_cb (void* var, int32_t v);
static void anim_fade_cb (void* var, int32_t v);
static void anim_fade_text_cb (void* var, int32_t v);
static void weatherbox_event_cb (lv_event_t* event);
static void messagebox_event_cb (lv_event_t* event);
static void reminderbox_event_cb (lv_event_t* event);

extern Display* pDisplay;
WeatherService* pWeatherService;

Display::Display (lv_obj_t* parent)
    : GenericContainer (parent)
{
    drawBackground (parent);
    lv_timer_handler ();

    pMainBoxReference = new GenericContainer (mpBackgroundObj);
    lv_obj_set_size (mpContainerObj, MAIN_BOX_SIZEX, MAIN_BOX_SIZEY);
    lv_obj_set_pos (mpContainerObj, MAIN_BOX_POSX, MAIN_BOX_POSY);
    lv_obj_clear_flag (mpContainerObj, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_scrollbar_mode (mpContainerObj, LV_SCROLLBAR_MODE_OFF);

    pCurrentlyActive = NULL;

    pWeather = new WeatherBox (mpBackgroundObj);
    addChild (pWeather);

    pMessage = new MessageBox (mpBackgroundObj);
    pMessage->open ();
    pCurrentlyActive = pMessage;
    addChild (pMessage);

    pReminder = new ReminderBox (mpBackgroundObj);
    addChild (pReminder);

    ClockCal* pClockCal = new ClockCal (mpBackgroundObj);
    addChild (pClockCal);

    lv_timer_handler ();
}

void Display::drawBackground (lv_obj_t* parent)
{
    mpBackgroundObj = lv_obj_create (parent);
    lv_obj_set_height (mpBackgroundObj, lv_pct (100));
    lv_obj_set_width (mpBackgroundObj, lv_pct (100));
    lv_obj_set_style_bg_color (mpBackgroundObj, lv_color_hex (0x000000), LV_PART_MAIN);
    lv_obj_set_style_border_width (mpBackgroundObj, 0, LV_PART_MAIN);
    lv_obj_set_style_radius (mpBackgroundObj, 0, LV_PART_MAIN);
    lv_obj_set_style_pad_all (mpBackgroundObj, 0, LV_PART_MAIN);
    lv_obj_set_scrollbar_mode (mpBackgroundObj, LV_SCROLLBAR_MODE_OFF);
    lv_obj_clear_flag (mpBackgroundObj, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_scrollbar_mode (mpBackgroundObj, LV_SCROLLBAR_MODE_OFF);

    mpBackgroundImage = lv_img_create (mpBackgroundObj);
    lv_obj_align (mpBackgroundImage, LV_ALIGN_BOTTOM_LEFT, 0, 0);
    lv_img_set_src (mpBackgroundImage, &Background);
}

BorderBox::BorderBox (lv_obj_t* parent)
    : GenericContainer (parent)
{
}

void BorderBox::init (lv_obj_t* parent, const void* boxImage, int yPos)
{
    mpBoxImage = boxImage;
    mYPos      = yPos;

    lv_obj_set_size (mpContainerObj, MINI_BOX_SIZEX, MINI_BOX_SIZEY);
    lv_obj_set_pos (mpContainerObj, MINI_BOX_POSX, mYPos);
    lv_obj_set_align (mpContainerObj, LV_ALIGN_TOP_LEFT);
    lv_obj_clear_flag (mpContainerObj, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_scrollbar_mode (mpContainerObj, LV_SCROLLBAR_MODE_OFF);

    mpMiniBoxStaticImageObj = lv_img_create (mpContainerObj);
    lv_obj_center (mpMiniBoxStaticImageObj);
    lv_img_set_src (mpMiniBoxStaticImageObj, mpBoxImage);
    lv_img_set_zoom (mpMiniBoxStaticImageObj, MINI_BOX_ZOOM);

    mpMiniContentBoxObj = lv_obj_create (mpContainerObj);
    lv_obj_set_size (mpMiniContentBoxObj, lv_pct (100), lv_pct (100));
    lv_obj_center (mpMiniContentBoxObj);
    lv_obj_add_style (mpMiniContentBoxObj, &mContainerStyle, LV_PART_MAIN);
    lv_obj_clear_flag (mpMiniContentBoxObj, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_scrollbar_mode (mpMiniContentBoxObj, LV_SCROLLBAR_MODE_OFF);

    mpMainContentBoxObj = lv_obj_create (parent);
    lv_obj_set_size (mpMainContentBoxObj, MAIN_BOX_SIZEX, MAIN_BOX_SIZEY);
    lv_obj_set_pos (mpMainContentBoxObj, MAIN_BOX_POSX, MAIN_BOX_POSY);
    lv_obj_add_style (mpMainContentBoxObj, &mContainerStyle, LV_PART_MAIN);
    lv_obj_set_style_pad_bottom (mpMainContentBoxObj, 7, LV_PART_MAIN);
    lv_obj_clear_flag (mpMainContentBoxObj, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_scrollbar_mode (mpMainContentBoxObj, LV_SCROLLBAR_MODE_OFF);

    mpMiniBoxMovingImageObj = lv_img_create (parent);
    lv_obj_set_pos (mpMiniBoxMovingImageObj, MAIN_BOX_POSX, MAIN_BOX_POSY);
    lv_obj_set_align (mpMiniBoxMovingImageObj, LV_ALIGN_TOP_LEFT);
    lv_img_set_src (mpMiniBoxMovingImageObj, mpBoxImage);
    lv_img_set_zoom (mpMiniBoxMovingImageObj, MAIN_BOX_ZOOM);

    lv_obj_set_pos (mpMiniBoxMovingImageObj, MINI_BOX_POSX - ZOOM_XOFFSET, mYPos - ZOOM_YOFFSET);
    lv_img_set_zoom (mpMiniBoxMovingImageObj, MINI_BOX_ZOOM);

    mpMiniBoxButton = lv_btn_create (mpContainerObj);
    lv_obj_set_size (mpMiniBoxButton, lv_pct (100), lv_pct (100));
    lv_obj_center (mpMiniBoxButton);
    lv_obj_add_style (mpMiniBoxButton, &mContainerStyle, LV_PART_MAIN);
    lv_obj_clear_flag (mpMiniBoxButton, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_scrollbar_mode (mpMiniBoxButton, LV_SCROLLBAR_MODE_OFF);

    lv_obj_add_flag (mpMainContentBoxObj, LV_OBJ_FLAG_HIDDEN);

    buildAnimationTimeline ();
}

void BorderBox::buildAnimationTimeline (void)
{
#define ACTIVATION_PART_ONE_DURATION   400
#define ACTIVATION_PART_TWO_DURATION   300
#define DEACTIVATION_PART_ONE_DURATION 150
#define DEACTIVATION_PART_TWO_DURATION 1

    lv_anim_t a1;
    lv_anim_init (&a1);
    lv_anim_set_var (&a1, mpMiniBoxMovingImageObj);
    lv_anim_set_time (&a1, ACTIVATION_PART_ONE_DURATION);
    lv_anim_set_path_cb (&a1, lv_anim_path_ease_out);
    lv_anim_set_exec_cb (&a1, anim_x_cb);
    lv_anim_set_values (&a1, MINI_BOX_POSX - ZOOM_XOFFSET, MAIN_BOX_POSX);

    lv_anim_t a3;
    lv_anim_init (&a3);
    lv_anim_set_var (&a3, mpMiniBoxMovingImageObj);
    lv_anim_set_time (&a3, ACTIVATION_PART_ONE_DURATION);
    lv_anim_set_path_cb (&a3, lv_anim_path_ease_in);
    lv_anim_set_exec_cb (&a3, anim_y_cb);
    lv_anim_set_values (&a3, mYPos - ZOOM_YOFFSET, MAIN_BOX_POSY);

    lv_anim_t a4;
    lv_anim_init (&a4);
    lv_anim_set_var (&a4, mpMiniBoxMovingImageObj);
    lv_anim_set_time (&a4, ACTIVATION_PART_TWO_DURATION);
    lv_anim_set_path_cb (&a4, lv_anim_path_ease_in_out);
    lv_anim_set_exec_cb (&a4, anim_size_cb);
    lv_anim_set_values (&a4, MINI_BOX_ZOOM, MINI_BOX_ZOOM / 2);

    lv_anim_t a2;
    lv_anim_init (&a2);
    lv_anim_set_var (&a2, mpMiniBoxMovingImageObj);
    lv_anim_set_time (&a2, ACTIVATION_PART_TWO_DURATION);
    lv_anim_set_path_cb (&a2, lv_anim_path_bounce);
    lv_anim_set_exec_cb (&a2, anim_size_cb);
    lv_anim_set_values (&a2, MINI_BOX_ZOOM / 2, MAIN_BOX_ZOOM);

    lv_anim_t a5;
    lv_anim_init (&a5);
    lv_anim_set_var (&a5, mpMainContentBoxObj);
    lv_anim_set_time (&a5, ACTIVATION_PART_TWO_DURATION / 2);
    lv_anim_set_path_cb (&a5, lv_anim_path_ease_out);
    lv_anim_set_exec_cb (&a5, anim_fade_text_cb);
    lv_anim_set_values (&a5, LV_OPA_TRANSP, LV_OPA_COVER);
    // lv_anim_set_values (&a5, MINI_BOX_ZOOM / 2, MAIN_BOX_ZOOM);

    mpActivationAnimationTimeline = lv_anim_timeline_create ();
    lv_anim_timeline_add (mpActivationAnimationTimeline, 0, &a1);
    lv_anim_timeline_add (mpActivationAnimationTimeline, 0, &a3);
    lv_anim_timeline_add (mpActivationAnimationTimeline, 0, &a4);
    lv_anim_timeline_add (mpActivationAnimationTimeline, ACTIVATION_PART_ONE_DURATION, &a2);
    lv_anim_timeline_add (mpActivationAnimationTimeline, ACTIVATION_PART_ONE_DURATION + (ACTIVATION_PART_TWO_DURATION / 2), &a5);

    lv_anim_t b1;
    lv_anim_init (&b1);
    lv_anim_set_var (&b1, mpMiniBoxMovingImageObj);
    lv_anim_set_time (&b1, DEACTIVATION_PART_ONE_DURATION);
    lv_anim_set_path_cb (&b1, lv_anim_path_ease_in);
    lv_anim_set_exec_cb (&b1, anim_size_cb);
    lv_anim_set_values (&b1, MAIN_BOX_ZOOM, MINI_BOX_ZOOM);

    lv_anim_t b2;
    lv_anim_init (&b2);
    lv_anim_set_var (&b2, mpMiniBoxMovingImageObj);
    lv_anim_set_time (&b2, DEACTIVATION_PART_ONE_DURATION);
    lv_anim_set_path_cb (&b2, lv_anim_path_ease_in);
    lv_anim_set_exec_cb (&b2, anim_fade_cb);
    lv_anim_set_values (&b2, LV_OPA_COVER, LV_OPA_TRANSP);

    lv_anim_t b3;
    lv_anim_init (&b3);
    lv_anim_set_var (&b3, mpMiniBoxMovingImageObj);
    lv_anim_set_time (&b3, DEACTIVATION_PART_TWO_DURATION);
    lv_anim_set_path_cb (&b3, lv_anim_path_ease_in_out);
    lv_anim_set_exec_cb (&b3, anim_x_cb);
    lv_anim_set_values (&b3, MAIN_BOX_POSX, MINI_BOX_POSX - ZOOM_XOFFSET);

    lv_anim_t b4;
    lv_anim_init (&b4);
    lv_anim_set_var (&b4, mpMiniBoxMovingImageObj);
    lv_anim_set_time (&b4, DEACTIVATION_PART_TWO_DURATION);
    lv_anim_set_path_cb (&b4, lv_anim_path_ease_in_out);
    lv_anim_set_exec_cb (&b4, anim_y_cb);
    lv_anim_set_values (&b4, MAIN_BOX_POSY, mYPos - ZOOM_YOFFSET);

    mpDeactivationAnimationTimeline = lv_anim_timeline_create ();
    lv_anim_timeline_add (mpDeactivationAnimationTimeline, 0, &b1);
    lv_anim_timeline_add (mpDeactivationAnimationTimeline, 0, &b2);
    lv_anim_timeline_add (mpDeactivationAnimationTimeline, DEACTIVATION_PART_ONE_DURATION, &b3);
    lv_anim_timeline_add (mpDeactivationAnimationTimeline, DEACTIVATION_PART_ONE_DURATION, &b4);
}

void BorderBox::activate (void)
{
    if (pDisplay->pCurrentlyActive == NULL)
    {
        pDisplay->pCurrentlyActive = this;
    }
    else
    {
        if (pDisplay->pCurrentlyActive == this)
        {
            return;
        }
        pDisplay->pCurrentlyActive->deactivate ();
        pDisplay->pCurrentlyActive = this;
    }
    lv_obj_set_style_img_opa (mpMiniBoxMovingImageObj, LV_OPA_COVER, LV_PART_MAIN);
    lv_anim_timeline_start (mpActivationAnimationTimeline);
    lv_obj_clear_flag (mpMainContentBoxObj, LV_OBJ_FLAG_HIDDEN);
}

void BorderBox::deactivate (void)
{
    lv_obj_add_flag (mpMainContentBoxObj, LV_OBJ_FLAG_HIDDEN);
    lv_anim_timeline_start (mpDeactivationAnimationTimeline);
}

void BorderBox::open (void)
{
    lv_obj_set_pos (mpMiniBoxMovingImageObj, MAIN_BOX_POSX, MAIN_BOX_POSY);
    lv_img_set_zoom (mpMiniBoxMovingImageObj, MAIN_BOX_ZOOM);
    lv_obj_clear_flag (mpMainContentBoxObj, LV_OBJ_FLAG_HIDDEN);
}

void BorderBox::close (void)
{
    lv_obj_set_pos (mpMiniBoxMovingImageObj, MINI_BOX_POSX - ZOOM_XOFFSET, mYPos - ZOOM_YOFFSET);
    lv_img_set_zoom (mpMiniBoxMovingImageObj, MINI_BOX_ZOOM);
    lv_obj_add_flag (mpMainContentBoxObj, LV_OBJ_FLAG_HIDDEN);
}

static void anim_x_cb (void* var, int32_t v)
{
    lv_obj_set_x ((lv_obj_t*)var, v);
}

static void anim_y_cb (void* var, int32_t v)
{
    lv_obj_set_y ((lv_obj_t*)var, v);
}

static void anim_size_cb (void* var, int32_t v)
{
    lv_img_set_zoom ((lv_obj_t*)var, v);
}

static void anim_fade_cb (void* var, int32_t v)
{
    lv_obj_set_style_img_opa ((lv_obj_t*)var, v, LV_PART_MAIN);
}

static void anim_fade_text_cb (void* var, int32_t v)
{
    // lv_obj_set_style_text_opa ((lv_obj_t*)var, v, LV_PART_MAIN);
    // lv_obj_set_style_img_opa ((lv_obj_t*)var, v, LV_PART_MAIN);
    lv_obj_set_style_opa ((lv_obj_t*)var, v, LV_PART_MAIN);
}

static void weatherbox_event_cb (lv_event_t* event)
{
    pDisplay->pWeather->activate ();
}

static void messagebox_event_cb (lv_event_t* event)
{
    pDisplay->pMessage->activate ();
}

static void reminderbox_event_cb (lv_event_t* event)
{
    pDisplay->pReminder->activate ();
}

WeatherBox::WeatherBox (lv_obj_t* parent)
    : BorderBox (parent)
{
    init (parent, &Box1, MINI_BOX_POSY);
    lv_obj_add_event_cb (mpMiniBoxButton, &weatherbox_event_cb, LV_EVENT_RELEASED, NULL);
    pWeatherService = new WeatherService ();

    {
        mpMiniWeatherContainer = lv_obj_create (mpMiniContentBoxObj);
        lv_obj_add_style (mpMiniWeatherContainer, &mContainerStyle, LV_PART_MAIN);
        lv_obj_center (mpMiniWeatherContainer);
        lv_obj_set_size (mpMiniWeatherContainer, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
        lv_obj_set_layout (mpMiniWeatherContainer, LV_LAYOUT_FLEX);
        lv_obj_set_flex_flow (mpMiniWeatherContainer, LV_FLEX_FLOW_ROW);
        lv_obj_set_flex_align (mpMiniWeatherContainer, LV_FLEX_ALIGN_SPACE_EVENLY, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
        lv_obj_set_style_pad_row (mpMiniWeatherContainer, 0, LV_PART_MAIN);
        lv_obj_set_style_pad_column (mpMiniWeatherContainer, 0, LV_PART_MAIN);
        lv_obj_clear_flag (mpMiniWeatherContainer, LV_OBJ_FLAG_SCROLLABLE);
        lv_obj_set_scrollbar_mode (mpMiniWeatherContainer, LV_SCROLLBAR_MODE_OFF);

        mpMiniCurrentTemperatureLabel = lv_label_create (mpMiniWeatherContainer);
        lv_obj_add_style (mpMiniCurrentTemperatureLabel, &mContainerStyle, LV_PART_MAIN);
        lv_obj_set_size (mpMiniCurrentTemperatureLabel, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
        // lv_obj_center (mpMiniCurrentTemperatureLabel);
        lv_obj_set_style_text_color (mpMiniCurrentTemperatureLabel, lv_color_hex (0xffffff), LV_PART_MAIN);
        lv_obj_set_style_text_font (mpMiniCurrentTemperatureLabel, &OrbitronRegular18, LV_PART_MAIN);
        lv_label_set_text (mpMiniCurrentTemperatureLabel, "");

        mpMiniCurrentTemperatureIcon = lv_img_create (mpMiniWeatherContainer);
        lv_obj_set_size (mpMiniCurrentTemperatureIcon, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
        lv_img_set_size_mode (mpMiniCurrentTemperatureIcon, LV_IMG_SIZE_MODE_REAL);
        lv_img_set_antialias (mpMiniCurrentTemperatureIcon, true);
        lv_img_set_zoom (mpMiniCurrentTemperatureIcon, (45 * 255 / 75));
    }

    mpMainWeatherContainer = lv_obj_create (mpMainContentBoxObj);
    lv_obj_add_style (mpMainWeatherContainer, &mContainerStyle, LV_PART_MAIN);
    lv_obj_center (mpMainWeatherContainer);
    lv_obj_set_size (mpMainWeatherContainer, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
    lv_obj_set_layout (mpMainWeatherContainer, LV_LAYOUT_GRID);
    static lv_coord_t col_dsc[] = { LV_GRID_CONTENT, LV_GRID_TEMPLATE_LAST };
    static lv_coord_t row_dsc[] = { LV_GRID_CONTENT, LV_GRID_CONTENT, LV_GRID_TEMPLATE_LAST };
    lv_obj_set_grid_dsc_array (mpMainWeatherContainer, col_dsc, row_dsc);
    lv_obj_set_style_pad_row (mpMainWeatherContainer, 5, LV_PART_MAIN);
    lv_obj_set_style_pad_column (mpMainWeatherContainer, 0, LV_PART_MAIN);
    lv_obj_clear_flag (mpMainWeatherContainer, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_scrollbar_mode (mpMainWeatherContainer, LV_SCROLLBAR_MODE_OFF);

    {
        mpMainWeatherTopContainer = lv_obj_create (mpMainWeatherContainer);
        lv_obj_add_style (mpMainWeatherTopContainer, &mContainerStyle, LV_PART_MAIN);
        lv_obj_center (mpMainWeatherTopContainer);
        lv_obj_set_size (mpMainWeatherTopContainer, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
        lv_obj_set_layout (mpMainWeatherTopContainer, LV_LAYOUT_GRID);
        static lv_coord_t top_col_dsc[] = { LV_GRID_CONTENT, LV_GRID_CONTENT, LV_GRID_CONTENT, LV_GRID_TEMPLATE_LAST };
        static lv_coord_t top_row_dsc[] = { LV_GRID_CONTENT, LV_GRID_CONTENT, LV_GRID_TEMPLATE_LAST };
        lv_obj_set_grid_dsc_array (mpMainWeatherTopContainer, top_col_dsc, top_row_dsc);
        lv_obj_set_grid_cell (mpMainWeatherTopContainer, LV_GRID_ALIGN_CENTER, 0, 1, LV_GRID_ALIGN_CENTER, 0, 1);
        lv_obj_set_style_pad_row (mpMainWeatherTopContainer, 0, LV_PART_MAIN);
        lv_obj_set_style_pad_column (mpMainWeatherTopContainer, 10, LV_PART_MAIN);
        lv_obj_clear_flag (mpMainWeatherTopContainer, LV_OBJ_FLAG_SCROLLABLE);
        lv_obj_set_scrollbar_mode (mpMainWeatherTopContainer, LV_SCROLLBAR_MODE_OFF);

        mpMainCurrentTemperatureLabel = lv_label_create (mpMainWeatherTopContainer);
        lv_obj_add_style (mpMainCurrentTemperatureLabel, &mContainerStyle, LV_PART_MAIN);
        lv_obj_set_size (mpMainCurrentTemperatureLabel, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
        lv_obj_set_style_text_color (mpMainCurrentTemperatureLabel, lv_color_hex (0xffffff), LV_PART_MAIN);
        lv_obj_set_style_text_font (mpMainCurrentTemperatureLabel, &OrbitronRegular18, LV_PART_MAIN);
        lv_label_set_text (mpMainCurrentTemperatureLabel, "");
        lv_obj_set_grid_cell (mpMainCurrentTemperatureLabel, LV_GRID_ALIGN_CENTER, 0, 1, LV_GRID_ALIGN_CENTER, 1, 1);

        mpMainCurrentTemperatureIcon = lv_img_create (mpMainWeatherTopContainer);
        lv_obj_set_size (mpMainCurrentTemperatureIcon, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
        lv_img_set_size_mode (mpMainCurrentTemperatureIcon, LV_IMG_SIZE_MODE_REAL);
        lv_img_set_antialias (mpMainCurrentTemperatureIcon, true);
        lv_img_set_zoom (mpMainCurrentTemperatureIcon, (70 * 255 / 75));
        lv_obj_set_grid_cell (mpMainCurrentTemperatureIcon, LV_GRID_ALIGN_CENTER, 0, 1, LV_GRID_ALIGN_CENTER, 0, 1);

        mpMainCurrentRainfallLabel = lv_label_create (mpMainWeatherTopContainer);
        lv_obj_add_style (mpMainCurrentRainfallLabel, &mContainerStyle, LV_PART_MAIN);
        lv_obj_set_size (mpMainCurrentRainfallLabel, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
        lv_obj_set_style_text_color (mpMainCurrentRainfallLabel, lv_color_hex (0xffffff), LV_PART_MAIN);
        lv_obj_set_style_text_font (mpMainCurrentRainfallLabel, &OrbitronRegular18, LV_PART_MAIN);
        lv_label_set_text (mpMainCurrentRainfallLabel, "");
        lv_obj_set_grid_cell (mpMainCurrentRainfallLabel, LV_GRID_ALIGN_CENTER, 1, 1, LV_GRID_ALIGN_CENTER, 1, 1);

        mpMainCurrentRainfallIcon = lv_img_create (mpMainWeatherTopContainer);
        lv_obj_set_size (mpMainCurrentRainfallIcon, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
        lv_img_set_size_mode (mpMainCurrentRainfallIcon, LV_IMG_SIZE_MODE_REAL);
        lv_img_set_antialias (mpMainCurrentRainfallIcon, true);
        lv_img_set_zoom (mpMainCurrentRainfallIcon, (70 * 255 / 75));
        lv_obj_set_grid_cell (mpMainCurrentRainfallIcon, LV_GRID_ALIGN_CENTER, 1, 1, LV_GRID_ALIGN_CENTER, 0, 1);
        lv_img_set_src (mpMainCurrentRainfallIcon, &Raindrop);

        mpMainCurrentWindLabel = lv_label_create (mpMainWeatherTopContainer);
        lv_obj_add_style (mpMainCurrentWindLabel, &mContainerStyle, LV_PART_MAIN);
        lv_obj_set_size (mpMainCurrentWindLabel, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
        lv_obj_set_style_text_color (mpMainCurrentWindLabel, lv_color_hex (0xffffff), LV_PART_MAIN);
        lv_obj_set_style_text_font (mpMainCurrentWindLabel, &OrbitronRegular18, LV_PART_MAIN);
        lv_label_set_text (mpMainCurrentWindLabel, "");
        lv_obj_set_grid_cell (mpMainCurrentWindLabel, LV_GRID_ALIGN_CENTER, 2, 1, LV_GRID_ALIGN_CENTER, 1, 1);

        mpMainCurrentWindIcon = lv_img_create (mpMainWeatherTopContainer);
        lv_obj_set_size (mpMainCurrentWindIcon, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
        lv_img_set_size_mode (mpMainCurrentWindIcon, LV_IMG_SIZE_MODE_REAL);
        lv_img_set_antialias (mpMainCurrentWindIcon, true);
        lv_img_set_zoom (mpMainCurrentWindIcon, (70 * 255 / 75));
        lv_obj_set_grid_cell (mpMainCurrentWindIcon, LV_GRID_ALIGN_CENTER, 2, 1, LV_GRID_ALIGN_CENTER, 0, 1);
    }

    mpMainWeatherBottomContainer = lv_obj_create (mpMainWeatherContainer);
    lv_obj_add_style (mpMainWeatherBottomContainer, &mContainerStyle, LV_PART_MAIN);
    lv_obj_center (mpMainWeatherBottomContainer);
    lv_obj_set_size (mpMainWeatherBottomContainer, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
    lv_obj_set_layout (mpMainWeatherBottomContainer, LV_LAYOUT_GRID);
    static lv_coord_t bottom_col_dsc[] = { LV_GRID_CONTENT, LV_GRID_CONTENT, LV_GRID_CONTENT, LV_GRID_CONTENT, LV_GRID_CONTENT, LV_GRID_TEMPLATE_LAST };
    static lv_coord_t bottom_row_dsc[] = { LV_GRID_CONTENT, LV_GRID_CONTENT, LV_GRID_CONTENT, LV_GRID_TEMPLATE_LAST };
    lv_obj_set_grid_dsc_array (mpMainWeatherBottomContainer, bottom_col_dsc, bottom_row_dsc);
    lv_obj_set_grid_cell (mpMainWeatherBottomContainer, LV_GRID_ALIGN_CENTER, 0, 1, LV_GRID_ALIGN_CENTER, 1, 1);
    lv_obj_set_style_pad_row (mpMainWeatherBottomContainer, 0, LV_PART_MAIN);
    lv_obj_set_style_pad_column (mpMainWeatherBottomContainer, 10, LV_PART_MAIN);
    lv_obj_clear_flag (mpMainWeatherBottomContainer, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_scrollbar_mode (mpMainWeatherBottomContainer, LV_SCROLLBAR_MODE_OFF);

    for (int i = 0; i < MAX_FORECAST_DAYS; i++)
    {
        mpForecastIcon[i] = lv_img_create (mpMainWeatherBottomContainer);
        lv_obj_set_size (mpForecastIcon[i], LV_SIZE_CONTENT, LV_SIZE_CONTENT);
        lv_img_set_size_mode (mpForecastIcon[i], LV_IMG_SIZE_MODE_REAL);
        lv_img_set_antialias (mpForecastIcon[i], true);
        lv_img_set_zoom (mpForecastIcon[i], (50 * 255 / 75));
        lv_img_set_size_mode (mpForecastIcon[i], LV_IMG_SIZE_MODE_REAL);
        lv_obj_set_grid_cell (mpForecastIcon[i], LV_GRID_ALIGN_CENTER, i, 1, LV_GRID_ALIGN_CENTER, 0, 1);

        mpForecastTemp[i] = lv_label_create (mpMainWeatherBottomContainer);
        lv_obj_add_style (mpForecastTemp[i], &mContainerStyle, LV_PART_MAIN);
        lv_obj_set_size (mpForecastTemp[i], LV_SIZE_CONTENT, LV_SIZE_CONTENT);
        lv_obj_set_style_text_color (mpForecastTemp[i], lv_color_hex (0xffffff), LV_PART_MAIN);
        lv_obj_set_style_text_font (mpForecastTemp[i], &OrbitronRegular18, LV_PART_MAIN);
        lv_label_set_text (mpForecastTemp[i], "");
        lv_obj_set_grid_cell (mpForecastTemp[i], LV_GRID_ALIGN_CENTER, i, 1, LV_GRID_ALIGN_CENTER, 1, 1);

        mpForecastDay[i] = lv_label_create (mpMainWeatherBottomContainer);
        lv_obj_add_style (mpForecastDay[i], &mContainerStyle, LV_PART_MAIN);
        lv_obj_set_size (mpForecastDay[i], LV_SIZE_CONTENT, LV_SIZE_CONTENT);
        lv_obj_set_style_text_color (mpForecastDay[i], lv_color_hex (0xffffaa), LV_PART_MAIN);
        lv_obj_set_style_text_font (mpForecastDay[i], &OrbitronRegular16, LV_PART_MAIN);
        lv_label_set_text (mpForecastDay[i], "");
        lv_obj_set_grid_cell (mpForecastDay[i], LV_GRID_ALIGN_CENTER, i, 1, LV_GRID_ALIGN_CENTER, 2, 1);
    }
    mUpdateIntervalSeconds = 60;
}

void WeatherBox::setWeatherIconImage (lv_obj_t* parent, String icon)
{
    // Serial.println ("MainIconBox::setIconImage");

    if (!strcmp (icon.c_str (), "01d"))
    {
        lv_img_set_src (parent, &icon01d);
    }
    else if (!strcmp (icon.c_str (), "01n"))
    {
        lv_img_set_src (parent, &icon01n);
    }
    else if (!strcmp (icon.c_str (), "02d") || !strcmp (icon.c_str (), "03d"))
    {
        lv_img_set_src (parent, &icon02d);
    }
    else if (!strcmp (icon.c_str (), "02n") || !strcmp (icon.c_str (), "03n"))
    {
        lv_img_set_src (parent, &icon02n);
    }
    else if (!strcmp (icon.c_str (), "04d") || !strcmp (icon.c_str (), "04n"))
    {
        lv_img_set_src (parent, &icon04d);
    }
    else if (!strcmp (icon.c_str (), "09d"))
    {
        lv_img_set_src (parent, &icon09d);
    }
    else if (!strcmp (icon.c_str (), "09n"))
    {
        lv_img_set_src (parent, &icon09n);
    }
    else if (!strcmp (icon.c_str (), "10d"))
    {
        lv_img_set_src (parent, &icon10d);
    }
    else if (!strcmp (icon.c_str (), "10n"))
    {
        lv_img_set_src (parent, &icon10n);
    }
    else if (!strcmp (icon.c_str (), "11d"))
    {
        lv_img_set_src (parent, &icon11d);
    }
    else if (!strcmp (icon.c_str (), "11n"))
    {
        lv_img_set_src (parent, &icon11n);
    }
    else if (!strcmp (icon.c_str (), "13d"))
    {
        lv_img_set_src (parent, &icon13d);
    }
    else if (!strcmp (icon.c_str (), "13n"))
    {
        lv_img_set_src (parent, &icon13n);
    }
    else if (!strcmp (icon.c_str (), "50d"))
    {
        lv_img_set_src (parent, &icon50d);
    }
    else if (!strcmp (icon.c_str (), "50n"))
    {
        lv_img_set_src (parent, &icon50n);
    }
}

void WeatherBox::update (void)
{
    if (readyToUpdate ())
    {
        String temp = String (pWeatherService->getCurrentTemperature ());
        lv_label_set_text (mpMiniCurrentTemperatureLabel, (temp + "°").c_str ());
        setWeatherIconImage (mpMiniCurrentTemperatureIcon, pWeatherService->getCurrentWeatherIcon ());
        temp += " °C";
        lv_label_set_text (mpMainCurrentTemperatureLabel, temp.c_str ());
        setWeatherIconImage (mpMainCurrentTemperatureIcon, pWeatherService->getCurrentWeatherIcon ());

        int    rain       = pWeatherService->getCurrentRainfall ();
        String rainString = String (rain) + " mm";
        lv_label_set_text (mpMainCurrentRainfallLabel, rainString.c_str ());

        if (rain == 0)
        {
            lv_obj_add_flag (mpMainCurrentRainfallLabel, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag (mpMainCurrentRainfallIcon, LV_OBJ_FLAG_HIDDEN);
        }
        else
        {
            lv_obj_clear_flag (mpMainCurrentRainfallLabel, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag (mpMainCurrentRainfallIcon, LV_OBJ_FLAG_HIDDEN);
        }

        String windSpeed = String (pWeatherService->getCurrentWindSpeed ()) + " km";
        lv_label_set_text (mpMainCurrentWindLabel, windSpeed.c_str ());

        int windDirection = pWeatherService->getCurrentWindDirection ();
        lv_img_set_angle (mpMainCurrentWindIcon, windDirection * 10);
        lv_img_set_src (mpMainCurrentWindIcon, &WindDirection1);

        for (int i = 0; i < MAX_FORECAST_DAYS; i++)
        {
            maxTempRecord forecastRecord = pWeatherService->getMaxTempRecord (i);
            setWeatherIconImage (mpForecastIcon[i], forecastRecord.icon);
            temp = String (forecastRecord.temp) + "°";
            lv_label_set_text (mpForecastTemp[i], temp.c_str ());
            lv_label_set_text (mpForecastDay[i], forecastRecord.day.c_str ());
        }
    }
}

MessageBox::MessageBox (lv_obj_t* parent)
    : BorderBox (parent)
{
    init (parent, &Box2, MINI_BOX_POSY + MINI_BOX_YOFFSET);
    lv_obj_add_event_cb (mpMiniBoxButton, &messagebox_event_cb, LV_EVENT_RELEASED, NULL);

    mpMiniLabel = lv_label_create (mpMiniContentBoxObj);
    lv_obj_add_style (mpMiniLabel, &mContainerStyle, LV_PART_MAIN);
    lv_obj_set_size (mpMiniLabel, lv_pct (100), lv_pct (100));
    lv_obj_center (mpMiniLabel);
    lv_obj_set_style_pad_all (mpMiniLabel, 10, LV_PART_MAIN);
    lv_obj_set_style_text_color (mpMiniLabel, lv_color_hex (0xffffff), LV_PART_MAIN);
    lv_obj_set_style_text_font (mpMiniLabel, &OrbitronRegular10, LV_PART_MAIN);

    mpMainLabel = lv_label_create (mpMainContentBoxObj);
    lv_obj_add_style (mpMainLabel, &mContainerStyle, LV_PART_MAIN);
    lv_obj_set_size (mpMainLabel, lv_pct (100), lv_pct (100));
    lv_obj_center (mpMainLabel);
    lv_obj_set_style_pad_all (mpMainLabel, 20, LV_PART_MAIN);
    lv_obj_set_style_pad_top (mpMainLabel, 25, LV_PART_MAIN);
    lv_obj_set_style_text_color (mpMainLabel, lv_color_hex (0xffffff), LV_PART_MAIN);
    lv_obj_set_style_text_font (mpMainLabel, &OrbitronRegular18, LV_PART_MAIN);

    lv_label_set_text (mpMiniLabel, "");
    lv_label_set_text (mpMainLabel, "");
}

void MessageBox::addText (String text)
{
    if (mLabelText.length () > 0)
    {
        mLabelText += "\n";
    }
    mLabelText += text;
    lv_label_set_text (mpMiniLabel, mLabelText.c_str ());
    lv_label_set_text (mpMainLabel, mLabelText.c_str ());
    lv_timer_handler ();
}

ReminderBox::ReminderBox (lv_obj_t* parent)
    : BorderBox (parent)
{
    init (parent, &Box3, MINI_BOX_POSY + (MINI_BOX_YOFFSET * 2));
    lv_obj_add_event_cb (mpMiniBoxButton, &reminderbox_event_cb, LV_EVENT_RELEASED, NULL);
}
