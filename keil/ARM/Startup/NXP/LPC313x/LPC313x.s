;/*****************************************************************************/
;/* LPC313x.S: Startup file for NXP LPC313x device series                     */
;/*****************************************************************************/
;/* <<< Use Configuration Wizard in Context Menu >>>                          */
;/*****************************************************************************/
;/* This file is part of the uVision/ARM development tools.                   */
;/* Copyright (c) 2007-2009 Keil - An ARM Company. All rights reserved.       */
;/* This software may only be used under the terms of a valid, current,       */
;/* end user licence from KEIL for a compatible version of KEIL software      */
;/* development tools. Nothing else gives you the right to use this software. */
;/*****************************************************************************/

;/*
; *  The Startup code is executed after CPU Reset. This file may be 
; *  translated with the following SET symbols. In uVision these SET 
; *  symbols are entered under Options - ASM - Define.
; *
; *  SIZE_INT_INFO:        size of program image is coded instead of Reserved 
; *                        vector at address 0x14, if code is linked for 
; *                        Internal RAM.
; *
; *  SIZE_EXT_INFO:        size of program image is coded instead of Reserved 
; *                        vector at address 0x14, if code is linked for 
; *                        External SDRAM.
; *
; *  NO_CLOCK_INIT:        when set the startup code will not initialize Clock 
; *                       (used mostly when clock is already initialized from 
; *                        script .ini file).
; *
; *  NO_MPMC_INIT:         when set the startup code will not initialize 
; *                        Multi-Port Memory Controller.
; *                       (used mostly when MPMC is already initialized from 
; *                        script .ini file).
; *
; *  NO_MPMC_DYNAMIC_INIT: when set the startup code will not initialize 
; *                        Dynamic Memory Control part of MPMC.
; *                       (used mostly when MPMC is already initialized from 
; *                        script .ini file).
; *
; *  NO_MPMC_STATIC_INIT:  when set the startup code will not initialize 
; *                        Static Memory Control part of MPMC.
; *                       (used mostly when MPMC is already initialized from 
; *                        script .ini file).
; *
; *  NO_SHADOW_INIT:       when set the startup code will not setup shadowing 
; *                        of any address to address 0.
; */


; Standard definitions of Mode bits and Interrupt (I & F) flags in PSRs

Mode_USR        EQU     0x10
Mode_FIQ        EQU     0x11
Mode_IRQ        EQU     0x12
Mode_SVC        EQU     0x13
Mode_ABT        EQU     0x17
Mode_UND        EQU     0x1B
Mode_SYS        EQU     0x1F

I_Bit           EQU     0x80            ; when I bit is set, IRQ is disabled
F_Bit           EQU     0x40            ; when F bit is set, FIQ is disabled


;----------------------- Memory Definitions ------------------------------------

; Internal Memory Base Addresses
IRAM_BASE       EQU     0x11028000
IROM_BASE       EQU     0x12000000

; External Memory Base Addresses
ESRAM0_BASE     EQU     0x20000000
ESRAM1_BASE     EQU     0x20020000
ESDRAM0_BASE    EQU     0x30000000


;----------------------- Stack and Heap Definitions ----------------------------

; <h> Stack Configuration (Stack Sizes in Bytes)
;   <o0> Undefined Mode      <0x0-0xFFFFFFFF:8>
;   <o1> Supervisor Mode     <0x0-0xFFFFFFFF:8>
;   <o2> Abort Mode          <0x0-0xFFFFFFFF:8>
;   <o3> Fast Interrupt Mode <0x0-0xFFFFFFFF:8>
;   <o4> Interrupt Mode      <0x0-0xFFFFFFFF:8>
;   <o5> User/System Mode    <0x0-0xFFFFFFFF:8>
; </h>

UND_Stack_Size  EQU     0x00000000
SVC_Stack_Size  EQU     0x00000008
ABT_Stack_Size  EQU     0x00000000
FIQ_Stack_Size  EQU     0x00000000
IRQ_Stack_Size  EQU     0x00000080
USR_Stack_Size  EQU     0x00000400

ISR_Stack_Size  EQU     (UND_Stack_Size + SVC_Stack_Size + ABT_Stack_Size + \
                         FIQ_Stack_Size + IRQ_Stack_Size)

                AREA    STACK, NOINIT, READWRITE, ALIGN=3

Stack_Mem       SPACE   USR_Stack_Size
__initial_sp    SPACE   ISR_Stack_Size
Stack_Top


; <h> Heap Configuration
;   <o>  Heap Size (in Bytes) <0x0-0xFFFFFFFF>
; </h>

Heap_Size       EQU     0x00000000

                AREA    HEAP, NOINIT, READWRITE, ALIGN=3
__heap_base
Heap_Mem        SPACE   Heap_Size
__heap_limit


;----------------------- Clock Definitions -------------------------------------

; Clock Generation Unit (CGU) Definitions
CGU_BASE        EQU     0x13004000      ; CGU Base Address
                ^       0x000           ; Switch Configuration Register Offsets
SCR0_OFS        #       0x04            ; for SYS        Base
SCR1_OFS        #       0x04            ; for AHB0_APB0  Base
SCR2_OFS        #       0x04            ; for AHB0_APB1  Base
SCR3_OFS        #       0x04            ; for AHB0_APB2  Base
SCR4_OFS        #       0x04            ; for AHB0_APB3  Base
SCR5_OFS        #       0x04            ; for PCM        Base
SCR6_OFS        #       0x04            ; for UART       Base
SCR7_OFS        #       0x04            ; for CLK1024FS  Base
SCR8_OFS        #       0x04            ; for I2SRX_BCK0 Base
SCR9_OFS        #       0x04            ; for I2SRX_BCK1 Base
SCR10_OFS       #       0x04            ; for SPI_CLK    Base
SCR11_OFS       #       0x04            ; for SYSCLK_O   Base
                ^       0x030           ; Frequency Select Register 1 Offsets
FS1_0_OFS       #       0x04            ; for SYS        Base
FS1_1_OFS       #       0x04            ; for AHB0_APB0  Base
FS1_2_OFS       #       0x04            ; for AHB0_APB1  Base
FS1_3_OFS       #       0x04            ; for AHB0_APB2  Base
FS1_4_OFS       #       0x04            ; for AHB0_APB3  Base
FS1_5_OFS       #       0x04            ; for PCM        Base
FS1_6_OFS       #       0x04            ; for UART       Base
FS1_7_OFS       #       0x04            ; for CLK1024FS  Base
FS1_8_OFS       #       0x04            ; for I2SRX_BCK0 Base
FS1_9_OFS       #       0x04            ; for I2SRX_BCK1 Base
FS1_10_OFS      #       0x04            ; for SPI_CLK    Base
FS1_11_OFS      #       0x04            ; for SYSCLK_O   Base
                ^       0x060           ; Frequency Select Register 2 Offsets
FS2_0_OFS       #       0x04            ; for SYS        Base
FS2_1_OFS       #       0x04            ; for AHB0_APB0  Base
FS2_2_OFS       #       0x04            ; for AHB0_APB1  Base
FS2_3_OFS       #       0x04            ; for AHB0_APB2  Base
FS2_4_OFS       #       0x04            ; for AHB0_APB3  Base
FS2_5_OFS       #       0x04            ; for PCM        Base
FS2_6_OFS       #       0x04            ; for UART       Base
FS2_7_OFS       #       0x04            ; for CLK1024FS  Base
FS2_8_OFS       #       0x04            ; for I2SRX_BCK0 Base
FS2_9_OFS       #       0x04            ; for I2SRX_BCK1 Base
FS2_10_OFS      #       0x04            ; for SPI_CLK    Base
FS2_11_OFS      #       0x04            ; for SYSCLK_O   Base
                ^       0x090           ; Switch Status Register Offsets
SSR0_OFS        #       0x04            ; for SYS        Base
SSR1_OFS        #       0x04            ; for AHB0_APB0  Base
SSR2_OFS        #       0x04            ; for AHB0_APB1  Base
SSR3_OFS        #       0x04            ; for AHB0_APB2  Base
SSR4_OFS        #       0x04            ; for AHB0_APB3  Base
SSR5_OFS        #       0x04            ; for PCM        Base
SSR6_OFS        #       0x04            ; for UART       Base
SSR7_OFS        #       0x04            ; for CLK1024FS  Base
SSR8_OFS        #       0x04            ; for I2SRX_BCK0 Base
SSR9_OFS        #       0x04            ; for I2SRX_BCK1 Base
SSR10_OFS       #       0x04            ; for SPI_CLK    Base
SSR11_OFS       #       0x04            ; for SYSCLK_O   Base
                ^       0x0C0           ; Power Control Register Offsets
