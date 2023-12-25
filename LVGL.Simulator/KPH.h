#pragma once
#include "ExpertMode.h"

class KPH : public ExpertMode {
public:
    KPH() : ExpertMode() {}
    KPH(ExpertMode* next) : ExpertMode(next) {}
    void* solve1(lv_obj_t* dropdown, lv_obj_t* label);
};
