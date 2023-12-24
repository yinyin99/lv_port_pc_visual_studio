#ifndef _LV_YINYIN
#define _LV_YINYIN
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl/lvgl.h"


    ///////////////////// VARIABLES ////////////////////
    static int32_t _kph;
    static float _coolantTemp;
    static float _rpm;
    static float _voltage;
    static uint8_t _absolutePressure;

    ///////////////////// GETTERS ////////////////////
    int32_t getKPH(void);
    float getCoolantTemp(void);
    float getRPM(void);
    float getVoltage(void);
    uint8_t getAbsolutePressure(void);

    ///////////////////// SETTERS ////////////////////
    void setKph(uint32_t kph);
    void setCoolantTemp(float coolantTemp);
    void setRPM(float rpm);
    void setVoltage(float voltage);
    void setAbsolutePressure(uint8_t absolutePressure);

    ///////////////////// FUNCTIONS ////////////////////
    void lv_yinyin_demo(void);
    void lv_yinyin_update(void);
    void obd2_values_update(void);


#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*_LV_YINYIN*/
