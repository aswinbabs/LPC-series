;/*****************************************************************************/
;/* SWI.S: SWI Handler                                                        */
;/*****************************************************************************/
;/* This file is part of the uVision/ARM development tools.                   */
;/* Copyright (c) 2005-2006 Keil Software. All rights reserved.               */
;/* This software may only be used under the terms of a valid, current,       */
;/* end user licence from KEIL for a compatible version of KEIL software      */
;/* development tools. Nothing else gives you the right to use this software. */
;/*****************************************************************************/

T_Bit           EQU     0x20

                PRESERVE8                      ; 8-Byte aligned Stack
                AREA    SWI_Area, CODE, READONLY
                ARM

                EXPORT  SWI_Handler
SWI_Handler   

                STMFD   SP!, {R12, LR}         ; Store R12, LR
                MRS     R12, SPSR              ; Get SPSR
                STMFD   SP!, {R8, R12}         ; Store R8, SPSR
                TST     R12, #T_Bit            ; Check Thumb Bit
                LDRNEH  R12, [LR,#-2]          ; Thumb: Load Halfword
                BICNE   R12, R12, #0xFF00      ;        Extract SWI Number
                LDREQ   R12, [LR,#-4]          ; ARM:   Load Word
                BICEQ   R12, R12, #0xFF000000  ;        Extract SWI Number

                LDR     R8, SWI_Count
                CMP     R12, R8
                BHS     SWI_Dead               ; Overflow
                ADR     R8, SWI_Table
                LDR     R12, [R8,R12,LSL #2]   ; Load SWI Function Address
                MOV     LR, PC                 ; Return Address
                BX      R12                    ; Call SWI Function 

                LDMFD   SP!, {R8, R12}         ; Load R8, SPSR
                MSR     SPSR_cxsf, R12         ; Set SPSR
                LDMFD   SP!, {R12, PC}^        ; Restore R12 and Return

SWI_Dead        B       SWI_Dead               ; None Existing SWI

SWI_Cnt         EQU    (SWI_End-SWI_Table)/4
SWI_Count       DCD     SWI_Cnt

                IMPORT  __SWI_8
                IMPORT  __SWI_9
;               IMPORT  __SWI_10
;               IMPORT  __SWI_11
SWI_Table
                DCD     0                      ; Unused SWI Function Entry (Reserved for RTX)
                DCD     0                      ; Unused SWI Function Entry (Reserved for RTX)
                DCD     0                      ; Unused SWI Function Entry (Reserved for RTX)
                DCD     0                      ; Unused SWI Function Entry (Reserved for RTX)
                DCD     0                      ; Unused SWI Function Entry (Reserved for RTX)
                DCD     0                      ; Unused SWI Function Entry (Reserved for RTX)
                DCD     0                      ; Unused SWI Function Entry (Reserved for RTX)
                DCD     0                      ; Unused SWI Function Entry (Reserved for RTX)
                DCD     __SWI_8                ; SWI  8 Function Entry
                DCD     __SWI_9                ; SWI  9 Function Entry
;               DCD     __SWI_10               ; SWI 10 Function Entry
;               DCD     __SWI_11               ; SWI 11 Function Entry
;               ...
SWI_End


                END
