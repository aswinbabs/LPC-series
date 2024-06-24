;/*****************************************************************************/
;/* STARTUP.S: Startup file for Cortex-M3                                     */
;/*****************************************************************************/
;/* <<< Use Configuration Wizard in Context Menu >>>                          */
;/*****************************************************************************/
;/* This file is part of the uVision/ARM development tools.                   */
;/* Copyright (c) 2005-2008 Keil Software. All rights reserved.               */
;/* This software may only be used under the terms of a valid, current,       */
;/* end user licence from KEIL for a compatible version of KEIL software      */
;/* development tools. Nothing else gives you the right to use this software. */
;/*****************************************************************************/


;// <h> Stack Configuration
;//   <o> Stack Size (in Bytes) <0x0-0xFFFFFFFF:8>
;// </h>

Stack_Size      EQU     0x00000080

                AREA    STACK, NOINIT, READWRITE, ALIGN=3
Stack_Mem       SPACE   Stack_Size
__initial_sp

                EXPORT  Stack_Top
Stack_Top       EQU     Stack_Mem + Stack_Size


;// <h> Heap Configuration
;//   <o>  Heap Size (in Bytes) <0x0-0xFFFFFFFF:8>
;// </h>

Heap_Size       EQU     0x00000000

                AREA    HEAP, NOINIT, READWRITE, ALIGN=3
__heap_base
Heap_Mem        SPACE   Heap_Size
__heap_limit


                PRESERVE8
                

; Area Definition and Entry Point
;  Startup Code must be linked first at Address at which it expects to run.

                AREA    RESET, CODE, READONLY
                THUMB


; Exception Vectors
;  Mapped to Address 0.
;  Dummy Handlers are implemented as infinite loops which can be modified.
                IMPORT  SVC_Handler
                IMPORT  PendSV_Handler
                IMPORT  SysTick_Handler

Vectors         DCD     Stack_Top               ; Top of Stack
                DCD     Reset_Handler           ; Reset Handler
                DCD     Nmi_Handler             ; NMI Handler
                DCD     Fault_Handler           ; Hard Fault Handler
                DCD     Default_Handler         ; MPU Fault Handler
                DCD     Default_Handler         ; Bus Fault Handler
                DCD     Default_Handler         ; Usage Fault Handler
                DCD     0                       ; Reserved
                DCD     0                       ; Reserved
                DCD     0                       ; Reserved
                DCD     0                       ; Reserved
                DCD     SVC_Handler             ; SVCall Handler
                DCD     Default_Handler         ; Debug Monitor Handler
                DCD     0                       ; Reserved
                DCD     PendSV_Handler          ; PendSV Handler
                DCD     SysTick_Handler         ; SysTick Handler

Nmi_Handler     B       Nmi_Handler
Fault_Handler   B       Fault_Handler
Default_Handler B       Default_Handler


; Reset Handler

                EXPORT  Reset_Handler
Reset_Handler   

                IMPORT  __main
                LDR     R0, =__main
                BX      R0


                ALIGN

; User Initial Stack & Heap
                AREA    |.text|, CODE, READONLY

                IF :DEF: __MICROLIB

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
                ENDIF

                ALIGN


                END
