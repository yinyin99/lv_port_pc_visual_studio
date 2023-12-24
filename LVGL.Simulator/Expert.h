#pragma once

#include "lvgl/lvgl.h"

static void* SUCCESS = reinterpret_cast<void*>(0x99);

class Expert {
public:
    virtual void* solve(lv_obj_t * dropdown, lv_obj_t * label) = 0;
};
