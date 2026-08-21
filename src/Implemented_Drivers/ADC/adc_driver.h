#ifndef ADC_DRIVER_H
#define ADC_DRIVER_H

#include "main.h"

void ADC_Driver_Init(ADC_HandleTypeDef *hadc);

uint32_t ADC_Driver_Read(void);

#endif