PCR0_OFS        #       0x04            ; for APB0_CLK
PCR1_OFS        #       0x04            ; for APB1_CLK
PCR2_OFS        #       0x04            ; for APB2_CLK
PCR3_OFS        #       0x04            ; for APB3_CLK
PCR4_OFS        #       0x04            ; for APB4_CLK
PCR5_OFS        #       0x04            ; for AHB_TO_INTC_CLK
PCR6_OFS        #       0x04            ; for AHB0_CLK
PCR7_OFS        #       0x04            ; for EBI_CLK
PCR8_OFS        #       0x04            ; for DMA_PCLK
PCR9_OFS        #       0x04            ; for DMA_CLK_GATED
PCR10_OFS       #       0x04            ; for NANDFLASH_S0_CLK
PCR11_OFS       #       0x04            ; for NANDFLASH_ECC_CLK
PCR12_OFS       #       0x04            ;     Reserved (write 0)
PCR13_OFS       #       0x04            ; for NANDFLASH_NAND_CLK
PCR14_OFS       #       0x04            ; for NANDFLASH_PCLK
PCR15_OFS       #       0x04            ; for CLOCK_OUT
PCR16_OFS       #       0x04            ; for ARM926_CORE_CLK
PCR17_OFS       #       0x04            ; for ARM926_BUSIF_CLK
PCR18_OFS       #       0x04            ; for ARM926_RETIME_CLK
PCR19_OFS       #       0x04            ; for SD_MMC_HCLK
PCR20_OFS       #       0x04            ; for SD_MMC_CCLK_IN
PCR21_OFS       #       0x04            ; for USB_OTG_AHB_CLK
PCR22_OFS       #       0x04            ; for ISRAM0_CLK
PCR23_OFS       #       0x04            ; for RED_CTL_RSCLK
PCR24_OFS       #       0x04            ; for ISRAM1_CLK
PCR25_OFS       #       0x04            ; for ISROM_CLK
PCR26_OFS       #       0x04            ; for MPMC_CFG_CLK
PCR27_OFS       #       0x04            ; for MPMC_CFG_CLK2
PCR28_OFS       #       0x04            ; for MPMC_CFG_CLK3
PCR29_OFS       #       0x04            ; for INTC_CLK
PCR30_OFS       #       0x04            ; for AHB_TO_APB0_PCLK
PCR31_OFS       #       0x04            ; for EVENT_ROUTER_PCLK
PCR32_OFS       #       0x04            ; for ADC_PCLK
PCR33_OFS       #       0x04            ; for ADC_CLK
PCR34_OFS       #       0x04            ; for WDOG_PCLK
PCR35_OFS       #       0x04            ; for IOCONF_PCLK
PCR36_OFS       #       0x04            ; for CGU_PCLK
PCR37_OFS       #       0x04            ; for SYSCREG_PCLK
PCR38_OFS       #       0x04            ;     Reserved (write 0)
PCR39_OFS       #       0x04            ; for RNG_PCLK
PCR40_OFS       #       0x04            ; for AHB_TO_APB1_PCLK
PCR41_OFS       #       0x04            ; for TIMER0_PCLK
PCR42_OFS       #       0x04            ; for TIMER1_PCLK
PCR43_OFS       #       0x04            ; for TIMER2_PCLK
PCR44_OFS       #       0x04            ; for TIMER3_PCLK
PCR45_OFS       #       0x04            ; for PWM_PCLK
PCR46_OFS       #       0x04            ; for PWM_PCLK_REGS
PCR47_OFS       #       0x04            ; for PWM_CLK
PCR48_OFS       #       0x04            ; for I2C0_PCLK
PCR49_OFS       #       0x04            ; for I2C1_PCLK
PCR50_OFS       #       0x04            ; for AHB_TO_APB2_PCLK
PCR51_OFS       #       0x04            ; for PCM_PCLK
PCR52_OFS       #       0x04            ; for PCM_APB_PCLK
PCR53_OFS       #       0x04            ; for UART_APB_CLK
PCR54_OFS       #       0x04            ; for LCD_PCLK
PCR55_OFS       #       0x04            ; for LCD_CLK
PCR56_OFS       #       0x04            ; for SPI_PCLK
PCR57_OFS       #       0x04            ; for SPI_PCLK_GATED
PCR58_OFS       #       0x04            ; for AHB_TO_APB3_PCLK
PCR59_OFS       #       0x04            ; for I2S_CFG_PCLK
PCR60_OFS       #       0x04            ; for EDGE_DET_PCLK
PCR61_OFS       #       0x04            ; for I2STX_FIFO_0_PCLK
PCR62_OFS       #       0x04            ; for I2STX_IF_0_PCLK
PCR63_OFS       #       0x04            ; for I2STX_FIFO_1_PCLK
PCR64_OFS       #       0x04            ; for I2STX_IF_1_PCLK
PCR65_OFS       #       0x04            ; for I2SRX_FIFO_0_PCLK
PCR66_OFS       #       0x04            ; for I2SRX_IF_0_PCLK  
PCR67_OFS       #       0x04            ; for I2SRX_FIFO_1_PCLK
PCR68_OFS       #       0x04            ; for I2SRX_IF_1_PCLK  
PCR69_OFS       #       0x04            ;     Reserved (write 0)
PCR70_OFS       #       0x04            ;     Reserved (write 0)
PCR71_OFS       #       0x04            ; for PCM_CLK_IP
PCR72_OFS       #       0x04            ; for UART_U_CLK
PCR73_OFS       #       0x04            ; for I2S_EDGE_DETECT_CLK
PCR74_OFS       #       0x04            ; for I2STX_BCK0_N
PCR75_OFS       #       0x04            ; for I2STX_WS0
PCR76_OFS       #       0x04            ; for I2STX_CLK0
PCR77_OFS       #       0x04            ; for I2STX_BCK1_N
PCR78_OFS       #       0x04            ; for I2STX_WS1
PCR79_OFS       #       0x04            ; for CLK_256FS
PCR80_OFS       #       0x04            ; for I2SRX_BCK0_N
PCR81_OFS       #       0x04            ; for I2SRX_WS0
PCR82_OFS       #       0x04            ; for I2SRX_BCK1_N
PCR83_OFS       #       0x04            ; for I2SRX_WS1
PCR84_OFS       #       0x04            ;     Reserved (write 0)
PCR85_OFS       #       0x04            ;     Reserved (write 0)
PCR86_OFS       #       0x04            ;     Reserved (write 0)
PCR87_OFS       #       0x04            ; for I2SRX_BCK0
PCR88_OFS       #       0x04            ; for I2SRX_BCK1
PCR89_OFS       #       0x04            ; for SPI_CLK
PCR90_OFS       #       0x04            ; for SPI_CLK_GATED
PCR91_OFS       #       0x04            ; for SYSCLK_O
                ^       0x230           ; Power Status Register Offsets
PSR0_OFS        #       0x04            ; for APB0_CLK
PSR1_OFS        #       0x04            ; for APB1_CLK
PSR2_OFS        #       0x04            ; for APB2_CLK
PSR3_OFS        #       0x04            ; for APB3_CLK
PSR4_OFS        #       0x04            ; for APB4_CLK
PSR5_OFS        #       0x04            ; for AHB_TO_INTC_CLK
PSR6_OFS        #       0x04            ; for AHB0_CLK
PSR7_OFS        #       0x04            ; for EBI_CLK
PSR8_OFS        #       0x04            ; for DMA_PCLK
PSR9_OFS        #       0x04            ; for DMA_CLK_GATED
PSR10_OFS       #       0x04            ; for NANDFLASH_S0_CLK
PSR11_OFS       #       0x04            ; for NANDFLASH_ECC_CLK
PSR12_OFS       #       0x04            ;     Reserved
PSR13_OFS       #       0x04            ; for NANDFLASH_NAND_CLK
PSR14_OFS       #       0x04            ; for NANDFLASH_PCLK
PSR15_OFS       #       0x04            ; for CLOCK_OUT
PSR16_OFS       #       0x04            ; for ARM926_CORE_CLK
PSR17_OFS       #       0x04            ; for ARM926_BUSIF_CLK
PSR18_OFS       #       0x04            ; for ARM926_RETIME_CLK
PSR19_OFS       #       0x04            ; for SD_MMC_HCLK
PSR20_OFS       #       0x04            ; for SD_MMC_CCLK_IN
PSR21_OFS       #       0x04            ; for USB_OTG_AHB_CLK
PSR22_OFS       #       0x04            ; for ISRAM0_CLK
PSR23_OFS       #       0x04            ; for RED_CTL_RSCLK
PSR24_OFS       #       0x04            ; for ISRAM1_CLK
PSR25_OFS       #       0x04            ; for ISROM_CLK
PSR26_OFS       #       0x04            ; for MPMC_CFG_CLK
PSR27_OFS       #       0x04            ; for MPMC_CFG_CLK2
PSR28_OFS       #       0x04            ; for MPMC_CFG_CLK3
PSR29_OFS       #       0x04            ; for INTC_CLK
PSR30_OFS       #       0x04            ; for AHB_TO_APB0_PCLK
PSR31_OFS       #       0x04            ; for EVENT_ROUTER_PCLK
PSR32_OFS       #       0x04            ; for ADC_PCLK
PSR33_OFS       #       0x04            ; for ADC_CLK
PSR34_OFS       #       0x04            ; for WDOG_PCLK
PSR35_OFS       #       0x04            ; for IOCONF_PCLK
PSR36_OFS       #       0x04            ; for CGU_PCLK
PSR37_OFS       #       0x04            ; for SYSCREG_PCLK
PSR38_OFS       #       0x04            ;     Reserved
PSR39_OFS       #       0x04            ; for RNG_PCLK
PSR40_OFS       #       0x04            ; for AHB_TO_APB1_PCLK
PSR41_OFS       #       0x04            ; for TIMER0_PCLK
PSR42_OFS       #       0x04            ; for TIMER1_PCLK
PSR43_OFS       #       0x04            ; for TIMER2_PCLK
PSR44_OFS       #       0x04            ; for TIMER3_PCLK
PSR45_OFS       #       0x04            ; for PWM_PCLK
PSR46_OFS       #       0x04            ; for PWM_PCLK_REGS
PSR47_OFS       #       0x04            ; for PWM_CLK
PSR48_OFS       #       0x04            ; for I2C0_PCLK
PSR49_OFS       #       0x04            ; for I2C1_PCLK
PSR50_OFS       #       0x04            ; for AHB_TO_APB2_PCLK
PSR51_OFS       #       0x04            ; for PCM_PCLK
PSR52_OFS       #       0x04            ; for PCM_APB_PCLK
PSR53_OFS       #       0x04            ; for UART_APB_CLK
PSR54_OFS       #       0x04            ; for LCD_PCLK
PSR55_OFS       #       0x04            ; for LCD_CLK
PSR56_OFS       #       0x04            ; for SPI_PCLK
PSR57_OFS       #       0x04            ; for SPI_PCLK_GATED
PSR58_OFS       #       0x04            ; for AHB_TO_APB3_PCLK
PSR59_OFS       #       0x04            ; for I2S_CFG_PCLK
PSR60_OFS       #       0x04            ; for EDGE_DET_PCLK
PSR61_OFS       #       0x04            ; for I2STX_FIFO_0_PCLK
PSR62_OFS       #       0x04            ; for I2STX_IF_0_PCLK
PSR63_OFS       #       0x04            ; for I2STX_FIFO_1_PCLK
PSR64_OFS       #       0x04            ; for I2STX_IF_1_PCLK
PSR65_OFS       #       0x04            ; for I2SRX_FIFO_0_PCLK
PSR66_OFS       #       0x04            ; for I2SRX_IF_0_PCLK  
PSR67_OFS       #       0x04            ; for I2SRX_FIFO_1_PCLK
PSR68_OFS       #       0x04            ; for I2SRX_IF_1_PCLK  
PSR69_OFS       #       0x04            ;     Reserved
PSR70_OFS       #       0x04            ;     Reserved
PSR71_OFS       #       0x04            ; for PCM_CLK_IP
PSR72_OFS       #       0x04            ; for UART_U_CLK
PSR73_OFS       #       0x04            ; for I2S_EDGE_DETECT_CLK
PSR74_OFS       #       0x04            ; for I2STX_BCK0_N
PSR75_OFS       #       0x04            ; for I2STX_WS0
PSR76_OFS       #       0x04            ; for I2STX_CLK0
PSR77_OFS       #       0x04            ; for I2STX_BCK1_N
PSR78_OFS       #       0x04            ; for I2STX_WS1
PSR79_OFS       #       0x04            ; for CLK_256FS
PSR80_OFS       #       0x04            ; for I2SRX_BCK0_N
PSR81_OFS       #       0x04            ; for I2SRX_WS0
PSR82_OFS       #       0x04            ; for I2SRX_BCK1_N
PSR83_OFS       #       0x04            ; for I2SRX_WS1
PSR84_OFS       #       0x04            ;     Reserved
PSR85_OFS       #       0x04            ;     Reserved
PSR86_OFS       #       0x04            ;     Reserved
PSR87_OFS       #       0x04            ; for I2SRX_BCK0
PSR88_OFS       #       0x04            ; for I2SRX_BCK1
PSR89_OFS       #       0x04            ; for SPI_CLK
PSR90_OFS       #       0x04            ; for SPI_CLK_GATED
PSR91_OFS       #       0x04            ; for SYSCLK_O
                ^       0x3A0           ; Enable Select Register Offsets
