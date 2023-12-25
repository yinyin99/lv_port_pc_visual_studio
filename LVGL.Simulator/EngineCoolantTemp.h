#pragma once
#include "ExpertMode.h"

class EngineCoolantTemp : public ExpertMode {
public:
    EngineCoolantTemp() : ExpertMode() {}
    EngineCoolantTemp(ExpertMode* next) : ExpertMode(next) {}
    void* solve1(lv_obj_t* dropdown, lv_obj_t* label);
};
