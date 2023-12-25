#pragma once
#include "ExpertMode.h"

class RPM : public ExpertMode {
public:
    RPM() : ExpertMode() {}
    RPM(ExpertMode* next) : ExpertMode(next) {}
    void* solve1(lv_obj_t* dropdown, lv_obj_t* label);
};