ESR0_OFS        #       0x04            ; for APB0_CLK
ESR1_OFS        #       0x04            ; for APB1_CLK
ESR2_OFS        #       0x04            ; for APB2_CLK
ESR3_OFS        #       0x04            ; for APB3_CLK
ESR4_OFS        #       0x04            ; for APB4_CLK
ESR5_OFS        #       0x04            ; for AHB_TO_INTC_CLK
ESR6_OFS        #       0x04            ; for AHB0_CLK
ESR7_OFS        #       0x04            ; for EBI_CLK
ESR8_OFS        #       0x04            ; for DMA_PCLK
ESR9_OFS        #       0x04            ; for DMA_CLK_GATED
ESR10_OFS       #       0x04            ; for NANDFLASH_S0_CLK
ESR11_OFS       #       0x04            ; for NANDFLASH_ECC_CLK
ESR12_OFS       #       0x04            ;     Reserved
ESR13_OFS       #       0x04            ; for NANDFLASH_NAND_CLK
ESR14_OFS       #       0x04            ; for NANDFLASH_PCLK
ESR15_OFS       #       0x04            ; for NANDFLASH_CLOCK_OUT
ESR16_OFS       #       0x04            ; for ARM926_CORE_CLK
ESR17_OFS       #       0x04            ; for ARM926_BUSIF_CLK
ESR18_OFS       #       0x04            ; for ARM926_RETIME_CLK
ESR19_OFS       #       0x04            ; for SD_MMC_HCLK
ESR20_OFS       #       0x04            ; for SD_MMC_CCLK_IN
ESR21_OFS       #       0x04            ; for USB_OTG_AHB_CLK
ESR22_OFS       #       0x04            ; for ISRAM0_CLK
ESR23_OFS       #       0x04            ; for RED_CTL_RSCLK
ESR24_OFS       #       0x04            ; for ISRAM1_CLK
ESR25_OFS       #       0x04            ; for ISROM_CLK
ESR26_OFS       #       0x04            ; for MPMC_CFG_CLK
ESR27_OFS       #       0x04            ; for MPMC_CFG_CLK2
ESR28_OFS       #       0x04            ; for MPMC_CFG_CLK3
ESR29_OFS       #       0x04            ; for INTC_CLK
ESR30_OFS       #       0x04            ; for AHB_TO_APB0_PCLK
ESR31_OFS       #       0x04            ; for EVENT_ROUTER_PCLK
ESR32_OFS       #       0x04            ; for ADC_PCLK
ESR33_OFS       #       0x04            ; for ADC_CLK
ESR34_OFS       #       0x04            ; for WDOG_PCLK
ESR35_OFS       #       0x04            ; for IOCONF_PCLK
ESR36_OFS       #       0x04            ; for CGU_PCLK
ESR37_OFS       #       0x04            ; for SYSCREG_PCLK
ESR38_OFS       #       0x04            ;     Reserved
ESR39_OFS       #       0x04            ; for RNG_PCLK
ESR40_OFS       #       0x04            ; for AHB_TO_APB1_PCLK
ESR41_OFS       #       0x04            ; for TIMER0_PCLK
ESR42_OFS       #       0x04            ; for TIMER1_PCLK
ESR43_OFS       #       0x04            ; for TIMER2_PCLK
ESR44_OFS       #       0x04            ; for TIMER3_PCLK
ESR45_OFS       #       0x04            ; for PWM_PCLK
ESR46_OFS       #       0x04            ; for PWM_PCLK_REGS
ESR47_OFS       #       0x04            ; for PWM_CLK
ESR48_OFS       #       0x04            ; for I2C0_PCLK
ESR49_OFS       #       0x04            ; for I2C1_PCLK
ESR50_OFS       #       0x04            ; for AHB_TO_APB2_PCLK
ESR51_OFS       #       0x04            ; for PCM_PCLK
ESR52_OFS       #       0x04            ; for PCM_APB_PCLK
ESR53_OFS       #       0x04            ; for UART_APB_CLK
ESR54_OFS       #       0x04            ; for LCD_PCLK
ESR55_OFS       #       0x04            ; for LCD_CLK
ESR56_OFS       #       0x04            ; for SPI_PCLK
ESR57_OFS       #       0x04            ; for SPI_PCLK_GATED
ESR58_OFS       #       0x04            ; for AHB_TO_APB3_PCLK
ESR59_OFS       #       0x04            ; for I2S_CFG_PCLK
ESR60_OFS       #       0x04            ; for EDGE_DET_PCLK
ESR61_OFS       #       0x04            ; for I2STX_FIFO_0_PCLK
ESR62_OFS       #       0x04            ; for I2STX_IF_0_PCLK
ESR63_OFS       #       0x04            ; for I2STX_FIFO_1_PCLK
ESR64_OFS       #       0x04            ; for I2STX_IF_1_PCLK
ESR65_OFS       #       0x04            ; for I2SRX_FIFO_0_PCLK
ESR66_OFS       #       0x04            ; for I2SRX_IF_0_PCLK  
ESR67_OFS       #       0x04            ; for I2SRX_FIFO_1_PCLK
ESR68_OFS       #       0x04            ; for I2SRX_IF_1_PCLK  
ESR69_OFS       #       0x04            ;     Reserved
ESR70_OFS       #       0x04            ;     Reserved
ESR71_OFS       #       0x04            ; for PCM_CLK_IP
ESR72_OFS       #       0x04            ; for UART_U_CLK
ESR73_OFS       #       0x04            ; for I2S_EDGE_DETECT_CLK
ESR74_OFS       #       0x04            ; for I2STX_BCK0_N
ESR75_OFS       #       0x04            ; for I2STX_WS0
ESR76_OFS       #       0x04            ; for I2STX_CLK0
ESR77_OFS       #       0x04            ; for I2STX_BCK1_N
ESR78_OFS       #       0x04            ; for I2STX_WS1
ESR79_OFS       #       0x04            ; for CLK_256FS
ESR80_OFS       #       0x04            ; for I2SRX_BCK0_N
ESR81_OFS       #       0x04            ; for I2SRX_WS0
ESR82_OFS       #       0x04            ; for I2SRX_BCK1_N
ESR83_OFS       #       0x04            ; for I2SRX_WS1
ESR84_OFS       #       0x04            ;     Reserved
ESR85_OFS       #       0x04            ;     Reserved
ESR86_OFS       #       0x04            ;     Reserved
ESR87_OFS       #       0x04            ; for SPI_CLK
ESR88_OFS       #       0x04            ; for SPI_CLK_GATED
                ^       0x504           ; Base Control Register Offsets
BCR0_OFS        #       0x04            ; for SYS Base
BCR1_OFS        #       0x04            ; for AHB0_APB0 Base
BCR2_OFS        #       0x04            ; for AHB0_APB1 Base
BCR3_OFS        #       0x04            ; for AHB0_APB2 Base
BCR7_OFS        #       0x04            ; for CLK1024FS Base
                ^       0x518           ; Fraction Div Config Register Offsets
FDC0_OFS        #       0x04            ; for SYS Base
FDC1_OFS        #       0x04            ; for SYS Base
FDC2_OFS        #       0x04            ; for SYS Base
FDC3_OFS        #       0x04            ; for SYS Base
FDC4_OFS        #       0x04            ; for SYS Base
FDC5_OFS        #       0x04            ; for SYS Base
FDC6_OFS        #       0x04            ; for SYS Base
FDC7_OFS        #       0x04            ; for AHB0_APB0 Base
FDC8_OFS        #       0x04            ; for AHB0_APB0 Base
FDC9_OFS        #       0x04            ; for AHB0_APB1 Base
FDC10_OFS       #       0x04            ; for AHB0_APB1 Base
FDC11_OFS       #       0x04            ; for AHB0_APB2 Base
FDC12_OFS       #       0x04            ; for AHB0_APB2 Base
FDC13_OFS       #       0x04            ; for AHB0_APB2 Base
FDC14_OFS       #       0x04            ; for AHB0_APB3 Base
FDC15_OFS       #       0x04            ; for PCM Base
FDC16_OFS       #       0x04            ; for UART Base
FDC17_OFS       #       0x04            ; for CLK1024FS Base
FDC18_OFS       #       0x04            ; for CLK1024FS Base
FDC19_OFS       #       0x04            ; for CLK1024FS Base
FDC20_OFS       #       0x04            ; for CLK1024FS Base
FDC21_OFS       #       0x04            ; for CLK1024FS Base
FDC22_OFS       #       0x04            ; for CLK1024FS Base
FDC23_OFS       #       0x04            ; for SPI_CLK Base
                ^       0x578           ; Dyn Frac Div Config Register Offsets
