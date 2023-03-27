#ifndef GENERICCONTAINER_H
#define GENERICCONTAINER_H

#include <Arduino.h>
#include <lvgl.h>
#include <LovyanGFX.hpp>

#define MAX_CHILDREN 10

class GenericContainer
{
public:
    GenericContainer (lv_obj_t* parent);
    void         updateChildren (void);
    void         addChild (GenericContainer* child);
    virtual void update (void);
    bool         readyToUpdate (void);
    lv_obj_t*    getObj (void);

protected:
    GenericContainer* mpChildren[MAX_CHILDREN];
    int               mChildCount;
    lv_obj_t*         mpContainerObj;
    lv_style_t        mContainerStyle;

    int           mUpdateIntervalSeconds;
    unsigned long mLastUpdate;
    bool          mFirstCall;

private:
};

#endif