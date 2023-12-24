#pragma once
#include "Expert.h"
#include <cstring>
#include "lv_yinyin.h"

class ExpertMode : public Expert {
protected :
    Expert* _next;
    static char buf[64];

public:
    ExpertMode() : _next(nullptr) {}
    ExpertMode(Expert* next) : _next(next) {}

    void* solve(lv_obj_t* dropdown, lv_obj_t* label);
    virtual void* solve1(lv_obj_t* dropdown, lv_obj_t* label) = 0;
};
