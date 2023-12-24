#pragma once
#include "lvgl/lvgl.h"


class lv_yinyin {
    ///////////////////// VARIABLES ////////////////////
private:
    static int32_t _kph;
    static float _coolantTemp;
    static float _rpm;
    static float _voltage;
    static uint8_t _absolutePressure;

    ///////////////////// GETTERS ////////////////////
public:
    static int32_t getKPH(void);
    static float getCoolantTemp(void);
    static float getRPM(void);
    static float getVoltage(void);
    static uint8_t getAbsolutePressure(void);

    ///////////////////// SETTERS ////////////////////
    static void setKph(uint32_t kph);
    static void setCoolantTemp(float coolantTemp);
    static void setRPM(float rpm);
    static void setVoltage(float voltage);
    static void setAbsolutePressure(uint8_t absolutePressure);

    ///////////////////// FUNCTIONS ////////////////////
    static void lv_yinyin_demo(void);
    static void lv_yinyin_update(void);
    static void obd2_values_update(void);

};
