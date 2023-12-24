#include "ExpertModeRPM.h"

void* ExpertModeRPM::solve1(lv_obj_t* dropdown, lv_obj_t* label)
{
    if (strcmp(buf, "RPM") == 0) {
        lv_label_set_text_fmt(label, "%u", getRPM());
        return SUCCESS;
    } else 
        return nullptr;
}
