#include "BatteryVoltage.h"

void* BatteryVoltage::solve1(lv_obj_t* dropdown, lv_obj_t* label)
{
    if (strcmp(buf, "Voltage") == 0) {
        lv_label_set_text_fmt(label, "%.2f", lv_yinyin::getVoltage());
        return SUCCESS;
    }
    else
        return nullptr;
}