DYN_FDC0_OFS    #       0x04            ; for SYS Base
DYN_FDC1_OFS    #       0x04            ; for SYS Base
DYN_FDC2_OFS    #       0x04            ; for SYS Base
DYN_FDC3_OFS    #       0x04            ; for SYS Base
DYN_FDC4_OFS    #       0x04            ; for SYS Base
DYN_FDC5_OFS    #       0x04            ; for SYS Base
DYN_FDC6_OFS    #       0x04            ; for SYS Base
                ^       0x594           ; Dyn Sel Reg for Frac Divider Offsets
DYN_SEL0_OFS    #       0x04            ; for SYS Base
DYN_SEL1_OFS    #       0x04            ; for SYS Base
DYN_SEL2_OFS    #       0x04            ; for SYS Base
DYN_SEL3_OFS    #       0x04            ; for SYS Base
DYN_SEL4_OFS    #       0x04            ; for SYS Base
DYN_SEL5_OFS    #       0x04            ; for SYS Base
DYN_SEL6_OFS    #       0x04            ; for SYS Base
                                        ; CGU Configuration Block Reg Offsets
POWERMODE_OFS   EQU     0xC00           ; Power Mode Register
FFAST_ON_OFS    EQU     0xC08           ; Activate Fast Oscillator
FFAST_BYPASS_OFS    EQU 0xC0C           ; Bypass Fast Oscillator Comparator
HP0_FIN_SELECT_OFS  EQU 0xCF0           ; HP0 PLL Input Select
HP0_MDEC_OFS    EQU     0xCF4           ; HP0 PLL M-divider
HP0_NDEC_OFS    EQU     0xCF8           ; HP0 PLL N-divider
HP0_PDEC_OFS    EQU     0xCFC           ; HP0 PLL P-divider
HP0_MODE_OFS    EQU     0xD00           ; HP0 PLL Mode
HP0_STATUS_OFS  EQU     0xD04           ; HP0 PLL Status
HP0_ACK_OFS     EQU     0xD08           ; HP0 PLL Ratio Change Acknowledge
HP0_REQ_OFS     EQU     0xD0C           ; HP0 PLL Ratio Change Request
HP0_INSELR_OFS  EQU     0xD10           ; HP0 PLL Bandwidth Selection
HP0_INSELI_OFS  EQU     0xD14           ; HP0 PLL Bandwidth Selection
HP0_INSELP_OFS  EQU     0xD18           ; HP0 PLL Bandwidth Selection
HP0_SELR_OFS    EQU     0xD1C           ; HP0 PLL Bandwidth Selection
HP0_SELI_OFS    EQU     0xD20           ; HP0 PLL Bandwidth Selection
HP0_SELP_OFS    EQU     0xD24           ; HP0 PLL Bandwidth Selection
HP1_FIN_SELECT_OFS  EQU 0xD28           ; HP1 PLL Input Select
HP1_MDEC_OFS    EQU     0xD2C           ; HP1 PLL M-divider
HP1_NDEC_OFS    EQU     0xD30           ; HP1 PLL N-divider
HP1_PDEC_OFS    EQU     0xD34           ; HP1 PLL P-divider
HP1_MODE_OFS    EQU     0xD38           ; HP1 PLL Mode
HP1_STATUS_OFS  EQU     0xD3C           ; HP1 PLL Status
HP1_ACK_OFS     EQU     0xD40           ; HP1 PLL Ratio Change Acknowledge
HP1_REQ_OFS     EQU     0xD44           ; HP1 PLL Ratio Change Request
HP1_INSELR_OFS  EQU     0xD48           ; HP1 PLL Bandwidth Selection
HP1_INSELI_OFS  EQU     0xD4C           ; HP1 PLL Bandwidth Selection
HP1_INSELP_OFS  EQU     0xD50           ; HP1 PLL Bandwidth Selection
HP1_SELR_OFS    EQU     0xD54           ; HP1 PLL Bandwidth Selection
HP1_SELI_OFS    EQU     0xD58           ; HP1 PLL Bandwidth Selection
HP1_SELP_OFS    EQU     0xD5C           ; HP1 PLL Bandwidth Selection

; Constants
PLL_LOCK        EQU     0x01            ; PLL Lock Status

; <e> Clock Setup
;   <o1.0> Enable Fast Oscillator
;   <e2>   Enable HP0 PLL
;     <o3.0..2>    hp0_fin_select: Select Input for HP0 PLL
;                     <0=> ffast (12 MHz)
;                     <1=> I2SRX_BCK0
;                     <2=> I2SRX_WS0
;                     <3=> I2SRX_BCK1
;                     <4=> I2SRX_WS1
;                     <5=> Reserved
;                     <6=> HP1_FOUT
;                     <7=> Reserved
;     <o4.0..16>   hp0_mdec: M-divider Value <0-131071>
;     <o5.0..9>    hp0_ndec: N-divider Value <0-1023>
;     <o6.0..6>    hp0_pdec: P-divider Value <0-127>
;     <o7.0..8>    hp0_mode: Select Mode
;                     <0x19=> Mode 1a: Normal operating mode without post-divider and without pre-divider
;                     <0x11=> Mode 1b: Normal operating mode with    post-divider and without pre-divider
;                     <0x09=> Mode 1c: Normal operating mode without post-divider and with    pre-divider
;                     <0x01=> Mode 1d: Normal operating mode with    post-divider and with    pre-divider
;     <o8.0..3>    hp0_selr: Bandwidth Selection for HP0 <0-15>
;     <o9.0..5>    hp0_seli: Bandwidth Selection for HP0 <0-63>
;     <o10.0..4>   hp0_selp: Bandwidth Selection for HP0 <0-31>
;   </e2>
;   <e11>  Enable HP1 PLL
;     <o12.0..2>   hp1_fin_select: Select Input for HP1 PLL
;                     <0=> ffast (12 MHz)
;                     <1=> I2SRX_BCK0
;                     <2=> I2SRX_WS0
;                     <3=> I2SRX_BCK1
;                     <4=> I2SRX_WS1
;                     <5=> HP0_FOUT
;                     <6=> Reserved
;                     <7=> Reserved
;     <o13.0..16>  hp1_mdec: M-divider Value <0-131071>
;     <o14.0..9>   hp1_ndec: N-divider Value <0-1023>
;     <o15.0..6>   hp1_pdec: P-divider Value <0-127>
;     <o16.0..8>   hp1_mode: Select Mode
;                     <0x19=> Mode 1a: Normal operating mode without post-divider and without pre-divider
;                     <0x11=> Mode 1b: Normal operating mode with    post-divider and without pre-divider
;                     <0x09=> Mode 1c: Normal operating mode without post-divider and with    pre-divider
;                     <0x01=> Mode 1d: Normal operating mode with    post-divider and with    pre-divider
;     <o17.0..3>   hp1_selr: Bandwidth Selection for HP1 <0-15>
;     <o18.0..5>   hp1_seli: Bandwidth Selection for HP1 <0-63>
;     <o19.0..4>   hp1_selp: Bandwidth Selection for HP1 <0-31>
;   </e11>
;   <e20.0>  Fractional Divider 0 Enable (FDC0)
;     <o20.11..18> MSUB: Modulo Substraction Value <0-255>
;     <o20.3..10>  MADD: Modulo Additional Value <0-255>
;     <o20.2>      FDCTRL_STRETCH: Stretching Enable
;     <o21.0>      Enable Select Register  0 uses Fractional Divider 0
;     <o21.1>      Enable Select Register  1 uses Fractional Divider 0
;     <o21.2>      Enable Select Register  2 uses Fractional Divider 0
;     <o21.3>      Enable Select Register  3 uses Fractional Divider 0
;     <o21.4>      Enable Select Register  4 uses Fractional Divider 0
;     <o21.5>      Enable Select Register  5 uses Fractional Divider 0
;     <o21.6>      Enable Select Register  6 uses Fractional Divider 0
;     <o21.7>      Enable Select Register  7 uses Fractional Divider 0
;     <o21.8>      Enable Select Register  8 uses Fractional Divider 0
;     <o21.9>      Enable Select Register  9 uses Fractional Divider 0
;     <o21.10>     Enable Select Register 10 uses Fractional Divider 0
;     <o21.11>     Enable Select Register 11 uses Fractional Divider 0
;     <o21.12>     Enable Select Register 12 uses Fractional Divider 0
;     <o21.13>     Enable Select Register 13 uses Fractional Divider 0
;     <o21.14>     Enable Select Register 14 uses Fractional Divider 0
;     <o21.15>     Enable Select Register 15 uses Fractional Divider 0
;     <o21.16>     Enable Select Register 16 uses Fractional Divider 0
;     <o21.17>     Enable Select Register 17 uses Fractional Divider 0
;     <o21.18>     Enable Select Register 18 uses Fractional Divider 0
;     <o21.19>     Enable Select Register 19 uses Fractional Divider 0
;     <o21.20>     Enable Select Register 20 uses Fractional Divider 0
;     <o21.21>     Enable Select Register 21 uses Fractional Divider 0
;     <o21.22>     Enable Select Register 22 uses Fractional Divider 0
;     <o21.23>     Enable Select Register 23 uses Fractional Divider 0
;     <o21.24>     Enable Select Register 24 uses Fractional Divider 0
;     <o21.25>     Enable Select Register 25 uses Fractional Divider 0
;     <o21.26>     Enable Select Register 26 uses Fractional Divider 0
;     <o21.27>     Enable Select Register 27 uses Fractional Divider 0
;     <o21.28>     Enable Select Register 28 uses Fractional Divider 0
;     <o21.29>     Enable Select Register 29 uses Fractional Divider 0
;   </e20>
;   <e22>   Use Frequency Select Switch 2 (FS2_0)
;     <o23.0..2>   FS2: Frequency Switch Input Frequency for Side 2
;                     <0=> ffast (12 MHz)
;                     <1=> I2SRX_BCK0
;                     <2=> I2SRX_WS0
;                     <3=> I2SRX_BCK1
;                     <4=> I2SRX_WS1
;                     <5=> HP0PLL (Audio/I2S PLL)
;                     <6=> HP1PLL (System PLL)
;                     <7=> Reserved
;   </e22>
; </e>
CLOCK_SETUP     EQU     1
FFAST_SETUP     EQU     1
HP0PLL_SETUP    EQU     1
HP0_FIN_SELECT_Val EQU  0x00000000      ; 0x00000000
HP0_MDEC_Val    EQU     0x00001FFF      ; 0x00000000
HP0_NDEC_Val    EQU     0x00000302      ; 0x00000000
HP0_PDEC_Val    EQU     0x00000062      ; 0x00000000
HP0_MODE_Val    EQU     0x00000001      ; 0x00000006
HP0_SELR_Val    EQU     0x00000000      ; 0x00000000
HP0_SELI_Val    EQU     0x00000010      ; 0x00000000
HP0_SELP_Val    EQU     0x00000008      ; 0x00000000
HP1PLL_SETUP    EQU     0
HP1_FIN_SELECT_Val EQU  0x00000000      ; 0x00000000
HP1_MDEC_Val    EQU     0x00001FFF      ; 0x00000000
HP1_NDEC_Val    EQU     0x00000302      ; 0x00000000
HP1_PDEC_Val    EQU     0x00000062      ; 0x00000000
HP1_MODE_Val    EQU     0x00000001      ; 0x00000006
HP1_SELR_Val    EQU     0x00000000      ; 0x00000000
HP1_SELI_Val    EQU     0x00000010      ; 0x00000000
HP1_SELP_Val    EQU     0x00000008      ; 0x00000000
FDC0_Val        EQU     0x00040405      ; 0x0007F808
ESR_FCR0_Bits   EQU     0x3FFAFFFF      ; 0x00000000
FS2_0_SETUP     EQU     1
FS2_0_Val       EQU     0x00000006      ; 0x00000000


