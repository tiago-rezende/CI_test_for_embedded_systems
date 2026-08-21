#include "adc_driver.h"

static uint32_t mock_adc_value;

void MockADC_SetValue(uint32_t value)
{
    mock_adc_value = value;
}

uint32_t ADC_Driver_Read(void)
{
    return mock_adc_value;
}