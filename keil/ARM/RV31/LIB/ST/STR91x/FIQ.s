;/*****************************************************************************/
;/* FIQ.S: FIQ Handler                                                        */
;/*****************************************************************************/
;/* This file is part of the uVision/ARM development tools.                   */
;/* Copyright (c) 2005-2008 Keil Software. All rights reserved.               */
;/* This software may only be used under the terms of a valid, current,       */
;/* end user licence from KEIL for a compatible version of KEIL software      */
;/* development tools. Nothing else gives you the right to use this software. */
;/*****************************************************************************/


        AREA FIQ, CODE, READONLY 
        ARM

        PRESERVE8
        ALIGN
        IMPORT  FIQ_Handler
        EXPORT  FIQHandler

FIQHandler
        SUB     LR, LR, #4              ; Update Link Register
        STMFD   SP!, {R0-R7, LR}        ; Save Workspace & LR to Stack
        BL      FIQ_Handler             ; Branch to FIQ Handler
        LDMFD   SP!, {R0-R7, PC}^       ; Return to program after
                                        ; Data Abort Instruction
 
        END
