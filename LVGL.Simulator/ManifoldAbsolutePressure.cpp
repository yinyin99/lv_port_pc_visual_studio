#include "ManifoldAbsolutePressure.h"

void* ManifoldAbsolutePressure::solve1(lv_obj_t* dropdown, lv_obj_t* label)
{
    if (strcmp(buf, "Absolute Pressure") == 0) {
        lv_label_set_text_fmt(label, "%.2fb", float(lv_yinyin::getAbsolutePressure())/100);
        return SUCCESS;
    }
    else
        return nullptr;
}
