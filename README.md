# FreeRTOS UART Command Shell (STM32)

A modular command-line shell over UART built with FreeRTOS on STM32.

Implements a clean RTOS architecture: ISR -> Tasks -> Queue -> Hardware control.

Features:
- Non-blocking UART RX via interrupts
- Command parsing with message queues
- Dedicated tasks for RX, parsing, and LED control

Implementing commands:
`led on`, `led off`, `status`

Designed to demonstrate ISR safety, task separation, and concurrency.
