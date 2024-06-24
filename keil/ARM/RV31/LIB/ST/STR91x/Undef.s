;/*****************************************************************************/
;/* UNDEF.S: Undefined Handler                                                */
;/*****************************************************************************/
;/* This file is part of the uVision/ARM development tools.                   */
;/* Copyright (c) 2005-2008 Keil Software. All rights reserved.               */
;/* This software may only be used under the terms of a valid, current,       */
;/* end user licence from KEIL for a compatible version of KEIL software      */
;/* development tools. Nothing else gives you the right to use this software. */
;/*****************************************************************************/


        AREA Undef, CODE, READONLY 
        ARM

        PRESERVE8
        ALIGN
        IMPORT  Undefined_Handler
        EXPORT  UndefHandler

UndefHandler
        STMFD   SP!, {R0-R12, LR}       ; Save Workspace & LR to Stack
        BL      Undefined_Handler       ; Branch to Undefined Handler
        LDMFD   SP!, {R0-R12, PC}^      ; Return to program after
                                        ; Undefined Instruction         

        END
