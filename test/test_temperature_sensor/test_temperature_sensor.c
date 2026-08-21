#include <unity.h>

#include "temperature_sensor.h"

void MockADC_SetValue(uint32_t value);

void setUp(void)
{
}

void tearDown(void)
{
}

void test_temperature_sensor_zero_adc(void)
{
    MockADC_SetValue(0);

    float temperature = TemperatureSensor_Read();

    TEST_ASSERT_FLOAT_WITHIN(0.01f, -10.0f, temperature);
}

void test_temperature_sensor_full_scale_adc(void)
{
    MockADC_SetValue(4095);

    float temperature = TemperatureSensor_Read();

    TEST_ASSERT_FLOAT_WITHIN(0.01f, 150.0f, temperature);
}

void test_temperature_sensor_mid_scale_adc(void)
{
    MockADC_SetValue(2047);

    float temperature = TemperatureSensor_Read();

    TEST_ASSERT_FLOAT_WITHIN(0.01f, 69.98f, temperature);
}

void setup(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_temperature_sensor_zero_adc);
    RUN_TEST(test_temperature_sensor_full_scale_adc);
    RUN_TEST(test_temperature_sensor_mid_scale_adc);

    UNITY_END();
}

int main(void)
{
    setup();

    return 0;
}