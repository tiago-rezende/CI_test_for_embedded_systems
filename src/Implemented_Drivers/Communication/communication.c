#include "communication.h"
#include "uart_driver.h"

void Communication_Init(void)
{
    // Nothing to initialize at this abstraction level
}

void Communication_SendMessage(const char *message)
{
    UART_SendMessage(message);
}