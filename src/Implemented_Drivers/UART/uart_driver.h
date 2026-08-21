#ifndef UART_DRIVER_H
#define UART_DRIVER_H

#include "stm32f1xx_hal.h"

void UART_Driver_Init(UART_HandleTypeDef *huart);
void UART_SendMessage(const char *message);

#endif