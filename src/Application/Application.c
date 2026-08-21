#include "Application.h"

#include <stdio.h>

#include "temperature_sensor.h"
#include "communication.h"

void Application_Init(void)
{
    Communication_SendMessage("Initializing system...\r\n");
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

    Communication_SendMessage(message);
}

