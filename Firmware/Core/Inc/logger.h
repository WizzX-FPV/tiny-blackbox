#include "main.h"
#ifndef LOGGER_H
#define LOGGER_H

#define UART_BAUDRATE_WRITE  1500000
#define UART_BAUDRATE_READ    500000

void Logger_Init(void);
enum status_t Logger_WriteLoop(void);
enum status_t Logger_ReadLoop(void);
void Logger_Stop(void);
void Logger_Dump(int numPages);
void Logger_SendStats(void);
void Logger_Erase(void);
bool Logger_IsMemoryFull(void);

uint8_t Logger_KeyPressed(void);
uint8_t Logger_KeyUnpressed(void);

#endif