;----------------------- MPMC Definitions --------------------------------------

; Multi-Port Memory Controller (MPMC)
MPMC_BASE             EQU   0x17008000  ; MPMC Base Address
                                        ; MPMC Registers Offsets
MPMCControl_OFS       EQU   0x00        ; Control
MPMCStatus_OFS        EQU   0x04        ; Status
MPMCConfig_OFS        EQU   0x08        ; Configuration
MPMCDynControl_OFS    EQU   0x20        ; Dynamic Memory Control
MPMCDynRefresh_OFS    EQU   0x24        ; Dynamic Memory Refresh Timer
MPMCDynReadCfg_OFS    EQU   0x28        ; Dynamic Memory Read Configuration
MPMCDynRP_OFS         EQU   0x30        ; Dynamic Memory Precharge Command Period
MPMCDynRAS_OFS        EQU   0x34        ; Dynamic Memory Active to Precharge Period
MPMCDynSREX_OFS       EQU   0x38        ; Dynamic Memory Self-refresh Exit Time
MPMCDynAPR_OFS        EQU   0x3C        ; Dynamic Memory Last Data Out to Active Time
MPMCDynDAL_OFS        EQU   0x40        ; Dynamic Memory Data-in to Active Command Time
MPMCDynWR_OFS         EQU   0x44        ; Dynamic Memory Write Recovery Time
MPMCDynRC_OFS         EQU   0x48        ; Dynamic Memory Active to Active Command Period
MPMCDynRFC_OFS        EQU   0x4C        ; Dynamic Memory Auto-refresh Period
MPMCDynXSR_OFS        EQU   0x50        ; Dynamic Memory Exit Self-refresh
MPMCDynRRD_OFS        EQU   0x54        ; Dynamic Memory Active Bank A to Active Bank B Time
MPMCDynMRD_OFS        EQU   0x58        ; Dynamic Memory Load Mode to Active Command Time
MPMCStaExtWait_OFS    EQU   0x80        ; Static Memory Extended Wait
MPMCDynConfig0_OFS    EQU   0x100       ; Dynamic Memory Configuration 0
MPMCDynRasCas0_OFS    EQU   0x104       ; Dynamic Memory RAS and CAS Delay 0
MPMCStaConfig0_OFS    EQU   0x200       ; Static Memory Configuration 0
MPMCStaWaitWen0_OFS   EQU   0x204       ; Static Memory Write Enable Delay 0
MPMCStaWaitOen0_OFS   EQU   0x208       ; Static Memory Output Enable Delay 0
MPMCStaWaitRd0_OFS    EQU   0x20C       ; Static Memory Read Delay 0
MPMCStaWaitPage0_OFS  EQU   0x210       ; Static Memory Page Mode Read Delay 0
MPMCStaWaitWr0_OFS    EQU   0x214       ; Static Memory Write Delay 0
MPMCStaWaitTurn0_OFS  EQU   0x218       ; Static Memory Turn Round Delay 0
MPMCStaConfig1_OFS    EQU   0x220       ; Static Memory Configuration 1
MPMCStaWaitWen1_OFS   EQU   0x224       ; Static Memory Write Enable Delay 1
MPMCStaWaitOen1_OFS   EQU   0x228       ; Static Memory Output Enable Delay 1
MPMCStaWaitRd1_OFS    EQU   0x22C       ; Static Memory Read Delay 1
MPMCStaWaitPage1_OFS  EQU   0x230       ; Static Memory Page Mode Read Delay 1
MPMCStaWaitWr1_OFS    EQU   0x234       ; Static Memory Write Delay 1
MPMCStaWaitTurn1_OFS  EQU   0x238       ; Static Memory Turn Round Delay 1

SDRAM0_MODE_REG       EQU   (0x23<< 13) ; SDRAM0 Mode Register     Address

; Constants
NORMAL_CMD            EQU   (0x0 <<  7) ; NORMAL        Command
MODE_CMD              EQU   (0x1 <<  7) ; MODE          Command
PALL_CMD              EQU   (0x2 <<  7) ; Precharge All Command
NOP_CMD               EQU   (0x3 <<  7) ; NOP           Command
REFSH_MODE            EQU   (0x1 <<  2) ; Self-refresh mode

B_BIT                 EQU   (0x1 << 19) ; Self-refresh mode

; <e> Multi-port Memory Controller Setup (MPMC)
MPMC_SETUP            EQU   0

;   <h> MPMC Control Register (MPMCControl)
;     <i> Controls operation of the memory controller
;     <o0.2> L: Low-power mode enable
;     <o0.1> M: Memory map
;       <0=> Normal memory map
;       <1=> Reset memory map
;     <o0.0> E: Controller enable
;   </h>
MPMCControl_Val       EQU   0x00000001  ; 0x00000003

;   <h> MPMC Configuration Register (MPMCConfig)
;     <i> Configures operation of the memory controller
;     <o0.8> CLK: Clock ratio (HCLK/MPMCCLKOUT ratio)
;       <0=> 1:1
;       <1=> 1:2
;     <o0.0> N: Endian mode
;       <0=> Little-endian
;       <1=> Big-endian
;   </h>
MPMCConfig_Val        EQU   0x00000000  ; 0x00000000

;   <e> Dynamic Memory Interface Setup
MPMC_DYNAMIC_SETUP    EQU   1

;     <h> MPMC Dynamic Control Register (MPMCDynamicControl)
;       <o0.13> DP: Low-power SDRAM deep-sleep mode
;                   <0=> Normal operation
;                   <1=> Enter deep power down mode
;       <o0.5> MMC: Memory clock control
;                   <0=> MPMCCLKOUT enabled
;                   <1=> MPMCCLKOUT disabled
;       <o0.1> CS: Dynamic memory clock control
;                   <0=> MPMCCLKOUT stops when all SDRAMs are idle
;                   <1=> MPMCCLKOUT runs continuously
;       <o0.0> CE: Dynamic memory clock enable
;                   <0=> Clock enable of idle devices are deasserted
;                   <1=> All clock enables are driven high continuously
;     </h>
MPMCDynControl_Val    EQU   0x00000003  ; 0x00000000

;     <h> Dynamic Memory Refresh Timer Register (MPMCDynamicRefresh)
;       <i> Configures dynamic memory refresh operation
;       <o0.0..10> REFRESH: Refresh timer <0x000-0x7FF>
;         <i> 0 = refresh disabled, 0x01-0x7FF: value * 16 HCLKs
;     </h>
MPMCDynRefresh_Val    EQU   0x0000002B  ; 0x00000000

;     <h> Dynamic Memory Read Configuration Register (MPMCDynamicReadConfig)
;       <i> Configures the dynamic memory read strategy
;       <o0.0..1> RD: Read data strategy
;         <0=> Clock out delayed strategy
;         <1=> Command delayed strategy
;         <2=> Command delayed strategy plus one clock cycle
;         <3=> Command delayed strategy plus two clock cycles
;     </h>
MPMCDynReadCfg_Val    EQU   0x00000000  ; 0x00000000

