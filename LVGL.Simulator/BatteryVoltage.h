#pragma once
#include "ExpertMode.h"

class BatteryVoltage : public ExpertMode {
public:
    BatteryVoltage() : ExpertMode() {}
    BatteryVoltage(ExpertMode* next) : ExpertMode(next) {}
    void* solve1(lv_obj_t* dropdown, lv_obj_t* label);
};
