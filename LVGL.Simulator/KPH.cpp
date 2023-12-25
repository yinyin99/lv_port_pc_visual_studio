#include "KPH.h"

void* KPH::solve1(lv_obj_t* dropdown, lv_obj_t* label)
{
    if (strcmp(buf, "Vitesse") == 0) {
        lv_label_set_text_fmt(label, "%d", lv_yinyin::getKPH());
        return SUCCESS;
    }
    else
        return nullptr;
}