;     <h> Dynamic Memory Timings
;       <i> All delays are in clock cycles
;       <h> Dynamic Memory Precharge Command Period Register (MPMCDynamictRP)
;         <o0.0..3> tRP: Precharge command period <1-16> <#-1>
;           <i> This value is normally found in SDRAM data sheets as tRP
;       </h>
;       <h> Dynamic Memory Active to Precharge Command Period Register (MPMCDynamictRAS)
;         <o1.0..3> tRAS: Active to precharge command period <1-16> <#-1>
;           <i> This value is normally found in SDRAM data sheets as tRAS
;       </h>
;       <h> Dynamic Memory Self-refresh Exit Time Register (MPMCDynamictSREX)
;         <o2.0..3> tSREX: Self-refresh exit time <1-16> <#-1>
;           <i> This value is normally found in SDRAM data sheets as tSREX 
;           <i> for devices without this parameter you use the same value as tXSR
;       </h>
;       <h> Dynamic Memory Last-data-out to ActiveCommand Time Register (MPMCDynamictAPR)
;         <o3.0..3> tAPR: Last-data-out to active command time <1-16> <#-1>
;           <i> This value is normally found in SDRAM data sheets as tAPR 
;       </h>
;       <h> Dynamic Memory Data-in to Active Command Time Register (MPMCDynamictDAL)
;         <o4.0..3> tDAL: Data-in to active command time <1-16> <#-1>
;           <i> This value is normally found in SDRAM data sheets as tDAL or tAPW
;       </h>
;       <h> Dynamic Memory Write Recovery Time Register (MPMCDynamictWR)
;         <o5.0..3> tWR: Write recovery time <1-16> <#-1>
;           <i> This value is normally found in SDRAM data sheets as tWR, tDPL, tRWL, or tRDL
;       </h>
;       <h> Dynamic Memory Active to Active Command Period Register (MPMCDynamictRC)
;         <o6.0..4> tRC: Active to active command period <1-32> <#-1>
;           <i> This value is normally found in SDRAM data sheets as tRC
;       </h>
;       <h> Dynamic Memory Auto-refresh Period Register (MPMCDynamictRFC)
;         <o7.0..4> tRFC: Auto-refresh period and auto-refresh to active command period <1-32> <#-1>
;           <i> This value is normally found in SDRAM data sheets as tRFC or tRC
;       </h>
;       <h> Dynamic Memory Exit Self-refresh Register (MPMCDynamictXSR)
;         <o8.0..8> tXSR: Exit self-refresh to active command time <1-256> <#-1>
;           <i> This value is normally found in SDRAM data sheets as tXSR
;       </h>
;       <h> Dynamic Memory Active Bank A to Active Bank B Time Register (MPMCDynamicRRD)
;         <o9.0..3> tRRD: Active bank A to active bank B latency <1-16> <#-1>
;           <i> This value is normally found in SDRAM data sheets as tRRD
;       </h>
;       <h> Dynamic Memory Load Mode Register to Active Command Time (MPMCDynamictMRD)
;         <o10.0..3> tMRD: Load mode register to active command time <1-16> <#-1>
;           <i> This value is normally found in SDRAM data sheets as tMRD or tRSA
;       </h>
;     </h>
MPMCDynRP_Val         EQU   0x00000001  ; 0x0000000F
MPMCDynRAS_Val        EQU   0x00000004  ; 0x0000000F
MPMCDynSREX_Val       EQU   0x00000007  ; 0x0000000F
MPMCDynAPR_Val        EQU   0x00000000  ; 0x0000000F
MPMCDynDAL_Val        EQU   0x00000004  ; 0x0000000F
MPMCDynWR_Val         EQU   0x00000001  ; 0x0000000F
MPMCDynRC_Val         EQU   0x00000006  ; 0x0000001F
MPMCDynRFC_Val        EQU   0x00000007  ; 0x0000001F
MPMCDynXSR_Val        EQU   0x00000007  ; 0x0000001F
MPMCDynRRD_Val        EQU   0x00000001  ; 0x0000000F
MPMCDynMRD_Val        EQU   0x00000001  ; 0x0000000F

;     <e> Configure External Bus Behaviour for Dynamic CS0 Area
MPMC_DYNCS0_SETUP     EQU   1

;       <h> Dynamic Memory Configuration Register (MPMCDynamicConfig0)
;         <i> Defines the configuration information for the dynamic memory CS0
;         <o0.20> P: Write protect enable
;         <o0.14> AM 14: External bus data width
;           <0=> 16 bit
;         <o0.12..13> AM 13..12: External bus memory type
;           <0=> High-performance
;           <1=> Low-power SDRAM
;         <o0.7..11> AM 11..7: External bus address mapping (Row, Bank, Column)
;           <0x00=> 16 Mb = 2MB (2Mx8), 2 banks, row length = 11, column length = 9
;           <0x01=> 16 Mb = 2MB (1Mx16), 2 banks, row length = 11, column length = 8
;           <0x04=> 64 Mb = 8MB (8Mx8), 4 banks, row length = 12, column length = 9
;           <0x05=> 64 Mb = 8MB (4Mx16), 4 banks, row length = 12, column length = 8
;           <0x08=> 128 Mb = 16MB (16Mx8), 4 banks, row length = 12, column length = 10
;           <0x09=> 128 Mb = 16MB (8Mx16), 4 banks, row length = 12, column length = 9
;           <0x0C=> 256 Mb = 32MB (32Mx8), 4 banks, row length = 13, column length = 10
;           <0x0D=> 256 Mb = 32MB (16Mx16), 4 banks, row length = 13, column length = 9
;           <0x10=> 512 Mb = 64MB (64Mx8), 4 banks, row length = 13, column length = 11
;           <0x11=> 512 Mb = 64MB (32Mx16), 4 banks, row length = 13, column length = 10
;         <o0.3..4> MD: Memory device
;           <0=> SDRAM
;           <1=> Low-power SDR SDRAM
;           <2=> Micron SyncFlash
;           <3=> Reserved
;       </h>
MPMCDynConfig0_Val    EQU   0x00000880  ; 0x00000000

;       <h> Dynamic Memory RAS & CAS Delay register (MPMCDynamicRASCAS0)
;         <i> Controls the RAS and CAS latencies for the dynamic memory CS0
;         <o0.8..9> CAS: CAS latency (in clock cycles) <1-3>
;         <o0.0..2> RAS: RAS latency (active to read/write delay, in clock cycles) <1-3>
;       </h>
MPMCDynRasCas0_Val    EQU   0x00000202  ; 0x00000303

;     </e> End of Dynamic Setup for CS0 Area
;   </e> End of Dynamic Setup

;   <e> Static Memory Interface Setup
MPMC_STATIC_SETUP     EQU   0

;     <e> Configure External Bus Behaviour for Static CS0 Area
;       <h> Static Memory Configuration Register (MPMCStaticConfig0)
;         <i> Defines the configuration information for the static memory CS0
;         <o1.20> WP: Write protect enable
;         <o1.8> EW: Extended wait enable
;         <o1.7> BLS: Byte lane state
;           <0=> For reads BLSn are HIGH | for writes BLSn are LOW
;           <1=> For reads BLSn are LOW  | for writes BLSn are LOW
;         <o1.6> PC: Chip select polarity
;           <0=> Active LOW chip select
;           <1=> Active HIGH chip select
;         <o1.3> PM: Page mode enable
;         <o1.0> MW: Memory width
;           <0=> 8 bit
;           <1=> 16 bit
;       </h>
;       <h> Static Memory Write Enable Delay Register (MPMCStaticWaitWen0)
;         <i> Selects the delay from CS0 to write enable
;         <o2.0..3> WAITWEN: Wait write enable <1-16> <#-1>
;           <i> The delay is in HCLK cycles
;       </h>
;       <h> Static Memory Output Enable Delay Register (MPMCStaticWaitOen0)
;         <i> Selects the delay from CS0 or address change, whichever is later, to output enable
;         <o3.0..3> WAITOEN: Wait output enable <0-15>
;           <i> The delay is in HCLK cycles
;       </h>
;       <h> Static Memory Read Delay Register (MPMCStaticWaitRd0)
;         <i> Selects the delay from CS0 to a read access
;         <o4.0..4> WAITRD: Non-page mode read wait states or asynchronous page mode read first access wait states <1-32> <#-1>
;           <i> The delay is in HCLK cycles
;       </h>
;       <h> Static Memory Page Mode Read Delay Register (MPMCStaticWaitPage0)
;         <i> Selects the delay for asynchronous page mode sequential accesses for CS0
;         <o5.0..4> WAITPAGE: Asynchronous page mode read after the first read wait states <1-32> <#-1>
;           <i> The delay is in HCLK cycles
;       </h>
;       <h> Static Memory Write Delay Register (MPMCStaticWaitWr0)
;         <i> Selects the delay from CS0 to a write access
;         <o6.0..4> WAITWR: Write wait states <2-33> <#-2>
;           <i> The delay is in HCLK cycles
;       </h>
;       <h> Static Memory Turn Round Delay Register (MPMCStaticWaitTurn0)
;         <i> Selects the number of bus turnaround cycles for CS0
;         <o7.0..4> WAITTURN: Bus turnaround cycles <1-16> <#-1>
;           <i> The delay is in HCLK cycles
;       </h>
;     </e> End of Static Setup for Static CS0 Area
MPMC_STACS0_SETUP     EQU   0
MPMCStaConfig0_Val    EQU   0x00000000  ; 0x00000000
MPMCStaWaitWen0_Val   EQU   0x00000000  ; 0x00000000
MPMCStaWaitOen0_Val   EQU   0x00000000  ; 0x00000000
MPMCStaWaitRd0_Val    EQU   0x0000001F  ; 0x0000001F
MPMCStaWaitPage0_Val  EQU   0x0000001F  ; 0x0000001F
MPMCStaWaitWr0_Val    EQU   0x0000001F  ; 0x0000001F
MPMCStaWaitTurn0_Val  EQU   0x0000000F  ; 0x0000000F

;     <e> Configure External Bus Behaviour for Static CS1 Area
;       <h> Static Memory Configuration Register (MPMCStaticConfig1)
;         <i> Defines the configuration information for the static memory CS1
;         <o1.20> WP: Write protect enable
;         <o1.8> EW: Extended wait enable
;         <o1.7> BLS: Byte lane state
;           <0=> For reads BLSn are HIGH | for writes BLSn are LOW
;           <1=> For reads BLSn are LOW  | for writes BLSn are LOW
;         <o1.6> PC: Chip select polarity
;           <0=> Active LOW chip select
;           <1=> Active HIGH chip select
;         <o1.3> PM: Page mode enable
;         <o1.0> MW: Memory width
;           <0=> 8 bit
;           <1=> 16 bit
;       </h>
;       <h> Static Memory Write Enable Delay Register (MPMCStaticWaitWen1)
;         <i> Selects the delay from CS1 to write enable
;         <o2.0..3> WAITWEN: Wait write enable <1-16> <#-1>
;           <i> The delay is in HCLK cycles
;       </h>
;       <h> Static Memory Output Enable Delay Register (MPMCStaticWaitOen1)
;         <i> Selects the delay from CS1 or address change, whichever is later, to output enable
;         <o3.0..3> WAITOEN: Wait output enable <0-15>
;           <i> The delay is in HCLK cycles
;       </h>
;       <h> Static Memory Read Delay Register (MPMCStaticWaitRd1)
;         <i> Selects the delay from CS1 to a read access
;         <o4.0..4> WAITRD: Non-page mode read wait states or asynchronous page mode read first access wait states <1-32> <#-1>
;           <i> The delay is in HCLK cycles
;       </h>
;       <h> Static Memory Page Mode Read Delay Register (MPMCStaticWaitPage1)
;         <i> Selects the delay for asynchronous page mode sequential accesses for CS1
;         <o5.0..4> WAITPAGE: Asynchronous page mode read after the first read wait states <1-32> <#-1>
;           <i> The delay is in HCLK cycles
;       </h>
;       <h> Static Memory Write Delay Register (MPMCStaticWaitWr1)
;         <i> Selects the delay from CS1 to a write access
;         <o6.0..4> WAITWR: Write wait states <2-33> <#-2>
;           <i> The delay is in HCLK cycles
;       </h>
;       <h> Static Memory Turn Round Delay Register (MPMCStaticWaitTurn1)
;         <i> Selects the number of bus turnaround cycles for CS1
;         <o7.0..4> WAITTURN: Bus turnaround cycles <1-16> <#-1>
;           <i> The delay is in HCLK cycles
;       </h>
;     </e> End of Static Setup for Static CS1 Area
MPMC_STACS1_SETUP     EQU   0
MPMCStaConfig1_Val    EQU   0x00000000  ; 0x00000000
MPMCStaWaitWen1_Val   EQU   0x00000000  ; 0x00000000
MPMCStaWaitOen1_Val   EQU   0x00000000  ; 0x00000000
MPMCStaWaitRd1_Val    EQU   0x0000001F  ; 0x0000001F
MPMCStaWaitPage1_Val  EQU   0x0000001F  ; 0x0000001F
MPMCStaWaitWr1_Val    EQU   0x0000001F  ; 0x0000001F
MPMCStaWaitTurn1_Val  EQU   0x0000000F  ; 0x0000000F

