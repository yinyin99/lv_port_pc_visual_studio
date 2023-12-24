#ifndef _LV_YINYIN
#define _LV_YINYIN
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl/lvgl.h"

#define ID_SPEED 0
#define ID_TEMP_WATER 1
#define ID_VOLTAGE 2
#define ID_ABSOLUTE_PRESSURE 3
#define ID_RPM 4

    static uint32_t speed = 100;
    static uint32_t rpm = 850;
    
    uint32_t getSpeed(void);
    uint32_t getRPM(void);


    void lv_yinyin_demo(void);
    void lv_yinyin_update(void);


#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*_LV_YINYIN*/
