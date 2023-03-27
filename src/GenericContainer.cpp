#include <Arduino.h>
#include <lvgl.h>
#include <LovyanGFX.hpp>
#include "GenericContainer.h"

extern bool        isWifiConnected (void);

GenericContainer::GenericContainer (lv_obj_t* parent)
{
    mChildCount = 0;
    lv_style_init (&mContainerStyle);
    lv_style_set_radius (&mContainerStyle, 0);
    lv_style_set_pad_all (&mContainerStyle, 0);
    lv_style_set_border_width (&mContainerStyle, 0);
    lv_style_set_bg_opa (&mContainerStyle, LV_OPA_TRANSP);
    lv_style_set_align (&mContainerStyle, LV_ALIGN_TOP_LEFT);

    mpContainerObj = lv_obj_create (parent);
    lv_obj_add_style (mpContainerObj, &mContainerStyle, LV_PART_MAIN);

    mFirstCall             = true;
    mUpdateIntervalSeconds = 0;
    mLastUpdate            = 0;
}

void GenericContainer::updateChildren (void)
{
    for (int i = 0; i < mChildCount; i++)
    {
        mpChildren[i]->update ();
    }
}

void GenericContainer::addChild (GenericContainer* child)
{
    if (mChildCount >= MAX_CHILDREN)
    {
        return;
    }
    mpChildren[mChildCount++] = child;
}

void GenericContainer::update (void)
{
    updateChildren ();
}

bool GenericContainer::readyToUpdate (void)
{
    unsigned long now   = millis ();
    bool          ready = true;

    if (!isWifiConnected ())
    {
        return false;
    }

    if (mLastUpdate + (mUpdateIntervalSeconds * 1000) > now && !mFirstCall)
    {
        ready = false;
    }
    else
    {
        mFirstCall  = false;
        mLastUpdate = now;
    }
    return ready;
}

lv_obj_t* GenericContainer::getObj (void)
{
    return mpContainerObj;
}
