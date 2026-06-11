#ifndef RTOS_TASKS_H
#define RTOS_TASKS_H

#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"

#define CMD_MAX_LEN        64U
#define CMD_QUEUE_DEPTH     5U

extern TaskHandle_t uartRxTaskHandle;
extern TaskHandle_t commandTaskHandle;
extern TaskHandle_t ledTaskHandle;

extern QueueHandle_t commandQueue;

#define LED_NOTIFY_ON      1UL
#define LED_NOTIFY_OFF     2UL
#define LED_NOTIFY_TOGGLE  3UL

void MX_CreateTasks(void);

#endif
