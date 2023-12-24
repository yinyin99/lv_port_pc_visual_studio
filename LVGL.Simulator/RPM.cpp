#include "RPM.h"
#include <iostream>

void* RPM::solve1(lv_obj_t* dropdown, lv_obj_t* label)
{
    if (strcmp(buf, "RPM") == 0) {
        lv_label_set_text_fmt(label, "%d", static_cast<int>(getRPM()));
        return SUCCESS;
    } else 
        return nullptr;
}
