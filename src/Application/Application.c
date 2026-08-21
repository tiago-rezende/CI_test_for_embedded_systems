#include "application.h"

#include <stdio.h>

#include "temperature_sensor.h"
#include "uart_driver.h"

void Application_Init(void)
{
    UART_SendMessage("Initializing system...\r\n");
}

void Application_Run(void)
{
    float temperature;
    char message[64];

    temperature = TemperatureSensor_Read();

    sprintf(
        message,
        "Temperature: %.2f degC\r\n",
        temperature
    );

    UART_SendMessage(message);
}