;     <h> Static Memory Extended Wait Register (MPMCStaticExtendedWait)
;       <i> Time long static memory read and write transfers
;       <o.0..9> EXTENDEDWAIT: Extended wait time out <0-1023>
;         <i> The delay is in (16 * cycles)
;     </h>
MPMCStaExtWait_Val    EQU   0x00000000  ; 0x00000000

;   </e> End of Static Setup
; </e> End of MPMC Setup


;----------------------- System Controller Definitions -------------------------

; System Controller
SC_BASE         EQU     0x13002800      ; System Control Base Address
ARM926_S_P_OFS  EQU     0x84            ; Shadow Pointer Register Address Offset

; <e> Shadow Memory Setup
;   <o1> Address of memory that will be shadowed at address 0 <0x0-0xFFFFFC00:0x400>
; </e>
SHADOW_SETUP    EQU     0
ARM926_S_P_Val  EQU     0x30000000


;----------------------- CODE --------------------------------------------------

                PRESERVE8

; Area Definition and Entry Point
;  Startup Code must be linked first at Address at which it expects to run.

                AREA    RESET, CODE, READONLY
                ARM

                IF      :LNOT::DEF:__EVAL 
                IF      :DEF:SIZE_INT_INFO
                IMPORT  ||Image$$ER_IROM1$$RO$$Length||
                IMPORT  ||Image$$RW_IRAM1$$RW$$Length||
                ELIF    :DEF:SIZE_EXT_INFO
                IMPORT  ||Image$$ER_ROM1$$RO$$Length||
                IMPORT  ||Image$$RW_RAM1$$RW$$Length||
                ENDIF
                ENDIF

                IF      :DEF:__RTX
                IMPORT  SWI_Handler
                ENDIF

; Exception Vectors
;  Mapped to Address 0.
;  Absolute addressing mode must be used.
;  Dummy Handlers are implemented as infinite loops which can be modified.

Vectors         LDR     PC, Reset_Addr         
                LDR     PC, Undef_Addr
                LDR     PC, SWI_Addr
                LDR     PC, PAbt_Addr
                LDR     PC, DAbt_Addr
                ; Reserved vector is used for image size information
                IF      :DEF:__EVAL
                  DCD   0x8000
                ELSE 
                  IF    :DEF:SIZE_INT_INFO
                    DCD ||Image$$ER_IROM1$$RO$$Length||+\
                        ||Image$$RW_IRAM1$$RW$$Length||
                  ELIF  :DEF:SIZE_EXT_INFO
                    DCD ||Image$$ER_ROM1$$RO$$Length||+\
                        ||Image$$RW_RAM1$$RW$$Length||
                  ELSE
                    NOP
                  ENDIF
                ENDIF
                LDR     PC, IRQ_Addr
                LDR     PC, FIQ_Addr

Reset_Addr      DCD     Reset_Handler
Undef_Addr      DCD     Undef_Handler
SWI_Addr        DCD     SWI_Handler
PAbt_Addr       DCD     PAbt_Handler
DAbt_Addr       DCD     DAbt_Handler
                DCD     0                      ; Reserved Address 
IRQ_Addr        DCD     IRQ_Handler
FIQ_Addr        DCD     FIQ_Handler

Undef_Handler   B       Undef_Handler
                IF      :LNOT::DEF:__RTX
SWI_Handler     B       SWI_Handler
                ENDIF
PAbt_Handler    B       PAbt_Handler
DAbt_Handler    B       DAbt_Handler
IRQ_Handler     B       IRQ_Handler
FIQ_Handler     B       FIQ_Handler


; Reset Handler

                EXPORT  Reset_Handler
Reset_Handler   


