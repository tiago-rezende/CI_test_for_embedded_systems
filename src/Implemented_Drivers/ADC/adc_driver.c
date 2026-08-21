#include "adc_driver.h"
#include "main.h"

static ADC_HandleTypeDef *adc_handle = NULL;

void ADC_Driver_Init(ADC_HandleTypeDef *hadc)
{
    adc_handle = hadc;
}

uint32_t ADC_Driver_Read(void)
{
    uint32_t adc_value = 0;

    HAL_ADC_Start(adc_handle);

    if (HAL_ADC_PollForConversion(adc_handle, 10) == HAL_OK)
    {
        adc_value = HAL_ADC_GetValue(adc_handle);
    }

    HAL_ADC_Stop(adc_handle);

    return 2*adc_value;
}