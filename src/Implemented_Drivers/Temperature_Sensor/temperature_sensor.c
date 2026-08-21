#include "temperature_sensor.h"
#include "adc_driver.h"

static float TemperatureSensor_ConvertToCelsius(uint32_t adc_value);

void TemperatureSensor_Init(void)
{
}

float TemperatureSensor_Read(void)
{
    uint32_t adc_value;

    adc_value = ADC_Driver_Read();

    return TemperatureSensor_ConvertToCelsius(adc_value);
}

static float TemperatureSensor_ConvertToCelsius(uint32_t adc_value)
{
    // ADC 0 -> -10 °C
    // ADC 4095 -> 150 °C
    return -10.0f + ((float)adc_value * 160.0f / 4095.0f);
}