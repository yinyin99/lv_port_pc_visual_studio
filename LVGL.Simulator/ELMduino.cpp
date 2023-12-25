#include "ELMduino.h"

float ELM327::batteryVoltage(void)
{
    nb_rx_state = ELM_SUCCESS;
    return float(13.7);
}

float ELM327::rpm()
{
    nb_rx_state = ELM_SUCCESS;
    return float(850);
}

int32_t ELM327::kph()
{
    nb_rx_state = ELM_SUCCESS;
    return 10;
}

uint8_t ELM327::manifoldPressure()
{
    nb_rx_state = ELM_SUCCESS;
    return 98;
}

float ELM327::engineCoolantTemp()
{
    nb_rx_state = ELM_SUCCESS;
    return float(82.3);
}

void ELM327::printError() {
    
}
