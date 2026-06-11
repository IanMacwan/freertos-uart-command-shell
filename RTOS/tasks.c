#include "tasks.h"
 
#include "uart_driver.h"
#include "led_driver.h"
 
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "semphr.h"
 
#include <string.h>
#include <stdio.h>

TaskHandle_t uartRxTaskHandle = NULL;
TaskHandle_t commandTaskHandle = NULL;
TaskHandle_t ledTaskHandle = NULL;

static volatile uint8_t rxByte = 0;

static void vUartRxTask(void *pvParameters) { return; }

static void vCommandTask(void *pvParameters) { return; }

static void vLedTask(void *pvParameters) { return; }

void MX_CreateTasks(void) {
  commandQueue = xQueueCreate(CMD_QUEUE_DEPTH, CMD_MAX_LEN);
  configASSERT(commandQueue != NULL);

  BaseType_t ret = xTaskCreate(
    vUartRxTask,
    "UartRx",
    256,
    NULL,
    3,
    &uartRxTaskHandle
  );
  configASSERT(ret == pdPASS);


  ret = xTaskCreate(
    vCommandTask,
    "CmdTask",
    256,
    NULL,
    2,
    &commandTaskHandle
  );
  configASSERT(ret == pdPASS);

  ret = xTaskCreate(
    vLedTask,
    "LedTask",
    128,
    NULL,
    1,
    &ledTaskHandle
  );
  configASSERT(ret == pdPASS);
}




