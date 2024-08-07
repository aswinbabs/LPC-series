;/*****************************************************************************
; * @file:    startup_SAM3U.s
; * @purpose: CMSIS Cortex-M3 Core Device Startup File 
; *           for the Atmel SAM3U Device Series 
; * @version: V1.0
; * @date:    15. Apr. 2008
; *------- <<< Use Configuration Wizard in Context Menu >>> ------------------
; *
; * Copyright (C) 2009 ARM Limited. All rights reserved.
; * ARM Limited (ARM) is supplying this software for use with Cortex-M3 
; * processor based microcontrollers.  This file can be freely distributed 
; * within development tools that are supporting such ARM based processors. 
; *
; * THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
; * OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
; * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
; * ARM SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR
; * CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
; *
; *****************************************************************************/


; <h> Stack Configuration
;   <o> Stack Size (in Bytes) <0x0-0xFFFFFFFF:8>
; </h>

Stack_Size      EQU     0x00000400

                AREA    STACK, NOINIT, READWRITE, ALIGN=3
Stack_Mem       SPACE   Stack_Size
__initial_sp


; <h> Heap Configuration
;   <o>  Heap Size (in Bytes) <0x0-0xFFFFFFFF:8>
; </h>

Heap_Size       EQU     0x00000000

                AREA    HEAP, NOINIT, READWRITE, ALIGN=3
__heap_base
Heap_Mem        SPACE   Heap_Size
__heap_limit


                PRESERVE8
                THUMB


; Vector Table Mapped to Address 0 at Reset

                AREA    RESET, DATA, READONLY
                EXPORT  __Vectors

__Vectors       DCD     __initial_sp              ; Top of Stack
                DCD     Reset_Handler             ; Reset Handler
                DCD     NMI_Handler               ; NMI Handler
                DCD     HardFault_Handler         ; Hard Fault Handler
                DCD     MemManage_Handler         ; MPU Fault Handler
                DCD     BusFault_Handler          ; Bus Fault Handler
                DCD     UsageFault_Handler        ; Usage Fault Handler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     SVC_Handler               ; SVCall Handler
                DCD     DebugMon_Handler          ; Debug Monitor Handler
                DCD     0                         ; Reserved
                DCD     PendSV_Handler            ; PendSV Handler
                DCD     SysTick_Handler           ; SysTick Handler

                ; External Interrupts
                DCD     SUPC_IRQHandler           ; 16: Supply Controller
                DCD     RSTC_IRQHandler           ; 17: Reset Controller
                DCD     RTC_IRQHandler            ; 18: Real Time Clock
                DCD     RTT_IRQHandler            ; 19: Real Time Timer
                DCD     WDT_IRQHandler            ; 20: Watchdog Timer
                DCD     PMC_IRQHandler            ; 21: Power Management Controller
                DCD     EEFC0_IRQHandler          ; 22: Enhanced Embedded Flash Controller 0
                DCD     EEFC1_IRQHandler          ; 23: Enhanced Embedded Flash Controller 1
                DCD     UART_IRQHandler           ; 24: UART
                DCD     SMC_IRQHandler            ; 25: Static Memory Controller
                DCD     PIOA_IRQHandler           ; 26: Parallel I/O Controller A
                DCD     PIOB_IRQHandler           ; 27: Parallel I/O Controller B
                DCD     PIOC_IRQHandler           ; 28: Parallel I/O Controller C
                DCD     USART0_IRQHandler         ; 29: USART 0
                DCD     USART1_IRQHandler         ; 30: USART 1
                DCD     USART2_IRQHandler         ; 31: USART 2
                DCD     USART3_IRQHandler         ; 32: USART 3
                DCD     HSMCI_IRQHandler          ; 33: High Speed Multimedia Card Interface
                DCD     TWI0_IRQHandler           ; 34: Two-wire Interface 0
                DCD     TWI1_IRQHandler           ; 35: Two-wire Interface 1
                DCD     SPI_IRQHandler            ; 36: Synchronous Peripheral Interface
                DCD     SSC_IRQHandler            ; 37: Synchronous Serial Controller
                DCD     TC0_IRQHandler            ; 38: Timer Counter 0
                DCD     TC1_IRQHandler            ; 39: Timer Counter 1
                DCD     TC2_IRQHandler            ; 40: Timer Counter 2
                DCD     PWM_IRQHandler            ; 41: Pulse Width Modulation Controller
                DCD     ADC12B_IRQHandler         ; 42: 12-bit ADC Controller
                DCD     ADC_IRQHandler            ; 43: 10-bit ADC Controller
                DCD     DMAC_IRQHandler           ; 44: DMA Controller
                DCD     UDPHS_IRQHandler          ; 45: USB Device High Speed


                AREA    |.text|, CODE, READONLY


; Reset Handler

