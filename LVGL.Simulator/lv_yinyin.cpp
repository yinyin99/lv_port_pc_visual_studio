#include "lv_yinyin.h"
#include "ui.h"
#include "ELMduino.h"
#include <iostream>


#define CANVAS_WIDTH  240
#define CANVAS_HEIGHT  240

///////////////////// GETTERS ////////////////////
int32_t getKPH(void) {
    return _kph;
}

float getCoolantTemp(void) {
    return _coolantTemp;
}

float getRPM(void) {
    return _rpm;
}

float getVoltage(void) {
    return _voltage;
}

uint8_t getAbsolutePressure(void) {
    return _absolutePressure;
}

///////////////////// SETTERS ////////////////////
void setKph(uint32_t kph) {
    _kph = kph;
}

void setCoolantTemp(float coolantTemp) {
    _coolantTemp = coolantTemp;
}

void setRPM(float rpm) {
    _rpm = rpm;
}

void setVoltage(float voltage) {
    _voltage = voltage;
}

void setAbsolutePressure(uint8_t absolutePressure) {
    _absolutePressure = absolutePressure;
}

///////////////////// FUNCTIONS ////////////////////
template <typename T>
void processValue(ELM327& myELM327, T(ELM327::* func)(), T& result) {
    T temp = (myELM327.*func)();

    if (myELM327.nb_rx_state == ELM_SUCCESS) {
        result = temp;
    }
    else if (myELM327.nb_rx_state != ELM_GETTING_MSG) {
        myELM327.printError();
    }
}

void obd2_values_update(void) {
    ELM327 myELM327;
    processValue(myELM327, &ELM327::rpm, _rpm);
    /*float rpm = myELM327.rpm();
    if (myELM327.nb_rx_state == ELM_SUCCESS)
    {
        _rpm = rpm;
    }
    else if (myELM327.nb_rx_state != ELM_GETTING_MSG)
    {
        myELM327.printError();
    }*/
}

void lv_yinyin_demo(void) {
    ui_init();
}

void lv_yinyin_update(void) {
    obd2_values_update();
    if (lv_obj_is_valid(ui_Label1) && lv_obj_get_screen(ui_Label1) == lv_scr_act()) {
        ui_update();
    }
}


