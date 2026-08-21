#ifndef TEMPERATURE_SENSOR_H
#define TEMPERATURE_SENSOR_H

#include "stm32f1xx_hal.h"

void TemperatureSensor_Init(ADC_HandleTypeDef *hadc);

float TemperatureSensor_Read(void);

#endif