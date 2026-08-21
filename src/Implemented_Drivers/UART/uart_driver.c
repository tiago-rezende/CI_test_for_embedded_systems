#include "uart_driver.h"
#include <string.h>

static UART_HandleTypeDef *uart_handle = NULL;

void UART_Driver_Init(UART_HandleTypeDef *huart)
{
    uart_handle = huart;
}

void UART_SendMessage(const char *message)
{
    HAL_UART_Transmit(
        uart_handle,
        (uint8_t *)message,
        strlen(message),
        100
    );
}