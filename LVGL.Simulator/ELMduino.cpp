#include "ELMduino.h"

float ELM327::batteryVoltage(void)
{
    nb_rx_state = ELM_SUCCESS;
    return 13.7;
}

float ELM327::rpm()
{
    nb_rx_state = ELM_SUCCESS;
    return 850;
}

void ELM327::printError() {
    
}
