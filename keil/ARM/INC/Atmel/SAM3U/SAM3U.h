/******************************************************************************
 * @file:    SAM3U.h
 * @purpose: CMSIS Cortex-M3 Core Peripheral Access Layer Header File for 
 *           Atmel SAM3U Device Series 
 * @version: V1.01
 * @date:    22. June 2009
 *----------------------------------------------------------------------------
 *
 * Copyright (C) 2009 ARM Limited. All rights reserved.
 *
 * ARM Limited (ARM) is supplying this software for use with Cortex-M3 
 * processor based microcontrollers.  This file can be freely distributed 
 * within development tools that are supporting such ARM based processors. 
 *
 * THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
 * OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
 * ARM SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR
 * CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
 *
 ******************************************************************************/


#ifndef __SAM3U_H__
#define __SAM3U_H__

/*
 * ==========================================================================
 * ---------- Interrupt Number Definition -----------------------------------
 * ==========================================================================
 */

typedef enum IRQn
{
/******  Cortex-M3 Processor Exceptions Numbers ***************************************************/
  NonMaskableInt_IRQn           = -14,      /*!< 2 Non Maskable Interrupt                         */
  MemoryManagement_IRQn         = -12,      /*!< 4 Cortex-M3 Memory Management Interrupt          */
  BusFault_IRQn                 = -11,      /*!< 5 Cortex-M3 Bus Fault Interrupt                  */
  UsageFault_IRQn               = -10,      /*!< 6 Cortex-M3 Usage Fault Interrupt                */
  SVCall_IRQn                   = -5,       /*!< 11 Cortex-M3 SV Call Interrupt                   */
  DebugMonitor_IRQn             = -4,       /*!< 12 Cortex-M3 Debug Monitor Interrupt             */
  PendSV_IRQn                   = -2,       /*!< 14 Cortex-M3 Pend SV Interrupt                   */
  SysTick_IRQn                  = -1,       /*!< 15 Cortex-M3 System Tick Interrupt               */

/******  LPC17xx Specific Interrupt Numbers *******************************************************/
  SUPC_IRQn                     = 0,        /*!< Supply Controller Interrupt                      */
  RSTC_IRQn                     = 1,        /*!< Reset Controller Interrupt                       */
  RTC_IRQn                      = 2,        /*!< Real Time Clock Interrupt                        */
  RTT_IRQn                      = 3,        /*!< Real Time Timer Interrupt                        */
  WDT_IRQn                      = 4,        /*!< Watchdog Timer Interrupt                         */
  PMC_IRQn                      = 5,        /*!< Power Management Controller Interrupt            */
  EEFC0_IRQn                    = 6,        /*!< Enhanced Embedded Flash Controller 0 Interrupt   */
  EEFC1_IRQn                    = 7,        /*!< Enhanced Embedded Flash Controller 1 Interrupt   */
  UART_IRQn                     = 8,        /*!< UART Interrupt                                   */
  SMC_IRQn                      = 9,        /*!< Static Memory Controller Interrupt               */
  PIOA_IRQn                     = 10,       /*!< Parallel I/O Controller A Interrupt              */
  PIOB_IRQn                     = 11,       /*!< Parallel I/O Controller B Interrupt              */
  PIOC_IRQn                     = 12,       /*!< Parallel I/O Controller C Interrupt              */
  USART0_IRQn                   = 13,       /*!< USART 0 Interrupt                                */
  USART1_IRQn                   = 14,       /*!< USART 1 Interrupt                                */
  USART2_IRQn                   = 15,       /*!< USART 2 Interrupt                                */
  USART3_IRQn                   = 16,       /*!< USART 3 Interrupt                                */
  HSMCI_IRQn                    = 17,       /*!< High Speed Multimedia Card Interface Interrupt   */
  TWI0_IRQn                     = 18,       /*!< Two-wire Interface 0 Interrupt                   */
  TWI1_IRQn                     = 19,       /*!< Two-wire Interface 1 Interrupt                   */
  SPI_IRQn                      = 20,       /*!< Synchronous Peripheral Interface Interrupt       */
  SSC_IRQn                      = 21,       /*!< Synchronous Serial Controller Interrupt          */
  TC0_IRQn                      = 22,       /*!< Timer Counter 0 Interrupt                        */
  TC1_IRQn                      = 23,       /*!< Timer Counter 1 Interrupt                        */
  TC2_IRQn                      = 24,       /*!< Timer Counter 2 Interrupt                        */
  PWM_IRQn                      = 25,       /*!< Pulse Width Modulation Controller Interrupt      */
  ADC12B_IRQn                   = 26,       /*!< 12-bit ADC Controller Interrupt                  */
  ADC_IRQn                      = 27,       /*!< 10-bit ADC Controller Interrupt                  */
  DMAC_IRQn                     = 28,       /*!< DMA Controller Interrupt                         */
  UDPHS_IRQn                    = 29,       /*!< USB Device High Speed Interrupt                  */
} IRQn_Type;


/*
 * ==========================================================================
 * ----------- Processor and Core Peripheral Section ------------------------
 * ==========================================================================
 */

/* Configuration of the Cortex-M3 Processor and Core Peripherals */
#define __MPU_PRESENT             1         /*!< MPU present or not                               */
#define __NVIC_PRIO_BITS          4         /*!< Number of Bits used for Priority Levels          */
#define __Vendor_SysTickConfig    0         /*!< Set to 1 if different SysTick Config is used     */


#include <core_cm3.h>                       /* Cortex-M3 processor and core peripherals           */
#include "system_SAM3U.h"                   /* System Header                                      */
#include "AT91SAM3U4.h"                     /* Device Series Header                               */


#endif  // __SAM3U_H__