; Clock Setup ------------------------------------------------------------------

                IF      (:LNOT:(:DEF:NO_CLOCK_INIT)):LAND:(CLOCK_SETUP != 0)
                LDR     R0, =CGU_BASE

                IF      (FFAST_SETUP != 0)
                MOV     R1, #1
                STR     R1, [R0, #FFAST_ON_OFS]
                ENDIF

                IF      (HP0PLL_SETUP != 0)       ; Setup PLL0
                MOV     R1, #(1<<2)               ; Disable PLL
                STR     R1, [R0, #HP0_MODE_OFS]
                MOV     R1, #HP0_FIN_SELECT_Val   ; Select input to PLL
                STR     R1, [R0, #HP0_FIN_SELECT_OFS]
                IF      (HP0_MDEC_Val != 0)       ; Setup feedback divider (M)
                LDR     R1, =HP0_MDEC_Val
                STR     R1, [R0, #HP0_MDEC_OFS]
                ENDIF
                IF      (HP0_NDEC_Val != 0)       ; Setup pre-divider (N)
                LDR     R1, =HP0_NDEC_Val
                STR     R1, [R0, #HP0_NDEC_OFS]
                ENDIF
                IF      (HP0_PDEC_Val != 0)       ; Setup post-divider (P)
                MOV     R1, #HP0_PDEC_Val
                STR     R1, [R0, #HP0_PDEC_OFS]
                ENDIF
                MOV     R1, #HP0_SELR_Val         ; Setup selr
                STR     R1, [R0, #HP0_SELR_OFS]
                MOV     R1, #HP0_SELI_Val         ; Setup seli
                STR     R1, [R0, #HP0_SELI_OFS]
                MOV     R1, #HP0_SELP_Val         ; Setup selp
                STR     R1, [R0, #HP0_SELP_OFS]
                MOV     R1, #HP0_MODE_Val         ; Enable PLL and set mode
                STR     R1, [R0, #HP0_MODE_OFS]
                MOV     R3, #0x800
PLL0_Loop       SUBS    R3, R3, #1
                BNE     PLL0_Loop
                ENDIF

                IF      (HP1PLL_SETUP != 0)       ; Setup PLL1
                MOV     R1, #(1<<2)               ; Disable PLL
                STR     R1, [R0, #HP1_MODE_OFS]
                MOV     R1, #HP1_FIN_SELECT_Val   ; Select input to PLL
                STR     R1, [R0, #HP1_FIN_SELECT_OFS]
                IF      (HP1_MDEC_Val != 0)       ; Setup feedback divider (M)
                LDR     R1, =HP1_MDEC_Val
                STR     R1, [R0, #HP1_MDEC_OFS]
                ENDIF
                IF      (HP1_NDEC_Val != 0)       ; Setup pre-divider (N)
                LDR     R1, =HP1_NDEC_Val
                STR     R1, [R0, #HP1_NDEC_OFS]
                ENDIF
                IF      (HP1_PDEC_Val != 0)       ; Setup post-divider (P)
                MOV     R1, #HP1_PDEC_Val
                STR     R1, [R0, #HP1_PDEC_OFS]
                ENDIF
                MOV     R1, #HP1_SELR_Val         ; Setup selr
                STR     R1, [R0, #HP1_SELR_OFS]
                MOV     R1, #HP1_SELI_Val         ; Setup seli
                STR     R1, [R0, #HP1_SELI_OFS]
                MOV     R1, #HP1_SELP_Val         ; Setup selp
                STR     R1, [R0, #HP1_SELP_OFS]
                MOV     R1, #HP1_MODE_Val         ; Enable PLL and set mode
                STR     R1, [R0, #HP1_MODE_OFS]
                MOV     R3, #0x800
PLL1_Loop       SUBS    R3, R3, #1
                BNE     PLL1_Loop
                ENDIF

                IF      ((FDC0_Val & 0x01) != 0)  ; Setup FDC0
                MOV     R1, #0x02
                STR     R1, [R0, #FDC0_OFS]
                LDR     R1, =(FDC0_Val & ~0x01)
                STR     R1, [R0, #FDC0_OFS]

                MOV     R1, #1                    ; Setup ESR0 .. ESR29
                MOV     R2, #0
                LDR     R3, =ESR0_OFS
                LDR     R4, =ESR29_OFS
                LDR     R5, =ESR_FCR0_Bits
SET_ESRs        TST     R5, R1
                STRNE   R1, [R0, R3]
                STREQ   R2, [R0, R3]
                SUBS    R6, R4, R3
                ADD     R3, R3, #4
                LSR     R5, R5, #1
                BNE     SET_ESRs

                LDR     R1, [R0, #PCR17_OFS]      ; Setup PCR17
                ORR     R1, R1, #0x10
                STR     R1, [R0, #PCR17_OFS]
                MOV     R1, #0x01
                STR     R1, [R0, #BCR0_OFS]

                LDR     R1, =FDC0_Val             ; Enable FDC0
                STR     R1, [R0, #FDC0_OFS]
                ENDIF

                IF      (FS2_0_SETUP != 0)        ; Setup FS2_0
                MOV     R1, #FS2_0_Val
                STR     R1, [R0, #FS2_0_OFS]
                MOV     R1, #0x02                 ; Switch system clock to FS2_0
                STR     R1, [R0, #SCR0_OFS]
                ENDIF

                ENDIF


; MPMC Setup -------------------------------------------------------------------

                IF      (:LNOT::DEF:NO_MPMC_INIT):LAND:(MPMC_SETUP != 0)
                LDR     R0, =SC_BASE              ; Address of SYS CON Config
                LDR     R1, =MPMC_BASE            ; Address of MPMC Controller
                LDR     R2, =ESDRAM0_BASE         ; External SDRAM0 Start Adr

;  Setup Dynamic Memory Interface
                IF      (:LNOT::DEF:NO_MPMC_DYNAMIC_INIT):LAND:(MPMC_DYNAMIC_SETUP != 0)
                MOV     R5, #0
                MOV     R4, #MPMCControl_Val
                STR     R4, [R1, #MPMCControl_OFS]
                LDR     R4, =MPMCConfig_Val
                STR     R4, [R1, #MPMCConfig_OFS]

                LDR     R4, =MPMCDynRP_Val
                STR     R4, [R1, #MPMCDynRP_OFS]
                LDR     R4, =MPMCDynRAS_Val
                STR     R4, [R1, #MPMCDynRAS_OFS]
                LDR     R4, =MPMCDynSREX_Val
                STR     R4, [R1, #MPMCDynSREX_OFS]
                LDR     R4, =MPMCDynAPR_Val
                STR     R4, [R1, #MPMCDynAPR_OFS]
                LDR     R4, =MPMCDynDAL_Val
                STR     R4, [R1, #MPMCDynDAL_OFS]
                LDR     R4, =MPMCDynWR_Val
                STR     R4, [R1, #MPMCDynWR_OFS]
                LDR     R4, =MPMCDynRC_Val
                STR     R4, [R1, #MPMCDynRC_OFS]
                LDR     R4, =MPMCDynRFC_Val
                STR     R4, [R1, #MPMCDynRFC_OFS]
                LDR     R4, =MPMCDynXSR_Val
                STR     R4, [R1, #MPMCDynXSR_OFS]
                LDR     R4, =MPMCDynRRD_Val
                STR     R4, [R1, #MPMCDynRRD_OFS]
                LDR     R4, =MPMCDynMRD_Val
                STR     R4, [R1, #MPMCDynMRD_OFS]

                STR     R5, [R1, #MPMCDynControl_OFS]
                LDR     R4, =(REFSH_MODE | MPMCDynControl_Val)
                STR     R4, [R1, #MPMCDynControl_OFS]
                LDR     R4, =MPMCDynReadCfg_Val
                STR     R4, [R1, #MPMCDynReadCfg_OFS]
                MOV     R4, #MPMCControl_Val
                STR     R4, [R1, #MPMCControl_OFS]

                LDR     R4, =(NOP_CMD | MPMCDynControl_Val)     ; Write NOP Cmd
                STR     R4, [R1, #MPMCDynControl_OFS]

                LDR     R6, =100*45               ; ~100us at 180 MHz
Wait_0          SUBS    R6, R6, #1
                BNE     Wait_0

                LDR     R4, =(PALL_CMD | MPMCDynControl_Val)    ; Write Prchg All Cmd
                STR     R4, [R1, #MPMCDynControl_OFS]

                LDR     R6, =100*45               ; ~100us at 180 MHz
Wait_1          SUBS    R6, R6, #1
                BNE     Wait_1

                MOV     R4, #2
                STR     R4, [R1, #MPMCDynRefresh_OFS]

                LDR     R6, =100*45               ; ~100us at 180 MHz
Wait_3          SUBS    R6, R6, #1
                BNE     Wait_3

                LDR     R4, =MPMCDynRefresh_Val
                STR     R4, [R1, #MPMCDynRefresh_OFS]

                IF      (MPMC_DYNCS0_SETUP != 0)
                LDR     R4, =MPMCDynRasCas0_Val
                STR     R4, [R1, #MPMCDynRasCas0_OFS]
                LDR     R4, =MPMCDynConfig0_Val
                STR     R4, [R1, #MPMCDynConfig0_OFS]
                ENDIF

                LDR     R4, =(MODE_CMD | MPMCDynControl_Val)    ; Write MODE Cmd
                STR     R4, [R1, #MPMCDynControl_OFS]

                LDR     R4, =(ESDRAM0_BASE+SDRAM0_MODE_REG)
                LDR     R4, [R4, #0]

                MOV     R4, #0
                STR     R4, [R1, #MPMCDynControl_OFS]

                LDR     R4, =(MPMCDynConfig0_Val | B_BIT)       ; Enable buffer
                STR     R4, [R1, #MPMCDynConfig0_OFS]

                LDR     R4, =(NORMAL_CMD | MPMCDynControl_Val)  ; Write NORMAL Cmd
                STR     R4, [R1, #MPMCDynControl_OFS]

                ENDIF   ;(:LNOT::DEF:NO_MPMC_DYNAMIC_INIT):LAND:(MPMC_DYNAMIC_SETUP != 0)

;  Setup Static Memory Interface
                IF      (:LNOT::DEF:NO_MPMC_STATIC_INIT):LAND:(MPMC_STATIC_SETUP != 0)

                IF      (MPMC_STACS0_SETUP != 0)
                LDR     R4, =MPMCStaConfig0_Val
                STR     R4, [R0, #MPMCStaConfig0_OFS]
                LDR     R4, =MPMCStaWaitWen0_Val
                STR     R4, [R0, #MPMCStaWaitWen0_OFS]
                LDR     R4, =MPMCStaWaitOen0_Val
                STR     R4, [R0, #MPMCStaWaitOen0_OFS]
                LDR     R4, =MPMCStaWaitRd0_Val
                STR     R4, [R0, #MPMCStaWaitRd0_OFS]
                LDR     R4, =MPMCStaWaitPage0_Val
                STR     R4, [R0, #MPMCStaWaitPage0_OFS]
                LDR     R4, =MPMCStaWaitWr0_Val
                STR     R4, [R0, #MPMCStaWaitWr0_OFS]
                LDR     R4, =MPMCStaWaitTurn0_Val
                STR     R4, [R0, #MPMCStaWaitTurn0_OFS]
                ENDIF

                IF      (MPMC_STACS1_SETUP != 0)
                LDR     R4, =MPMCStaConfig1_Val
                STR     R4, [R0, #MPMCStaConfig1_OFS]
                LDR     R4, =MPMCStaWaitWen1_Val
                STR     R4, [R0, #MPMCStaWaitWen1_OFS]
                LDR     R4, =MPMCStaWaitOen1_Val
                STR     R4, [R0, #MPMCStaWaitOen1_OFS]
                LDR     R4, =MPMCStaWaitRd1_Val
                STR     R4, [R0, #MPMCStaWaitRd1_OFS]
                LDR     R4, =MPMCStaWaitPage1_Val
                STR     R4, [R0, #MPMCStaWaitPage1_OFS]
                LDR     R4, =MPMCStaWaitWr1_Val
                STR     R4, [R0, #MPMCStaWaitWr1_OFS]
                LDR     R4, =MPMCStaWaitTurn1_Val
                STR     R4, [R0, #MPMCStaWaitTurn1_OFS]
                ENDIF

                LDR     R4, =MPMCStaExtWait_Val
                STR     R4, [R0, #MPMCStaExtWait_OFS]

                ENDIF   ;(:LNOT::DEF:NO_MPMC_STATIC_INIT):LAND:(MPMC_STATIC_SETUP != 0)
                ENDIF   ;(:LNOT::DEF:NO_MPMC_INIT):LAND:(MPMC_SETUP != 0)


; Setup shadowing --------------------------------------------------------------

                IF      (:LNOT::DEF:NO_SHADOW_INIT):LAND:(SHADOW_SETUP != 0)
                LDR     R0, =SC_BASE
                LDR     R1, =ARM926_S_P_Val
                STR     R1, [R0, #ARM926_S_P_OFS]
                ENDIF


; Setup Stack for each mode ----------------------------------------------------

                LDR     R0, =Stack_Top

;  Enter Undefined Instruction Mode and set its Stack Pointer
                MSR     CPSR_c, #Mode_UND:OR:I_Bit:OR:F_Bit
                MOV     SP, R0
                SUB     R0, R0, #UND_Stack_Size

;  Enter Abort Mode and set its Stack Pointer
                MSR     CPSR_c, #Mode_ABT:OR:I_Bit:OR:F_Bit
                MOV     SP, R0
                SUB     R0, R0, #ABT_Stack_Size

;  Enter FIQ Mode and set its Stack Pointer
                MSR     CPSR_c, #Mode_FIQ:OR:I_Bit:OR:F_Bit
                MOV     SP, R0
                SUB     R0, R0, #FIQ_Stack_Size

;  Enter IRQ Mode and set its Stack Pointer
                MSR     CPSR_c, #Mode_IRQ:OR:I_Bit:OR:F_Bit
                MOV     SP, R0
                SUB     R0, R0, #IRQ_Stack_Size

;  Enter Supervisor Mode and set its Stack Pointer
                MSR     CPSR_c, #Mode_SVC:OR:I_Bit:OR:F_Bit
                MOV     SP, R0
                SUB     R0, R0, #SVC_Stack_Size

;  Enter User Mode and set its Stack Pointer
                MSR     CPSR_c, #Mode_USR
                IF      :DEF:__MICROLIB

                EXPORT __initial_sp

                ELSE

                MOV     SP, R0
                SUB     SL, SP, #USR_Stack_Size

                ENDIF

; Enter the C code -------------------------------------------------------------

                IMPORT  __main
                LDR     R0, =__main
                BX      R0


                IF      :DEF:__MICROLIB

                EXPORT  __heap_base
                EXPORT  __heap_limit

                ELSE
; User Initial Stack & Heap
                AREA    |.text|, CODE, READONLY

                IMPORT  __use_two_region_memory
                EXPORT  __user_initial_stackheap
__user_initial_stackheap

                LDR     R0, =  Heap_Mem
                LDR     R1, =(Stack_Mem + USR_Stack_Size)
                LDR     R2, = (Heap_Mem +      Heap_Size)
                LDR     R3, = Stack_Mem
                BX      LR
                ENDIF


                END
