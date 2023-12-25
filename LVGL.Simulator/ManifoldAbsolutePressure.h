#pragma once
#include "ExpertMode.h"

class ManifoldAbsolutePressure : public ExpertMode {
public:
    ManifoldAbsolutePressure() : ExpertMode() {}
    ManifoldAbsolutePressure(ExpertMode* next) : ExpertMode(next) {}
    void* solve1(lv_obj_t* dropdown, lv_obj_t* label);
};