Reset_Handler   PROC
                EXPORT  Reset_Handler             [WEAK]
                IMPORT  __main
                LDR     R0, =__main
                BX      R0
                ENDP


; Dummy Exception Handlers (infinite loops which can be modified)

NMI_Handler     PROC
                EXPORT  NMI_Handler               [WEAK]
                B       .
                ENDP
HardFault_Handler\
                PROC
                EXPORT  HardFault_Handler         [WEAK]
                B       .
                ENDP
MemManage_Handler\
                PROC
                EXPORT  MemManage_Handler         [WEAK]
                B       .
                ENDP
BusFault_Handler\
                PROC
                EXPORT  BusFault_Handler          [WEAK]
                B       .
                ENDP
UsageFault_Handler\
                PROC
                EXPORT  UsageFault_Handler        [WEAK]
                B       .
                ENDP
SVC_Handler     PROC
                EXPORT  SVC_Handler               [WEAK]
                B       .
                ENDP
DebugMon_Handler\
                PROC
                EXPORT  DebugMon_Handler          [WEAK]
                B       .
                ENDP
PendSV_Handler  PROC
                EXPORT  PendSV_Handler            [WEAK]
                B       .
                ENDP
SysTick_Handler PROC
                EXPORT  SysTick_Handler           [WEAK]
                B       .
                ENDP

Default_Handler PROC

                EXPORT  SUPC_IRQHandler           [WEAK]
                EXPORT  RSTC_IRQHandler           [WEAK]
                EXPORT  RTC_IRQHandler            [WEAK]
                EXPORT  RTT_IRQHandler            [WEAK]
                EXPORT  WDT_IRQHandler            [WEAK]
                EXPORT  PMC_IRQHandler            [WEAK]
                EXPORT  EEFC0_IRQHandler          [WEAK]
                EXPORT  EEFC1_IRQHandler          [WEAK]
                EXPORT  UART_IRQHandler           [WEAK]
                EXPORT  SMC_IRQHandler            [WEAK]
                EXPORT  PIOA_IRQHandler           [WEAK]
                EXPORT  PIOB_IRQHandler           [WEAK]
                EXPORT  PIOC_IRQHandler           [WEAK]
                EXPORT  USART0_IRQHandler         [WEAK]
                EXPORT  USART1_IRQHandler         [WEAK]
                EXPORT  USART2_IRQHandler         [WEAK]
                EXPORT  USART3_IRQHandler         [WEAK]
                EXPORT  HSMCI_IRQHandler          [WEAK]
                EXPORT  TWI0_IRQHandler           [WEAK]
                EXPORT  TWI1_IRQHandler           [WEAK]
                EXPORT  SPI_IRQHandler            [WEAK]
                EXPORT  SSC_IRQHandler            [WEAK]
                EXPORT  TC0_IRQHandler            [WEAK]
                EXPORT  TC1_IRQHandler            [WEAK]
                EXPORT  TC2_IRQHandler            [WEAK]
                EXPORT  PWM_IRQHandler            [WEAK]
                EXPORT  ADC12B_IRQHandler         [WEAK]
                EXPORT  ADC_IRQHandler            [WEAK]
                EXPORT  DMAC_IRQHandler           [WEAK]
                EXPORT  UDPHS_IRQHandler          [WEAK]

SUPC_IRQHandler          
RSTC_IRQHandler
RTC_IRQHandler            
RTT_IRQHandler
WDT_IRQHandler
PMC_IRQHandler
EEFC0_IRQHandler          
EEFC1_IRQHandler
UART_IRQHandler           
SMC_IRQHandler            
PIOA_IRQHandler           
PIOB_IRQHandler
PIOC_IRQHandler
USART0_IRQHandler         
USART1_IRQHandler
USART2_IRQHandler
USART3_IRQHandler
HSMCI_IRQHandler          
TWI0_IRQHandler           
TWI1_IRQHandler
SPI_IRQHandler            
SSC_IRQHandler
TC0_IRQHandler
TC1_IRQHandler
TC2_IRQHandler
PWM_IRQHandler
ADC12B_IRQHandler       
ADC_IRQHandler            
DMAC_IRQHandler       
UDPHS_IRQHandler        
                B       .

                ENDP


                ALIGN


; User Initial Stack & Heap

                IF      :DEF:__MICROLIB
                
                EXPORT  __initial_sp
                EXPORT  __heap_base
                EXPORT  __heap_limit
                
                ELSE
                
                IMPORT  __use_two_region_memory
                EXPORT  __user_initial_stackheap
__user_initial_stackheap

                LDR     R0, =  Heap_Mem
                LDR     R1, =(Stack_Mem + Stack_Size)
                LDR     R2, = (Heap_Mem +  Heap_Size)
                LDR     R3, = Stack_Mem
                BX      LR

                ALIGN

                ENDIF


                END
