#include "temperature_sensor.h"

static ADC_HandleTypeDef *temperature_adc;

void TemperatureSensor_Init(ADC_HandleTypeDef *hadc)
{
    temperature_adc = hadc;
}

float TemperatureSensor_Read(void)
{
    uint32_t adc_value = 0;

    HAL_ADC_Start(temperature_adc);

    if (HAL_ADC_PollForConversion(temperature_adc, 10) == HAL_OK)
    {
        adc_value = HAL_ADC_GetValue(temperature_adc);
    }

    HAL_ADC_Stop(temperature_adc);

    // ADC 0 -> -10 °C
    // ADC 4095 -> 150 °C
    return -10.0f + ((float)adc_value * 160.0f / 4095.0f);
}