#include "EngineCoolantTemp.h"

void* EngineCoolantTemp::solve1(lv_obj_t* dropdown, lv_obj_t* label)
{
    if (strcmp(buf, "Temp. Eau") == 0) {
        lv_label_set_text_fmt(label, "%.1f", lv_yinyin::getCoolantTemp());
        return SUCCESS;
    }
    else
        return nullptr;
}
