//*****************************************************************************
//
// lm3s102.h - LM3S102 Register Definitions
//
// Copyright (c) 2007-2008 Luminary Micro, Inc.  All rights reserved.
// 
// Software License Agreement
// 
// Luminary Micro, Inc. (LMI) is supplying this software for use solely and
// exclusively on LMI's microcontroller products.
// 
// The software is owned by LMI and/or its suppliers, and is protected under
// applicable copyright laws.  All rights are reserved.  You may not combine
// this software with "viral" open-source software in order to form a larger
// program.  Any use in violation of the foregoing restrictions may subject
// the user to criminal sanctions under applicable laws, as well as to civil
// liability for the breach of the terms and conditions of this license.
// 
// THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
// OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
// LMI SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR
// CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
// 
// This is part of revision 2523 of the Stellaris Peripheral Driver Library.
//
//*****************************************************************************

#ifndef __LM3S102_H__
#define __LM3S102_H__

//*****************************************************************************
//
// Watchdog Timer (WATCHDOG)
//
//*****************************************************************************
#define WATCHDOG_LOAD_R         (*((volatile unsigned long *)0x40000000))
#define WATCHDOG_VALUE_R        (*((volatile unsigned long *)0x40000004))
#define WATCHDOG_CTL_R          (*((volatile unsigned long *)0x40000008))
#define WATCHDOG_ICR_R          (*((volatile unsigned long *)0x4000000C))
#define WATCHDOG_RIS_R          (*((volatile unsigned long *)0x40000010))
#define WATCHDOG_MIS_R          (*((volatile unsigned long *)0x40000014))
#define WATCHDOG_TEST_R         (*((volatile unsigned long *)0x40000418))
#define WATCHDOG_LOCK_R         (*((volatile unsigned long *)0x40000C00))

//*****************************************************************************
//
// General-Purpose Input/Outputs (PORTA)
//
//*****************************************************************************
#define GPIO_PORTA_DATA_BITS_R  ((volatile unsigned long *)0x40004000)
#define GPIO_PORTA_DATA_R       (*((volatile unsigned long *)0x400043FC))
#define GPIO_PORTA_DIR_R        (*((volatile unsigned long *)0x40004400))
#define GPIO_PORTA_IS_R         (*((volatile unsigned long *)0x40004404))
#define GPIO_PORTA_IBE_R        (*((volatile unsigned long *)0x40004408))
#define GPIO_PORTA_IEV_R        (*((volatile unsigned long *)0x4000440C))
#define GPIO_PORTA_IM_R         (*((volatile unsigned long *)0x40004410))
#define GPIO_PORTA_RIS_R        (*((volatile unsigned long *)0x40004414))
#define GPIO_PORTA_MIS_R        (*((volatile unsigned long *)0x40004418))
#define GPIO_PORTA_ICR_R        (*((volatile unsigned long *)0x4000441C))
#define GPIO_PORTA_AFSEL_R      (*((volatile unsigned long *)0x40004420))
#define GPIO_PORTA_DR2R_R       (*((volatile unsigned long *)0x40004500))
#define GPIO_PORTA_DR4R_R       (*((volatile unsigned long *)0x40004504))
#define GPIO_PORTA_DR8R_R       (*((volatile unsigned long *)0x40004508))
#define GPIO_PORTA_ODR_R        (*((volatile unsigned long *)0x4000450C))
#define GPIO_PORTA_PUR_R        (*((volatile unsigned long *)0x40004510))
#define GPIO_PORTA_PDR_R        (*((volatile unsigned long *)0x40004514))
#define GPIO_PORTA_SLR_R        (*((volatile unsigned long *)0x40004518))
#define GPIO_PORTA_DEN_R        (*((volatile unsigned long *)0x4000451C))

//*****************************************************************************
//
// General-Purpose Input/Outputs (PORTB)
//
//*****************************************************************************
#define GPIO_PORTB_DATA_BITS_R  ((volatile unsigned long *)0x40005000)
#define GPIO_PORTB_DATA_R       (*((volatile unsigned long *)0x400053FC))
#define GPIO_PORTB_DIR_R        (*((volatile unsigned long *)0x40005400))
#define GPIO_PORTB_IS_R         (*((volatile unsigned long *)0x40005404))
#define GPIO_PORTB_IBE_R        (*((volatile unsigned long *)0x40005408))
#define GPIO_PORTB_IEV_R        (*((volatile unsigned long *)0x4000540C))
#define GPIO_PORTB_IM_R         (*((volatile unsigned long *)0x40005410))
#define GPIO_PORTB_RIS_R        (*((volatile unsigned long *)0x40005414))
#define GPIO_PORTB_MIS_R        (*((volatile unsigned long *)0x40005418))
#define GPIO_PORTB_ICR_R        (*((volatile unsigned long *)0x4000541C))
#define GPIO_PORTB_AFSEL_R      (*((volatile unsigned long *)0x40005420))
#define GPIO_PORTB_DR2R_R       (*((volatile unsigned long *)0x40005500))
#define GPIO_PORTB_DR4R_R       (*((volatile unsigned long *)0x40005504))
#define GPIO_PORTB_DR8R_R       (*((volatile unsigned long *)0x40005508))
#define GPIO_PORTB_ODR_R        (*((volatile unsigned long *)0x4000550C))
#define GPIO_PORTB_PUR_R        (*((volatile unsigned long *)0x40005510))
#define GPIO_PORTB_PDR_R        (*((volatile unsigned long *)0x40005514))
#define GPIO_PORTB_SLR_R        (*((volatile unsigned long *)0x40005518))
#define GPIO_PORTB_DEN_R        (*((volatile unsigned long *)0x4000551C))

//*****************************************************************************
//
// General-Purpose Input/Outputs (PORTC)
//
//*****************************************************************************
#define GPIO_PORTC_DATA_BITS_R  ((volatile unsigned long *)0x40006000)
#define GPIO_PORTC_DATA_R       (*((volatile unsigned long *)0x400063FC))
#define GPIO_PORTC_DIR_R        (*((volatile unsigned long *)0x40006400))
#define GPIO_PORTC_IS_R         (*((volatile unsigned long *)0x40006404))
#define GPIO_PORTC_IBE_R        (*((volatile unsigned long *)0x40006408))
#define GPIO_PORTC_IEV_R        (*((volatile unsigned long *)0x4000640C))
#define GPIO_PORTC_IM_R         (*((volatile unsigned long *)0x40006410))
#define GPIO_PORTC_RIS_R        (*((volatile unsigned long *)0x40006414))
#define GPIO_PORTC_MIS_R        (*((volatile unsigned long *)0x40006418))
#define GPIO_PORTC_ICR_R        (*((volatile unsigned long *)0x4000641C))
#define GPIO_PORTC_AFSEL_R      (*((volatile unsigned long *)0x40006420))
#define GPIO_PORTC_DR2R_R       (*((volatile unsigned long *)0x40006500))
#define GPIO_PORTC_DR4R_R       (*((volatile unsigned long *)0x40006504))
#define GPIO_PORTC_DR8R_R       (*((volatile unsigned long *)0x40006508))
#define GPIO_PORTC_ODR_R        (*((volatile unsigned long *)0x4000650C))
#define GPIO_PORTC_PUR_R        (*((volatile unsigned long *)0x40006510))
#define GPIO_PORTC_PDR_R        (*((volatile unsigned long *)0x40006514))
#define GPIO_PORTC_SLR_R        (*((volatile unsigned long *)0x40006518))
#define GPIO_PORTC_DEN_R        (*((volatile unsigned long *)0x4000651C))

//*****************************************************************************
//
// Synchronous Serial Interface (SSI0)
//
//*****************************************************************************
#define SSI0_CR0_R              (*((volatile unsigned long *)0x40008000))
#define SSI0_CR1_R              (*((volatile unsigned long *)0x40008004))
#define SSI0_DR_R               (*((volatile unsigned long *)0x40008008))
#define SSI0_SR_R               (*((volatile unsigned long *)0x4000800C))
#define SSI0_CPSR_R             (*((volatile unsigned long *)0x40008010))
#define SSI0_IM_R               (*((volatile unsigned long *)0x40008014))
#define SSI0_RIS_R              (*((volatile unsigned long *)0x40008018))
#define SSI0_MIS_R              (*((volatile unsigned long *)0x4000801C))
#define SSI0_ICR_R              (*((volatile unsigned long *)0x40008020))

//*****************************************************************************
//
// Universal Asynchronous Receivers/Transmitters (UART0)
//
//*****************************************************************************
#define UART0_DR_R              (*((volatile unsigned long *)0x4000C000))
#define UART0_RSR_R             (*((volatile unsigned long *)0x4000C004))
#define UART0_ECR_R             (*((volatile unsigned long *)0x4000C004))
#define UART0_FR_R              (*((volatile unsigned long *)0x4000C018))
#define UART0_IBRD_R            (*((volatile unsigned long *)0x4000C024))
#define UART0_FBRD_R            (*((volatile unsigned long *)0x4000C028))
#define UART0_LCRH_R            (*((volatile unsigned long *)0x4000C02C))
#define UART0_CTL_R             (*((volatile unsigned long *)0x4000C030))
#define UART0_IFLS_R            (*((volatile unsigned long *)0x4000C034))
#define UART0_IM_R              (*((volatile unsigned long *)0x4000C038))
#define UART0_RIS_R             (*((volatile unsigned long *)0x4000C03C))
#define UART0_MIS_R             (*((volatile unsigned long *)0x4000C040))
#define UART0_ICR_R             (*((volatile unsigned long *)0x4000C044))

//*****************************************************************************
//
// Inter-Integrated Circuit (MASTER) Interface
//
//*****************************************************************************
#define I2C0_MASTER_MSA_R       (*((volatile unsigned long *)0x40020000))
#define I2C0_MASTER_SOAR_R      (*((volatile unsigned long *)0x40020000))
#define I2C0_MASTER_SCSR_R      (*((volatile unsigned long *)0x40020004))
#define I2C0_MASTER_MCS_R       (*((volatile unsigned long *)0x40020004))
#define I2C0_MASTER_SDR_R       (*((volatile unsigned long *)0x40020008))
#define I2C0_MASTER_MDR_R       (*((volatile unsigned long *)0x40020008))
#define I2C0_MASTER_MTPR_R      (*((volatile unsigned long *)0x4002000C))
#define I2C0_MASTER_SIMR_R      (*((volatile unsigned long *)0x4002000C))
#define I2C0_MASTER_SRIS_R      (*((volatile unsigned long *)0x40020010))
#define I2C0_MASTER_MIMR_R      (*((volatile unsigned long *)0x40020010))
#define I2C0_MASTER_MRIS_R      (*((volatile unsigned long *)0x40020014))
#define I2C0_MASTER_SMIS_R      (*((volatile unsigned long *)0x40020014))
#define I2C0_MASTER_SICR_R      (*((volatile unsigned long *)0x40020018))
#define I2C0_MASTER_MMIS_R      (*((volatile unsigned long *)0x40020018))
#define I2C0_MASTER_MICR_R      (*((volatile unsigned long *)0x4002001C))
#define I2C0_MASTER_MCR_R       (*((volatile unsigned long *)0x40020020))

//*****************************************************************************
//
// Inter-Integrated Circuit (SLAVE) Interface
//
//*****************************************************************************
#define I2C0_SLAVE_MSA_R        (*((volatile unsigned long *)0x40020800))
#define I2C0_SLAVE_SOAR_R       (*((volatile unsigned long *)0x40020800))
#define I2C0_SLAVE_SCSR_R       (*((volatile unsigned long *)0x40020804))
#define I2C0_SLAVE_MCS_R        (*((volatile unsigned long *)0x40020804))
#define I2C0_SLAVE_SDR_R        (*((volatile unsigned long *)0x40020808))
#define I2C0_SLAVE_MDR_R        (*((volatile unsigned long *)0x40020808))
#define I2C0_SLAVE_MTPR_R       (*((volatile unsigned long *)0x4002080C))
#define I2C0_SLAVE_SIMR_R       (*((volatile unsigned long *)0x4002080C))
#define I2C0_SLAVE_SRIS_R       (*((volatile unsigned long *)0x40020810))
#define I2C0_SLAVE_MIMR_R       (*((volatile unsigned long *)0x40020810))
#define I2C0_SLAVE_MRIS_R       (*((volatile unsigned long *)0x40020814))
#define I2C0_SLAVE_SMIS_R       (*((volatile unsigned long *)0x40020814))
#define I2C0_SLAVE_SICR_R       (*((volatile unsigned long *)0x40020818))
#define I2C0_SLAVE_MMIS_R       (*((volatile unsigned long *)0x40020818))
#define I2C0_SLAVE_MICR_R       (*((volatile unsigned long *)0x4002081C))
#define I2C0_SLAVE_MCR_R        (*((volatile unsigned long *)0x40020820))

//*****************************************************************************
//
// General-Purpose Timers (TIMER0)
//
//*****************************************************************************
#define TIMER0_CFG_R            (*((volatile unsigned long *)0x40030000))
#define TIMER0_TAMR_R           (*((volatile unsigned long *)0x40030004))
#define TIMER0_TBMR_R           (*((volatile unsigned long *)0x40030008))
#define TIMER0_CTL_R            (*((volatile unsigned long *)0x4003000C))
#define TIMER0_IMR_R            (*((volatile unsigned long *)0x40030018))
#define TIMER0_RIS_R            (*((volatile unsigned long *)0x4003001C))
#define TIMER0_MIS_R            (*((volatile unsigned long *)0x40030020))
#define TIMER0_ICR_R            (*((volatile unsigned long *)0x40030024))
#define TIMER0_TAILR_R          (*((volatile unsigned long *)0x40030028))
#define TIMER0_TBILR_R          (*((volatile unsigned long *)0x4003002C))
#define TIMER0_TAMATCHR_R       (*((volatile unsigned long *)0x40030030))
#define TIMER0_TBMATCHR_R       (*((volatile unsigned long *)0x40030034))
#define TIMER0_TAPR_R           (*((volatile unsigned long *)0x40030038))
#define TIMER0_TBPR_R           (*((volatile unsigned long *)0x4003003C))
#define TIMER0_TAPMR_R          (*((volatile unsigned long *)0x40030040))
#define TIMER0_TBPMR_R          (*((volatile unsigned long *)0x40030044))
#define TIMER0_TAR_R            (*((volatile unsigned long *)0x40030048))
#define TIMER0_TBR_R            (*((volatile unsigned long *)0x4003004C))

//*****************************************************************************
//
// General-Purpose Timers (TIMER1)
//
//*****************************************************************************
#define TIMER1_CFG_R            (*((volatile unsigned long *)0x40031000))
#define TIMER1_TAMR_R           (*((volatile unsigned long *)0x40031004))
#define TIMER1_TBMR_R           (*((volatile unsigned long *)0x40031008))
#define TIMER1_CTL_R            (*((volatile unsigned long *)0x4003100C))
#define TIMER1_IMR_R            (*((volatile unsigned long *)0x40031018))
#define TIMER1_RIS_R            (*((volatile unsigned long *)0x4003101C))
#define TIMER1_MIS_R            (*((volatile unsigned long *)0x40031020))
#define TIMER1_ICR_R            (*((volatile unsigned long *)0x40031024))
#define TIMER1_TAILR_R          (*((volatile unsigned long *)0x40031028))
#define TIMER1_TBILR_R          (*((volatile unsigned long *)0x4003102C))
#define TIMER1_TAMATCHR_R       (*((volatile unsigned long *)0x40031030))
#define TIMER1_TBMATCHR_R       (*((volatile unsigned long *)0x40031034))
#define TIMER1_TAPR_R           (*((volatile unsigned long *)0x40031038))
#define TIMER1_TBPR_R           (*((volatile unsigned long *)0x4003103C))
#define TIMER1_TAPMR_R          (*((volatile unsigned long *)0x40031040))
#define TIMER1_TBPMR_R          (*((volatile unsigned long *)0x40031044))
#define TIMER1_TAR_R            (*((volatile unsigned long *)0x40031048))
#define TIMER1_TBR_R            (*((volatile unsigned long *)0x4003104C))

//*****************************************************************************
//
// Analog Comparator (COMP)
//
//*****************************************************************************
#define COMP_ACMIS_R            (*((volatile unsigned long *)0x4003C000))
#define COMP_ACRIS_R            (*((volatile unsigned long *)0x4003C004))
#define COMP_ACINTEN_R          (*((volatile unsigned long *)0x4003C008))
#define COMP_ACREFCTL_R         (*((volatile unsigned long *)0x4003C010))
#define COMP_ACSTAT0_R          (*((volatile unsigned long *)0x4003C020))
#define COMP_ACCTL0_R           (*((volatile unsigned long *)0x4003C024))

//*****************************************************************************
//
// Internal Memory (FLASH)
//
//*****************************************************************************
#define FLASH_FMA_R             (*((volatile unsigned long *)0x400FD000))
#define FLASH_FMD_R             (*((volatile unsigned long *)0x400FD004))
#define FLASH_FMC_R             (*((volatile unsigned long *)0x400FD008))
#define FLASH_FCRIS_R           (*((volatile unsigned long *)0x400FD00C))
#define FLASH_FCIM_R            (*((volatile unsigned long *)0x400FD010))
#define FLASH_FCMISC_R          (*((volatile unsigned long *)0x400FD014))
#define FLASH_FMPRE_R           (*((volatile unsigned long *)0x400FE130))
#define FLASH_FMPPE_R           (*((volatile unsigned long *)0x400FE134))
#define FLASH_USECRL_R          (*((volatile unsigned long *)0x400FE140))

//*****************************************************************************
//
// System Control (SYSCTL)
//
//*****************************************************************************
#define SYSCTL_DID0_R           (*((volatile unsigned long *)0x400FE000))
#define SYSCTL_DID1_R           (*((volatile unsigned long *)0x400FE004))
#define SYSCTL_DC0_R            (*((volatile unsigned long *)0x400FE008))
#define SYSCTL_DC1_R            (*((volatile unsigned long *)0x400FE010))
#define SYSCTL_DC2_R            (*((volatile unsigned long *)0x400FE014))
#define SYSCTL_DC3_R            (*((volatile unsigned long *)0x400FE018))
#define SYSCTL_DC4_R            (*((volatile unsigned long *)0x400FE01C))
#define SYSCTL_PBORCTL_R        (*((volatile unsigned long *)0x400FE030))
#define SYSCTL_LDOPCTL_R        (*((volatile unsigned long *)0x400FE034))
#define SYSCTL_SRCR0_R          (*((volatile unsigned long *)0x400FE040))
#define SYSCTL_SRCR1_R          (*((volatile unsigned long *)0x400FE044))
#define SYSCTL_SRCR2_R          (*((volatile unsigned long *)0x400FE048))
#define SYSCTL_RIS_R            (*((volatile unsigned long *)0x400FE050))
#define SYSCTL_IMC_R            (*((volatile unsigned long *)0x400FE054))
#define SYSCTL_MISC_R           (*((volatile unsigned long *)0x400FE058))
#define SYSCTL_RESC_R           (*((volatile unsigned long *)0x400FE05C))
#define SYSCTL_RCC_R            (*((volatile unsigned long *)0x400FE060))
#define SYSCTL_PLLCFG_R         (*((volatile unsigned long *)0x400FE064))
#define SYSCTL_RCGC0_R          (*((volatile unsigned long *)0x400FE100))
#define SYSCTL_RCGC1_R          (*((volatile unsigned long *)0x400FE104))
#define SYSCTL_RCGC2_R          (*((volatile unsigned long *)0x400FE108))
#define SYSCTL_SCGC0_R          (*((volatile unsigned long *)0x400FE110))
#define SYSCTL_SCGC1_R          (*((volatile unsigned long *)0x400FE114))
#define SYSCTL_SCGC2_R          (*((volatile unsigned long *)0x400FE118))
#define SYSCTL_DCGC0_R          (*((volatile unsigned long *)0x400FE120))
#define SYSCTL_DCGC1_R          (*((volatile unsigned long *)0x400FE124))
#define SYSCTL_DCGC2_R          (*((volatile unsigned long *)0x400FE128))
#define SYSCTL_DSLPCLKCFG_R     (*((volatile unsigned long *)0x400FE144))
#define SYSCTL_CLKVCLR_R        (*((volatile unsigned long *)0x400FE150))
#define SYSCTL_LDOARST_R        (*((volatile unsigned long *)0x400FE160))

//*****************************************************************************
//
// Nested Vectored Interrupt Ctrl (NVIC)
//
//*****************************************************************************
#define NVIC_INT_TYPE_R         (*((volatile unsigned long *)0xE000E004))
#define NVIC_ST_CTRL_R          (*((volatile unsigned long *)0xE000E010))
#define NVIC_ST_RELOAD_R        (*((volatile unsigned long *)0xE000E014))
#define NVIC_ST_CURRENT_R       (*((volatile unsigned long *)0xE000E018))
#define NVIC_ST_CAL_R           (*((volatile unsigned long *)0xE000E01C))
#define NVIC_EN0_R              (*((volatile unsigned long *)0xE000E100))
#define NVIC_DIS0_R             (*((volatile unsigned long *)0xE000E180))
#define NVIC_PEND0_R            (*((volatile unsigned long *)0xE000E200))
#define NVIC_UNPEND0_R          (*((volatile unsigned long *)0xE000E280))
#define NVIC_ACTIVE0_R          (*((volatile unsigned long *)0xE000E300))
#define NVIC_PRI0_R             (*((volatile unsigned long *)0xE000E400))
#define NVIC_PRI1_R             (*((volatile unsigned long *)0xE000E404))
#define NVIC_PRI2_R             (*((volatile unsigned long *)0xE000E408))
#define NVIC_PRI3_R             (*((volatile unsigned long *)0xE000E40C))
#define NVIC_PRI4_R             (*((volatile unsigned long *)0xE000E410))
#define NVIC_PRI5_R             (*((volatile unsigned long *)0xE000E414))
#define NVIC_PRI6_R             (*((volatile unsigned long *)0xE000E418))
#define NVIC_PRI7_R             (*((volatile unsigned long *)0xE000E41C))
#define NVIC_CPUID_R            (*((volatile unsigned long *)0xE000ED00))
#define NVIC_INT_CTRL_R         (*((volatile unsigned long *)0xE000ED04))
#define NVIC_VTABLE_R           (*((volatile unsigned long *)0xE000ED08))
#define NVIC_APINT_R            (*((volatile unsigned long *)0xE000ED0C))
#define NVIC_SYS_CTRL_R         (*((volatile unsigned long *)0xE000ED10))
#define NVIC_CFG_CTRL_R         (*((volatile unsigned long *)0xE000ED14))
#define NVIC_SYS_PRI1_R         (*((volatile unsigned long *)0xE000ED18))
#define NVIC_SYS_PRI2_R         (*((volatile unsigned long *)0xE000ED1C))
#define NVIC_SYS_PRI3_R         (*((volatile unsigned long *)0xE000ED20))
#define NVIC_SYS_HND_CTRL_R     (*((volatile unsigned long *)0xE000ED24))
#define NVIC_FAULT_STAT_R       (*((volatile unsigned long *)0xE000ED28))
#define NVIC_HFAULT_STAT_R      (*((volatile unsigned long *)0xE000ED2C))
#define NVIC_DEBUG_STAT_R       (*((volatile unsigned long *)0xE000ED30))
#define NVIC_MM_ADDR_R          (*((volatile unsigned long *)0xE000ED34))
#define NVIC_FAULT_ADDR_R       (*((volatile unsigned long *)0xE000ED38))
#define NVIC_DBG_CTRL_R         (*((volatile unsigned long *)0xE000EDF0))
#define NVIC_DBG_XFER_R         (*((volatile unsigned long *)0xE000EDF4))
#define NVIC_DBG_DATA_R         (*((volatile unsigned long *)0xE000EDF8))
#define NVIC_DBG_INT_R          (*((volatile unsigned long *)0xE000EDFC))
#define NVIC_SW_TRIG_R          (*((volatile unsigned long *)0xE000EF00))

//*****************************************************************************
//
// The following are defines for the bit fields in the WDT_O_LOAD register.
//
//*****************************************************************************
#define WDT_LOAD_M              0xFFFFFFFF  // Watchdog Load Value.
#define WDT_LOAD_S              0

//*****************************************************************************
//
// The following are defines for the bit fields in the WDT_O_VALUE register.
//
//*****************************************************************************
#define WDT_VALUE_M             0xFFFFFFFF  // Watchdog Value.
#define WDT_VALUE_S             0

//*****************************************************************************
//
// The following are defines for the bit fields in the WDT_O_CTL register.
//
//*****************************************************************************
#define WDT_CTL_RESEN           0x00000002  // Watchdog Reset Enable.
#define WDT_CTL_INTEN           0x00000001  // Watchdog Interrupt Enable.

//*****************************************************************************
//
// The following are defines for the bit fields in the WDT_O_ICR register.
//
//*****************************************************************************
#define WDT_ICR_M               0xFFFFFFFF  // Watchdog Interrupt Clear.
#define WDT_ICR_S               0

//*****************************************************************************
//
// The following are defines for the bit fields in the WDT_O_RIS register.
//
//*****************************************************************************
#define WDT_RIS_WDTRIS          0x00000001  // Watchdog Raw Interrupt Status.

//*****************************************************************************
//
// The following are defines for the bit fields in the WDT_O_MIS register.
//
//*****************************************************************************
#define WDT_MIS_WDTMIS          0x00000001  // Watchdog Masked Interrupt
                                            // Status.

//*****************************************************************************
//
// The following are defines for the bit fields in the WDT_O_TEST register.
//
//*****************************************************************************
#define WDT_TEST_STALL          0x00000100  // Watchdog Stall Enable.

//*****************************************************************************
//
// The following are defines for the bit fields in the WDT_O_LOCK register.
//
//*****************************************************************************
#define WDT_LOCK_M              0xFFFFFFFF  // Watchdog Lock.
#define WDT_LOCK_UNLOCKED       0x00000000  // Unlocked
#define WDT_LOCK_LOCKED         0x00000001  // Locked

//*****************************************************************************
//
// The following are defines for the bit fields in the SSI_O_CR0 register.
//
//*****************************************************************************
#define SSI_CR0_SCR_M           0x0000FF00  // SSI Serial Clock Rate.
#define SSI_CR0_SPH             0x00000080  // SSI Serial Clock Phase.
#define SSI_CR0_SPO             0x00000040  // SSI Serial Clock Polarity.
#define SSI_CR0_FRF_M           0x00000030  // SSI Frame Format Select.
#define SSI_CR0_FRF_MOTO        0x00000000  // Freescale SPI Frame Format
#define SSI_CR0_FRF_TI          0x00000010  // Texas Intruments Synchronous
                                            // Serial Frame Format
#define SSI_CR0_FRF_NMW         0x00000020  // MICROWIRE Frame Format
#define SSI_CR0_DSS_M           0x0000000F  // SSI Data Size Select.
#define SSI_CR0_DSS_4           0x00000003  // 4-bit data
#define SSI_CR0_DSS_5           0x00000004  // 5-bit data
#define SSI_CR0_DSS_6           0x00000005  // 6-bit data
#define SSI_CR0_DSS_7           0x00000006  // 7-bit data
#define SSI_CR0_DSS_8           0x00000007  // 8-bit data
#define SSI_CR0_DSS_9           0x00000008  // 9-bit data
#define SSI_CR0_DSS_10          0x00000009  // 10-bit data
#define SSI_CR0_DSS_11          0x0000000A  // 11-bit data
#define SSI_CR0_DSS_12          0x0000000B  // 12-bit data
#define SSI_CR0_DSS_13          0x0000000C  // 13-bit data
#define SSI_CR0_DSS_14          0x0000000D  // 14-bit data
#define SSI_CR0_DSS_15          0x0000000E  // 15-bit data
#define SSI_CR0_DSS_16          0x0000000F  // 16-bit data
#define SSI_CR0_SCR_S           8

//*****************************************************************************
//
// The following are defines for the bit fields in the SSI_O_CR1 register.
//
//*****************************************************************************
#define SSI_CR1_SOD             0x00000008  // SSI Slave Mode Output Disable.
#define SSI_CR1_MS              0x00000004  // SSI Master/Slave Select.
#define SSI_CR1_SSE             0x00000002  // SSI Synchronous Serial Port
                                            // Enable.
#define SSI_CR1_LBM             0x00000001  // SSI Loopback Mode.

//*****************************************************************************
//
// The following are defines for the bit fields in the SSI_O_DR register.
//
//*****************************************************************************
#define SSI_DR_DATA_M           0x0000FFFF  // SSI Receive/Transmit Data.
#define SSI_DR_DATA_S           0

//*****************************************************************************
//
// The following are defines for the bit fields in the SSI_O_SR register.
//
//*****************************************************************************
#define SSI_SR_BSY              0x00000010  // SSI Busy Bit.
#define SSI_SR_RFF              0x00000008  // SSI Receive FIFO Full.
#define SSI_SR_RNE              0x00000004  // SSI Receive FIFO Not Empty.
#define SSI_SR_TNF              0x00000002  // SSI Transmit FIFO Not Full.
#define SSI_SR_TFE              0x00000001  // SSI Transmit FIFO Empty.

//*****************************************************************************
//
// The following are defines for the bit fields in the SSI_O_CPSR register.
//
//*****************************************************************************
#define SSI_CPSR_CPSDVSR_M      0x000000FF  // SSI Clock Prescale Divisor.
#define SSI_CPSR_CPSDVSR_S      0

//*****************************************************************************
//
// The following are defines for the bit fields in the SSI_O_IM register.
//
//*****************************************************************************
#define SSI_IM_TXIM             0x00000008  // SSI Transmit FIFO Interrupt
                                            // Mask.
#define SSI_IM_RXIM             0x00000004  // SSI Receive FIFO Interrupt Mask.
#define SSI_IM_RTIM             0x00000002  // SSI Receive Time-Out Interrupt
                                            // Mask.
#define SSI_IM_RORIM            0x00000001  // SSI Receive Overrun Interrupt
                                            // Mask.

//*****************************************************************************
//
// The following are defines for the bit fields in the SSI_O_RIS register.
//
//*****************************************************************************
#define SSI_RIS_TXRIS           0x00000008  // SSI Transmit FIFO Raw Interrupt
                                            // Status.
#define SSI_RIS_RXRIS           0x00000004  // SSI Receive FIFO Raw Interrupt
                                            // Status.
#define SSI_RIS_RTRIS           0x00000002  // SSI Receive Time-Out Raw
                                            // Interrupt Status.
#define SSI_RIS_RORRIS          0x00000001  // SSI Receive Overrun Raw
                                            // Interrupt Status.

//*****************************************************************************
//
// The following are defines for the bit fields in the SSI_O_MIS register.
//
//*****************************************************************************
#define SSI_MIS_TXMIS           0x00000008  // SSI Transmit FIFO Masked
                                            // Interrupt Status.
#define SSI_MIS_RXMIS           0x00000004  // SSI Receive FIFO Masked
                                            // Interrupt Status.
#define SSI_MIS_RTMIS           0x00000002  // SSI Receive Time-Out Masked
                                            // Interrupt Status.
#define SSI_MIS_RORMIS          0x00000001  // SSI Receive Overrun Masked
                                            // Interrupt Status.

//*****************************************************************************
//
// The following are defines for the bit fields in the SSI_O_ICR register.
//
//*****************************************************************************
#define SSI_ICR_RTIC            0x00000002  // SSI Receive Time-Out Interrupt
                                            // Clear.
#define SSI_ICR_RORIC           0x00000001  // SSI Receive Overrun Interrupt
                                            // Clear.

//*****************************************************************************
//
// The following are defines for the bit fields in the UART_O_DR register.
//
//*****************************************************************************
#define UART_DR_OE              0x00000800  // UART Overrun Error.
#define UART_DR_BE              0x00000400  // UART Break Error.
#define UART_DR_PE              0x00000200  // UART Parity Error.
#define UART_DR_FE              0x00000100  // UART Framing Error.
#define UART_DR_DATA_M          0x000000FF  // Data Transmitted or Received.
#define UART_DR_DATA_S          0

//*****************************************************************************
//
// The following are defines for the bit fields in the UART_O_RSR register.
//
//*****************************************************************************
#define UART_RSR_OE             0x00000008  // UART Overrun Error.
#define UART_RSR_BE             0x00000004  // UART Break Error.
#define UART_RSR_PE             0x00000002  // UART Parity Error.
#define UART_RSR_FE             0x00000001  // UART Framing Error.

//*****************************************************************************
//
// The following are defines for the bit fields in the UART_O_ECR register.
//
//*****************************************************************************
#define UART_ECR_DATA_M         0x000000FF  // Error Clear.
#define UART_ECR_DATA_S         0

//*****************************************************************************
//
// The following are defines for the bit fields in the UART_O_FR register.
//
//*****************************************************************************
#define UART_FR_TXFE            0x00000080  // UART Transmit FIFO Empty.
#define UART_FR_RXFF            0x00000040  // UART Receive FIFO Full.
#define UART_FR_TXFF            0x00000020  // UART Transmit FIFO Full.
#define UART_FR_RXFE            0x00000010  // UART Receive FIFO Empty.
#define UART_FR_BUSY            0x00000008  // UART Busy.

//*****************************************************************************
//
// The following are defines for the bit fields in the UART_O_IBRD register.
//
//*****************************************************************************
#define UART_IBRD_DIVINT_M      0x0000FFFF  // Integer Baud-Rate Divisor.
#define UART_IBRD_DIVINT_S      0

//*****************************************************************************
//
// The following are defines for the bit fields in the UART_O_FBRD register.
//
//*****************************************************************************
#define UART_FBRD_DIVFRAC_M     0x0000003F  // Fractional Baud-Rate Divisor.
#define UART_FBRD_DIVFRAC_S     0

//*****************************************************************************
//
// The following are defines for the bit fields in the UART_O_LCRH register.
//
//*****************************************************************************
#define UART_LCRH_SPS           0x00000080  // UART Stick Parity Select.
#define UART_LCRH_WLEN_M        0x00000060  // UART Word Length.
#define UART_LCRH_WLEN_5        0x00000000  // 5 bits (default)
#define UART_LCRH_WLEN_6        0x00000020  // 6 bits
#define UART_LCRH_WLEN_7        0x00000040  // 7 bits
#define UART_LCRH_WLEN_8        0x00000060  // 8 bits
#define UART_LCRH_FEN           0x00000010  // UART Enable FIFOs.
#define UART_LCRH_STP2          0x00000008  // UART Two Stop Bits Select.
#define UART_LCRH_EPS           0x00000004  // UART Even Parity Select.
#define UART_LCRH_PEN           0x00000002  // UART Parity Enable.
#define UART_LCRH_BRK           0x00000001  // UART Send Break.

//*****************************************************************************
//
// The following are defines for the bit fields in the UART_O_CTL register.
//
//*****************************************************************************
#define UART_CTL_RXE            0x00000200  // UART Receive Enable.
#define UART_CTL_TXE            0x00000100  // UART Transmit Enable.
#define UART_CTL_LBE            0x00000080  // UART Loop Back Enable.
#define UART_CTL_UARTEN         0x00000001  // UART Enable.

//*****************************************************************************
//
// The following are defines for the bit fields in the UART_O_IFLS register.
//
//*****************************************************************************
#define UART_IFLS_RX_M          0x00000038  // UART Receive Interrupt FIFO
                                            // Level Select.
#define UART_IFLS_RX1_8         0x00000000  // RX FIFO <= 1/8 full
#define UART_IFLS_RX2_8         0x00000008  // RX FIFO <= 1/4 full
#define UART_IFLS_RX4_8         0x00000010  // RX FIFO <= 1/2 full (default)
#define UART_IFLS_RX6_8         0x00000018  // RX FIFO <= 3/4 full
#define UART_IFLS_RX7_8         0x00000020  // RX FIFO <= 7/8 full
#define UART_IFLS_TX_M          0x00000007  // UART Transmit Interrupt FIFO
                                            // Level Select.
#define UART_IFLS_TX1_8         0x00000000  // TX FIFO >= 1/8 full
#define UART_IFLS_TX2_8         0x00000001  // TX FIFO >= 1/4 full
#define UART_IFLS_TX4_8         0x00000002  // TX FIFO >= 1/2 full (default)
#define UART_IFLS_TX6_8         0x00000003  // TX FIFO >= 3/4 full
#define UART_IFLS_TX7_8         0x00000004  // TX FIFO >= 7/8 full

//*****************************************************************************
//
// The following are defines for the bit fields in the UART_O_IM register.
//
//*****************************************************************************
#define UART_IM_OEIM            0x00000400  // UART Overrun Error Interrupt
                                            // Mask.
#define UART_IM_BEIM            0x00000200  // UART Break Error Interrupt Mask.
#define UART_IM_PEIM            0x00000100  // UART Parity Error Interrupt
                                            // Mask.
#define UART_IM_FEIM            0x00000080  // UART Framing Error Interrupt
                                            // Mask.
#define UART_IM_RTIM            0x00000040  // UART Receive Time-Out Interrupt
                                            // Mask.
#define UART_IM_TXIM            0x00000020  // UART Transmit Interrupt Mask.
#define UART_IM_RXIM            0x00000010  // UART Receive Interrupt Mask.

//*****************************************************************************
//
// The following are defines for the bit fields in the UART_O_RIS register.
//
//*****************************************************************************
#define UART_RIS_OERIS          0x00000400  // UART Overrun Error Raw Interrupt
                                            // Status.
#define UART_RIS_BERIS          0x00000200  // UART Break Error Raw Interrupt
                                            // Status.
#define UART_RIS_PERIS          0x00000100  // UART Parity Error Raw Interrupt
                                            // Status.
#define UART_RIS_FERIS          0x00000080  // UART Framing Error Raw Interrupt
                                            // Status.
#define UART_RIS_RTRIS          0x00000040  // UART Receive Time-Out Raw
                                            // Interrupt Status.
#define UART_RIS_TXRIS          0x00000020  // UART Transmit Raw Interrupt
                                            // Status.
#define UART_RIS_RXRIS          0x00000010  // UART Receive Raw Interrupt
                                            // Status.

//*****************************************************************************
//
// The following are defines for the bit fields in the UART_O_MIS register.
//
//*****************************************************************************
#define UART_MIS_OEMIS          0x00000400  // UART Overrun Error Masked
                                            // Interrupt Status.
#define UART_MIS_BEMIS          0x00000200  // UART Break Error Masked
                                            // Interrupt Status.
#define UART_MIS_PEMIS          0x00000100  // UART Parity Error Masked
                                            // Interrupt Status.
#define UART_MIS_FEMIS          0x00000080  // UART Framing Error Masked
                                            // Interrupt Status.
#define UART_MIS_RTMIS          0x00000040  // UART Receive Time-Out Masked
                                            // Interrupt Status.
#define UART_MIS_TXMIS          0x00000020  // UART Transmit Masked Interrupt
                                            // Status.
#define UART_MIS_RXMIS          0x00000010  // UART Receive Masked Interrupt
                                            // Status.

//*****************************************************************************
//
// The following are defines for the bit fields in the UART_O_ICR register.
//
//*****************************************************************************
#define UART_ICR_OEIC           0x00000400  // Overrun Error Interrupt Clear.
#define UART_ICR_BEIC           0x00000200  // Break Error Interrupt Clear.
#define UART_ICR_PEIC           0x00000100  // Parity Error Interrupt Clear.
#define UART_ICR_FEIC           0x00000080  // Framing Error Interrupt Clear.
#define UART_ICR_RTIC           0x00000040  // Receive Time-Out Interrupt
                                            // Clear.
#define UART_ICR_TXIC           0x00000020  // Transmit Interrupt Clear.
#define UART_ICR_RXIC           0x00000010  // Receive Interrupt Clear.

//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_MSA register.
//
//*****************************************************************************
#define I2C_MSA_SA_M            0x000000FE  // I2C Slave Address.
#define I2C_MSA_RS              0x00000001  // Receive not send.
#define I2C_MSA_SA_S            1

//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_SOAR register.
//
//*****************************************************************************
#define I2C_SOAR_OAR_M          0x0000007F  // I2C Slave Own Address.
#define I2C_SOAR_OAR_S          0

//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_SCSR register.
//
//*****************************************************************************
#define I2C_SCSR_FBR            0x00000004  // First Byte Received.
#define I2C_SCSR_TREQ           0x00000002  // Transmit Request.
#define I2C_SCSR_DA             0x00000001  // Device Active.
#define I2C_SCSR_RREQ           0x00000001  // Receive Request.

//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_MCS register.
//
//*****************************************************************************
#define I2C_MCS_BUSBSY          0x00000040  // Bus Busy.
#define I2C_MCS_IDLE            0x00000020  // I2C Idle.
#define I2C_MCS_ARBLST          0x00000010  // Arbitration Lost.
#define I2C_MCS_ACK             0x00000008  // Data Acknowledge Enable.
#define I2C_MCS_DATACK          0x00000008  // Acknowledge Data.
#define I2C_MCS_ADRACK          0x00000004  // Acknowledge Address.
#define I2C_MCS_STOP            0x00000004  // Generate STOP.
#define I2C_MCS_START           0x00000002  // Generate START.
#define I2C_MCS_ERROR           0x00000002  // Error.
#define I2C_MCS_RUN             0x00000001  // I2C Master Enable.
#define I2C_MCS_BUSY            0x00000001  // I2C Busy.

//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_SDR register.
//
//*****************************************************************************
#define I2C_SDR_DATA_M          0x000000FF  // Data for Transfer.
#define I2C_SDR_DATA_S          0

//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_MDR register.
//
//*****************************************************************************
#define I2C_MDR_DATA_M          0x000000FF  // Data Transferred.
#define I2C_MDR_DATA_S          0

//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_MTPR register.
//
//*****************************************************************************
#define I2C_MTPR_TPR_M          0x000000FF  // SCL Clock Period.
#define I2C_MTPR_TPR_S          0

//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_SIMR register.
//
//*****************************************************************************
#define I2C_SIMR_IM             0x00000001  // Interrupt Mask.

//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_SRIS register.
//
//*****************************************************************************
#define I2C_SRIS_RIS            0x00000001  // Raw Interrupt Status.

//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_MIMR register.
//
//*****************************************************************************
#define I2C_MIMR_IM             0x00000001  // Interrupt Mask.

//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_MRIS register.
//
//*****************************************************************************
#define I2C_MRIS_RIS            0x00000001  // Raw Interrupt Status.

//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_SMIS register.
//
//*****************************************************************************
#define I2C_SMIS_MIS            0x00000001  // Masked Interrupt Status.

//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_SICR register.
//
//*****************************************************************************
#define I2C_SICR_IC             0x00000001  // Clear Interrupt.

//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_MMIS register.
//
//*****************************************************************************
#define I2C_MMIS_MIS            0x00000001  // Masked Interrupt Status.

//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_MICR register.
//
//*****************************************************************************
#define I2C_MICR_IC             0x00000001  // Interrupt Clear.

//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_MCR register.
//
//*****************************************************************************
#define I2C_MCR_SFE             0x00000020  // I2C Slave Function Enable.
#define I2C_MCR_MFE             0x00000010  // I2C Master Function Enable.
#define I2C_MCR_LPBK            0x00000001  // I2C Loopback.

//*****************************************************************************
//
// The following are defines for the bit fields in the TIMER_O_CFG register.
//
//*****************************************************************************
#define TIMER_CFG_M             0x00000007  // GPTM Configuration.
#define TIMER_CFG_32_BIT_TIMER  0x00000000  // 32-bit timer configuration.
#define TIMER_CFG_32_BIT_RTC    0x00000001  // 32-bit real-time clock (RTC)
                                            // counter configuration.
#define TIMER_CFG_16_BIT        0x00000004  // 16-bit timer configuration,
                                            // function is controlled by bits
                                            // 1:0 of GPTMTAMR and GPTMTBMR.

//*****************************************************************************
//
// The following are defines for the bit fields in the TIMER_O_TAMR register.
//
//*****************************************************************************
#define TIMER_TAMR_TAAMS        0x00000008  // GPTM TimerA Alternate Mode
                                            // Select.
#define TIMER_TAMR_TACMR        0x00000004  // GPTM TimerA Capture Mode.
#define TIMER_TAMR_TAMR_M       0x00000003  // GPTM TimerA Mode.
#define TIMER_TAMR_TAMR_1_SHOT  0x00000001  // One-Shot Timer mode.
#define TIMER_TAMR_TAMR_PERIOD  0x00000002  // Periodic Timer mode.
#define TIMER_TAMR_TAMR_CAP     0x00000003  // Capture mode.

//*****************************************************************************
//
// The following are defines for the bit fields in the TIMER_O_TBMR register.
//
//*****************************************************************************
#define TIMER_TBMR_TBAMS        0x00000008  // GPTM TimerB Alternate Mode
                                            // Select.
#define TIMER_TBMR_TBCMR        0x00000004  // GPTM TimerB Capture Mode.
#define TIMER_TBMR_TBMR_M       0x00000003  // GPTM TimerB Mode.
#define TIMER_TBMR_TBMR_1_SHOT  0x00000001  // One-Shot Timer mode.
#define TIMER_TBMR_TBMR_PERIOD  0x00000002  // Periodic Timer mode.
#define TIMER_TBMR_TBMR_CAP     0x00000003  // Capture mode.

//*****************************************************************************
//
// The following are defines for the bit fields in the TIMER_O_CTL register.
//
//*****************************************************************************
#define TIMER_CTL_TBPWML        0x00004000  // GPTM TimerB PWM Output Level.
#define TIMER_CTL_TBOTE         0x00002000  // GPTM TimerB Output Trigger
                                            // Enable.
#define TIMER_CTL_TBEVENT_M     0x00000C00  // GPTM TimerB Event Mode.
#define TIMER_CTL_TBEVENT_POS   0x00000000  // Positive edge.
#define TIMER_CTL_TBEVENT_NEG   0x00000400  // Negative edge.
#define TIMER_CTL_TBEVENT_BOTH  0x00000C00  // Both edges.
#define TIMER_CTL_TBSTALL       0x00000200  // GPTM TimerB Stall Enable.
#define TIMER_CTL_TBEN          0x00000100  // GPTM TimerB Enable.
#define TIMER_CTL_TAPWML        0x00000040  // GPTM TimerA PWM Output Level.
#define TIMER_CTL_TAOTE         0x00000020  // GPTM TimerA Output Trigger
                                            // Enable.
#define TIMER_CTL_RTCEN         0x00000010  // GPTM RTC Enable.
#define TIMER_CTL_TAEVENT_M     0x0000000C  // GPTM TimerA Event Mode.
#define TIMER_CTL_TAEVENT_POS   0x00000000  // Positive edge.
#define TIMER_CTL_TAEVENT_NEG   0x00000004  // Negative edge.
#define TIMER_CTL_TAEVENT_BOTH  0x0000000C  // Both edges.
#define TIMER_CTL_TASTALL       0x00000002  // GPTM TimerA Stall Enable.
#define TIMER_CTL_TAEN          0x00000001  // GPTM TimerA Enable.

//*****************************************************************************
//
// The following are defines for the bit fields in the TIMER_O_IMR register.
//
//*****************************************************************************
#define TIMER_IMR_CBEIM         0x00000400  // GPTM CaptureB Event Interrupt
                                            // Mask.
#define TIMER_IMR_CBMIM         0x00000200  // GPTM CaptureB Match Interrupt
                                            // Mask.
#define TIMER_IMR_TBTOIM        0x00000100  // GPTM TimerB Time-Out Interrupt
                                            // Mask.
#define TIMER_IMR_RTCIM         0x00000008  // GPTM RTC Interrupt Mask.
#define TIMER_IMR_CAEIM         0x00000004  // GPTM CaptureA Event Interrupt
                                            // Mask.
#define TIMER_IMR_CAMIM         0x00000002  // GPTM CaptureA Match Interrupt
                                            // Mask.
#define TIMER_IMR_TATOIM        0x00000001  // GPTM TimerA Time-Out Interrupt
                                            // Mask.

//*****************************************************************************
//
// The following are defines for the bit fields in the TIMER_O_RIS register.
//
//*****************************************************************************
#define TIMER_RIS_CBERIS        0x00000400  // GPTM CaptureB Event Raw
                                            // Interrupt.
#define TIMER_RIS_CBMRIS        0x00000200  // GPTM CaptureB Match Raw
                                            // Interrupt.
#define TIMER_RIS_TBTORIS       0x00000100  // GPTM TimerB Time-Out Raw
                                            // Interrupt.
#define TIMER_RIS_RTCRIS        0x00000008  // GPTM RTC Raw Interrupt.
#define TIMER_RIS_CAERIS        0x00000004  // GPTM CaptureA Event Raw
                                            // Interrupt.
#define TIMER_RIS_CAMRIS        0x00000002  // GPTM CaptureA Match Raw
                                            // Interrupt.
#define TIMER_RIS_TATORIS       0x00000001  // GPTM TimerA Time-Out Raw
                                            // Interrupt.

//*****************************************************************************
//
// The following are defines for the bit fields in the TIMER_O_MIS register.
//
//*****************************************************************************
#define TIMER_MIS_CBEMIS        0x00000400  // GPTM CaptureB Event Masked
                                            // Interrupt.
#define TIMER_MIS_CBMMIS        0x00000200  // GPTM CaptureB Match Masked
                                            // Interrupt.
#define TIMER_MIS_TBTOMIS       0x00000100  // GPTM TimerB Time-Out Masked
                                            // Interrupt.
#define TIMER_MIS_RTCMIS        0x00000008  // GPTM RTC Masked Interrupt.
#define TIMER_MIS_CAEMIS        0x00000004  // GPTM CaptureA Event Masked
                                            // Interrupt.
#define TIMER_MIS_CAMMIS        0x00000002  // GPTM CaptureA Match Masked
                                            // Interrupt.
#define TIMER_MIS_TATOMIS       0x00000001  // GPTM TimerA Time-Out Masked
                                            // Interrupt.

//*****************************************************************************
//
// The following are defines for the bit fields in the TIMER_O_ICR register.
//
//*****************************************************************************
#define TIMER_ICR_CBECINT       0x00000400  // GPTM CaptureB Event Interrupt
                                            // Clear.
#define TIMER_ICR_CBMCINT       0x00000200  // GPTM CaptureB Match Interrupt
                                            // Clear.
#define TIMER_ICR_TBTOCINT      0x00000100  // GPTM TimerB Time-Out Interrupt
                                            // Clear.
#define TIMER_ICR_RTCCINT       0x00000008  // GPTM RTC Interrupt Clear.
#define TIMER_ICR_CAECINT       0x00000004  // GPTM CaptureA Event Interrupt
                                            // Clear.
#define TIMER_ICR_CAMCINT       0x00000002  // GPTM CaptureA Match Raw
                                            // Interrupt.
#define TIMER_ICR_TATOCINT      0x00000001  // GPTM TimerA Time-Out Raw
                                            // Interrupt.

//*****************************************************************************
//
// The following are defines for the bit fields in the TIMER_O_TAILR register.
//
//*****************************************************************************
#define TIMER_TAILR_TAILRH_M    0xFFFF0000  // GPTM TimerA Interval Load
                                            // Register High.
#define TIMER_TAILR_TAILRL_M    0x0000FFFF  // GPTM TimerA Interval Load
                                            // Register Low.
#define TIMER_TAILR_TAILRH_S    16
#define TIMER_TAILR_TAILRL_S    0

//*****************************************************************************
//
// The following are defines for the bit fields in the TIMER_O_TBILR register.
//
//*****************************************************************************
#define TIMER_TBILR_TBILRL_M    0x0000FFFF  // GPTM TimerB Interval Load
                                            // Register.
#define TIMER_TBILR_TBILRL_S    0

//*****************************************************************************
//
// The following are defines for the bit fields in the TIMER_O_TAMATCHR
// register.
//
//*****************************************************************************
#define TIMER_TAMATCHR_TAMRH_M  0xFFFF0000  // GPTM TimerA Match Register High.
#define TIMER_TAMATCHR_TAMRL_M  0x0000FFFF  // GPTM TimerA Match Register Low.
#define TIMER_TAMATCHR_TAMRH_S  16
#define TIMER_TAMATCHR_TAMRL_S  0

//*****************************************************************************
//
// The following are defines for the bit fields in the TIMER_O_TBMATCHR
// register.
//
//*****************************************************************************
#define TIMER_TBMATCHR_TBMRL_M  0x0000FFFF  // GPTM TimerB Match Register Low.
#define TIMER_TBMATCHR_TBMRL_S  0

//*****************************************************************************
//
// The following are defines for the bit fields in the TIMER_O_TAPR register.
//
//*****************************************************************************
#define TIMER_TAPR_TAPSR_M      0x000000FF  // GPTM TimerA Prescale.
#define TIMER_TAPR_TAPSR_S      0

//*****************************************************************************
//
// The following are defines for the bit fields in the TIMER_O_TBPR register.
//
//*****************************************************************************
#define TIMER_TBPR_TBPSR_M      0x000000FF  // GPTM TimerB Prescale.
#define TIMER_TBPR_TBPSR_S      0

//*****************************************************************************
//
// The following are defines for the bit fields in the TIMER_O_TAPMR register.
//
//*****************************************************************************
#define TIMER_TAPMR_TAPSMR_M    0x000000FF  // GPTM TimerA Prescale Match.
#define TIMER_TAPMR_TAPSMR_S    0

//*****************************************************************************
//
// The following are defines for the bit fields in the TIMER_O_TBPMR register.
//
//*****************************************************************************
#define TIMER_TBPMR_TBPSMR_M    0x000000FF  // GPTM TimerB Prescale Match.
#define TIMER_TBPMR_TBPSMR_S    0

//*****************************************************************************
//
// The following are defines for the bit fields in the TIMER_O_TAR register.
//
//*****************************************************************************
#define TIMER_TAR_TARH_M        0xFFFF0000  // GPTM TimerA Register High.
#define TIMER_TAR_TARL_M        0x0000FFFF  // GPTM TimerA Register Low.
#define TIMER_TAR_TARH_S        16
#define TIMER_TAR_TARL_S        0

//*****************************************************************************
//
// The following are defines for the bit fields in the TIMER_O_TBR register.
//
//*****************************************************************************
#define TIMER_TBR_TBRL_M        0x0000FFFF  // GPTM TimerB.
#define TIMER_TBR_TBRL_S        0

//*****************************************************************************
//
// The following are defines for the bit fields in the COMP_O_ACMIS register.
//
//*****************************************************************************
#define COMP_ACMIS_IN0          0x00000001  // Comparator 0 Masked Interrupt
                                            // Status.

//*****************************************************************************
//
// The following are defines for the bit fields in the COMP_O_ACRIS register.
//
//*****************************************************************************
#define COMP_ACRIS_IN0          0x00000001  // Comparator 0 Interrupt Status.

//*****************************************************************************
//
// The following are defines for the bit fields in the COMP_O_ACINTEN register.
//
//*****************************************************************************
#define COMP_ACINTEN_IN0        0x00000001  // Comparator 0 Interrupt Enable.

//*****************************************************************************
//
// The following are defines for the bit fields in the COMP_O_ACREFCTL
// register.
//
//*****************************************************************************
#define COMP_ACREFCTL_EN        0x00000200  // Resistor Ladder Enable.
#define COMP_ACREFCTL_RNG       0x00000100  // Resistor Ladder Range.
#define COMP_ACREFCTL_VREF_M    0x0000000F  // Resistor Ladder Voltage Ref.
#define COMP_ACREFCTL_VREF_S    0

//*****************************************************************************
//
// The following are defines for the bit fields in the COMP_O_ACSTAT0 register.
//
//*****************************************************************************
#define COMP_ACSTAT0_OVAL       0x00000002  // Comparator Output Value.

//*****************************************************************************
//
// The following are defines for the bit fields in the COMP_O_ACCTL0 register.
//
//*****************************************************************************
#define COMP_ACCTL0_ASRCP_M     0x00000600  // Analog Source Positive.
#define COMP_ACCTL0_ASRCP_PIN   0x00000000  // Pin value
#define COMP_ACCTL0_ASRCP_PIN0  0x00000200  // Pin value of C0+
#define COMP_ACCTL0_ASRCP_REF   0x00000400  // Internal voltage reference
#define COMP_ACCTL0_ISLVAL      0x00000010  // Interrupt Sense Level Value.
#define COMP_ACCTL0_ISEN_M      0x0000000C  // Interrupt Sense.
#define COMP_ACCTL0_ISEN_LEVEL  0x00000000  // Level sense, see ISLVAL
#define COMP_ACCTL0_ISEN_FALL   0x00000004  // Falling edge
#define COMP_ACCTL0_ISEN_RISE   0x00000008  // Rising edge
#define COMP_ACCTL0_ISEN_BOTH   0x0000000C  // Either edge
#define COMP_ACCTL0_CINV        0x00000002  // Comparator Output Invert.

//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_FMA register.
//
//*****************************************************************************
#define FLASH_FMA_OFFSET_M      0x00001FFF  // Address Offset.
#define FLASH_FMA_OFFSET_S      0

//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_FMD register.
//
//*****************************************************************************
#define FLASH_FMD_DATA_M        0xFFFFFFFF  // Data Value.
#define FLASH_FMD_DATA_S        0

//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_FMC register.
//
//*****************************************************************************
#define FLASH_FMC_WRKEY_M       0xFFFF0000  // Flash Write Key.
#define FLASH_FMC_WRKEY         0xA4420000  // FLASH write key
#define FLASH_FMC_COMT          0x00000008  // Commit Register Value.
#define FLASH_FMC_MERASE        0x00000004  // Mass Erase Flash Memory.
#define FLASH_FMC_ERASE         0x00000002  // Erase a Page of Flash Memory.
#define FLASH_FMC_WRITE         0x00000001  // Write a Word into Flash Memory.
#define FLASH_FMC_WRKEY_S       16

//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_FCRIS register.
//
//*****************************************************************************
#define FLASH_FCRIS_PRIS        0x00000002  // Programming Raw Interrupt
                                            // Status.
#define FLASH_FCRIS_ARIS        0x00000001  // Access Raw Interrupt Status.

//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_FCIM register.
//
//*****************************************************************************
#define FLASH_FCIM_PMASK        0x00000002  // Programming Interrupt Mask.
#define FLASH_FCIM_AMASK        0x00000001  // Access Interrupt Mask.

//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_FCMISC register.
//
//*****************************************************************************
#define FLASH_FCMISC_PMISC      0x00000002  // Programming Masked Interrupt
                                            // Status and Clear.
#define FLASH_FCMISC_AMISC      0x00000001  // Access Masked Interrupt Status
                                            // and Clear.

//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_USECRL register.
//
//*****************************************************************************
#define FLASH_USECRL_M          0x000000FF  // Microsecond Reload Value.
#define FLASH_USECRL_S          0

//*****************************************************************************
//
// The following are defines for the erase size of the FLASH block that is
// erased by an erase operation, and the protect size is the size of the FLASH
// block that is protected by each protection register.
//
//*****************************************************************************
#define FLASH_PROTECT_SIZE      0x00000800
#define FLASH_ERASE_SIZE        0x00000400

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_DID0 register.
//
//*****************************************************************************
#define SYSCTL_DID0_VER_M       0x70000000  // DID0 Version.
#define SYSCTL_DID0_VER_0       0x00000000  // Initial DID0 register format
                                            // definition for Stellaris(r)
                                            // Sandstorm-class devices.
#define SYSCTL_DID0_MAJ_M       0x0000FF00  // Major Revision.
#define SYSCTL_DID0_MAJ_REVA    0x00000000  // Revision A (initial device)
#define SYSCTL_DID0_MAJ_REVB    0x00000100  // Revision B (first base layer
                                            // revision)
#define SYSCTL_DID0_MAJ_REVC    0x00000200  // Revision C (second base layer
                                            // revision)
#define SYSCTL_DID0_MIN_M       0x000000FF  // Minor Revision.
#define SYSCTL_DID0_MIN_0       0x00000000  // Initial device, or a major
                                            // revision update.
#define SYSCTL_DID0_MIN_1       0x00000001  // First metal layer change.
#define SYSCTL_DID0_MIN_2       0x00000002  // Second metal layer change.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_DID1 register.
//
//*****************************************************************************
#define SYSCTL_DID1_VER_M       0xF0000000  // DID1 Version.
#define SYSCTL_DID1_VER_0       0x00000000  // Initial DID1 register format
                                            // definition, indicating a
                                            // Stellaris LM3Snnn device.
#define SYSCTL_DID1_FAM_M       0x0F000000  // Family.
#define SYSCTL_DID1_FAM_STELLARIS \
                                0x00000000  // Stellaris family of
                                            // microcontollers, that is, all
                                            // devices with external part
                                            // numbers starting with LM3S.
#define SYSCTL_DID1_PRTNO_M     0x00FF0000  // Part Number.
#define SYSCTL_DID1_PRTNO_102   0x00020000  // LM3S102
#define SYSCTL_DID1_TEMP_M      0x000000E0  // Temperature Range.
#define SYSCTL_DID1_TEMP_I      0x00000020  // Industrial temperature range
                                            // (-40C to 85C)
#define SYSCTL_DID1_PKG_M       0x00000018  // Package Type.
#define SYSCTL_DID1_PKG_28SOIC  0x00000000  // 28-pin SOIC package
#define SYSCTL_DID1_ROHS        0x00000004  // RoHS-Compliance.
#define SYSCTL_DID1_QUAL_M      0x00000003  // Qualification Status.
#define SYSCTL_DID1_QUAL_ES     0x00000000  // Engineering Sample (unqualified)
#define SYSCTL_DID1_QUAL_PP     0x00000001  // Pilot Production (unqualified)
#define SYSCTL_DID1_QUAL_FQ     0x00000002  // Fully Qualified

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_DC0 register.
//
//*****************************************************************************
#define SYSCTL_DC0_SRAMSZ_M     0xFFFF0000  // SRAM Size.
#define SYSCTL_DC0_SRAMSZ_2KB   0x00070000  // 2 KB of SRAM
#define SYSCTL_DC0_FLASHSZ_M    0x0000FFFF  // Flash Size.
#define SYSCTL_DC0_FLASHSZ_8KB  0x00000003  // 8 KB of Flash
#define SYSCTL_DC0_SRAMSZ_S     16          // SRAM size shift
#define SYSCTL_DC0_FLASHSZ_S    0           // Flash size shift

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_DC1 register.
//
//*****************************************************************************
#define SYSCTL_DC1_MINSYSDIV_M  0x0000F000  // System Clock Divider.
#define SYSCTL_DC1_MINSYSDIV_20 0x00009000  // Specifies a 20-MHz clock with a
                                            // PLL divider of 10.
#define SYSCTL_DC1_PLL          0x00000010  // PLL Present.
#define SYSCTL_DC1_WDT          0x00000008  // Watchdog Timer Present.
#define SYSCTL_DC1_SWO          0x00000004  // SWO Trace Port Present.
#define SYSCTL_DC1_SWD          0x00000002  // SWD Present.
#define SYSCTL_DC1_JTAG         0x00000001  // JTAG Present.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_DC2 register.
//
//*****************************************************************************
#define SYSCTL_DC2_COMP0        0x01000000  // Analog Comparator 0 Present.
#define SYSCTL_DC2_TIMER1       0x00020000  // Timer 1 Present.
#define SYSCTL_DC2_TIMER0       0x00010000  // Timer 0 Present.
#define SYSCTL_DC2_I2C0         0x00001000  // I2C Module 0 Present.
#define SYSCTL_DC2_SSI0         0x00000010  // SSI0 Present.
#define SYSCTL_DC2_UART0        0x00000001  // UART0 Present.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_DC3 register.
//
//*****************************************************************************
#define SYSCTL_DC3_32KHZ        0x80000000  // 32KHz Pin Present.
#define SYSCTL_DC3_CCP1         0x02000000  // CCP1 Pin Present.
#define SYSCTL_DC3_CCP0         0x01000000  // CCP0 Pin Present.
#define SYSCTL_DC3_C0O          0x00000100  // C0o Pin Present.
#define SYSCTL_DC3_C0PLUS       0x00000080  // C0+ Pin Present.
#define SYSCTL_DC3_C0MINUS      0x00000040  // C0- Pin Present.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_DC4 register.
//
//*****************************************************************************
#define SYSCTL_DC4_GPIOC        0x00000004  // GPIO Port C Present.
#define SYSCTL_DC4_GPIOB        0x00000002  // GPIO Port B Present.
#define SYSCTL_DC4_GPIOA        0x00000001  // GPIO Port A Present.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_PBORCTL register.
//
//*****************************************************************************
#define SYSCTL_PBORCTL_BORTIM_M 0x0000FFFC  // BOR Time Delay.
#define SYSCTL_PBORCTL_BORIOR   0x00000002  // BOR Interrupt or Reset.
#define SYSCTL_PBORCTL_BORWT    0x00000001  // BOR Wait and Check for Noise.
#define SYSCTL_PBORCTL_BORTIM_S 2

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_LDOPCTL register.
//
//*****************************************************************************
#define SYSCTL_LDOPCTL_M        0x0000003F  // LDO Output Voltage.
#define SYSCTL_LDOPCTL_2_50V    0x00000000  // 2.50
#define SYSCTL_LDOPCTL_2_45V    0x00000001  // 2.45
#define SYSCTL_LDOPCTL_2_40V    0x00000002  // 2.40
#define SYSCTL_LDOPCTL_2_35V    0x00000003  // 2.35
#define SYSCTL_LDOPCTL_2_30V    0x00000004  // 2.30
#define SYSCTL_LDOPCTL_2_25V    0x00000005  // 2.25
#define SYSCTL_LDOPCTL_2_75V    0x0000001B  // 2.75
#define SYSCTL_LDOPCTL_2_70V    0x0000001C  // 2.70
#define SYSCTL_LDOPCTL_2_65V    0x0000001D  // 2.65
#define SYSCTL_LDOPCTL_2_60V    0x0000001E  // 2.60
#define SYSCTL_LDOPCTL_2_55V    0x0000001F  // 2.55

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_SRCR0 register.
//
//*****************************************************************************
#define SYSCTL_SRCR0_WDT        0x00000008  // WDT Reset Control.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_SRCR1 register.
//
//*****************************************************************************
#define SYSCTL_SRCR1_COMP0      0x01000000  // Analog Comp 0 Reset Control.
#define SYSCTL_SRCR1_TIMER1     0x00020000  // Timer 1 Reset Control.
#define SYSCTL_SRCR1_TIMER0     0x00010000  // Timer 0 Reset Control.
#define SYSCTL_SRCR1_I2C0       0x00001000  // I2C0 Reset Control.
#define SYSCTL_SRCR1_SSI0       0x00000010  // SSI0 Reset Control.
#define SYSCTL_SRCR1_UART0      0x00000001  // UART0 Reset Control.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_SRCR2 register.
//
//*****************************************************************************
#define SYSCTL_SRCR2_GPIOC      0x00000004  // Port C Reset Control.
#define SYSCTL_SRCR2_GPIOB      0x00000002  // Port B Reset Control.
#define SYSCTL_SRCR2_GPIOA      0x00000001  // Port A Reset Control.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_RIS register.
//
//*****************************************************************************
#define SYSCTL_RIS_PLLLRIS      0x00000040  // PLL Lock Raw Interrupt Status.
#define SYSCTL_RIS_CLRIS        0x00000020  // Current Limit Raw Interrupt
                                            // Status.
#define SYSCTL_RIS_IOFRIS       0x00000010  // Internal Oscillator Fault Raw
                                            // Interrupt Status.
#define SYSCTL_RIS_MOFRIS       0x00000008  // Main Oscillator Fault Raw
                                            // Interrupt Status.
#define SYSCTL_RIS_LDORIS       0x00000004  // LDO Power Unregulated Raw
                                            // Interrupt Status.
#define SYSCTL_RIS_BORRIS       0x00000002  // Brown-Out Reset Raw Interrupt
                                            // Status.
#define SYSCTL_RIS_PLLFRIS      0x00000001  // PLL Fault Raw Interrupt Status.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_IMC register.
//
//*****************************************************************************
#define SYSCTL_IMC_PLLLIM       0x00000040  // PLL Lock Interrupt Mask.
#define SYSCTL_IMC_CLIM         0x00000020  // Current Limit Interrupt Mask.
#define SYSCTL_IMC_IOFIM        0x00000010  // Internal Oscillator Fault
                                            // Interrupt Mask.
#define SYSCTL_IMC_MOFIM        0x00000008  // Main Oscillator Fault Interrupt
                                            // Mask.
#define SYSCTL_IMC_LDOIM        0x00000004  // LDO Power Unregulated Interrupt
                                            // Mask.
#define SYSCTL_IMC_BORIM        0x00000002  // Brown-Out Reset Interrupt Mask.
#define SYSCTL_IMC_PLLFIM       0x00000001  // PLL Fault Interrupt Mask.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_MISC register.
//
//*****************************************************************************
#define SYSCTL_MISC_PLLLMIS     0x00000040  // PLL Lock Masked Interrupt
                                            // Status.
#define SYSCTL_MISC_CLMIS       0x00000020  // Current Limit Masked Interrupt
                                            // Status.
#define SYSCTL_MISC_IOFMIS      0x00000010  // Internal Oscillator Fault Masked
                                            // Interrupt Status.
#define SYSCTL_MISC_MOFMIS      0x00000008  // Main Oscillator Fault Masked
                                            // Interrupt Status.
#define SYSCTL_MISC_LDOMIS      0x00000004  // LDO Power Unregulated Masked
                                            // Interrupt Status.
#define SYSCTL_MISC_BORMIS      0x00000002  // BOR Masked Interrupt Status.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_RESC register.
//
//*****************************************************************************
#define SYSCTL_RESC_LDO         0x00000020  // LDO Reset.
#define SYSCTL_RESC_SW          0x00000010  // Software Reset.
#define SYSCTL_RESC_WDT         0x00000008  // Watchdog Timer Reset.
#define SYSCTL_RESC_BOR         0x00000004  // Brown-Out Reset.
#define SYSCTL_RESC_POR         0x00000002  // Power-On Reset.
#define SYSCTL_RESC_EXT         0x00000001  // External Reset.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_RCC register.
//
//*****************************************************************************
#define SYSCTL_RCC_ACG          0x08000000  // Auto Clock Gating.
#define SYSCTL_RCC_SYSDIV_M     0x07800000  // System Clock Divisor.
#define SYSCTL_RCC_SYSDIV_2     0x00800000  // /2
#define SYSCTL_RCC_SYSDIV_3     0x01000000  // /3
#define SYSCTL_RCC_SYSDIV_4     0x01800000  // /4
#define SYSCTL_RCC_SYSDIV_5     0x02000000  // /5
#define SYSCTL_RCC_SYSDIV_6     0x02800000  // /6
#define SYSCTL_RCC_SYSDIV_7     0x03000000  // /7
#define SYSCTL_RCC_SYSDIV_8     0x03800000  // /8
#define SYSCTL_RCC_SYSDIV_9     0x04000000  // /9
#define SYSCTL_RCC_SYSDIV_10    0x04800000  // /10
#define SYSCTL_RCC_SYSDIV_11    0x05000000  // /11
#define SYSCTL_RCC_SYSDIV_12    0x05800000  // /12
#define SYSCTL_RCC_SYSDIV_13    0x06000000  // /13
#define SYSCTL_RCC_SYSDIV_14    0x06800000  // /14
#define SYSCTL_RCC_SYSDIV_15    0x07000000  // /15
#define SYSCTL_RCC_SYSDIV_16    0x07800000  // /16
#define SYSCTL_RCC_USESYSDIV    0x00400000  // Enable System Clock Divider.
#define SYSCTL_RCC_PWRDN        0x00002000  // PLL Power Down.
#define SYSCTL_RCC_OEN          0x00001000  // PLL Output Enable.
#define SYSCTL_RCC_BYPASS       0x00000800  // PLL Bypass.
#define SYSCTL_RCC_PLLVER       0x00000400  // PLL Verification.
#define SYSCTL_RCC_XTAL_M       0x000003C0  // Crystal Value.
#define SYSCTL_RCC_XTAL_1MHZ    0x00000000  // 1.000
#define SYSCTL_RCC_XTAL_1_84MHZ 0x00000040  // 1.8432
#define SYSCTL_RCC_XTAL_2MHZ    0x00000080  // 2.000
#define SYSCTL_RCC_XTAL_2_45MHZ 0x000000C0  // 2.4576
#define SYSCTL_RCC_XTAL_3_57MHZ 0x00000100  // 3.579545 MHz
#define SYSCTL_RCC_XTAL_3_68MHZ 0x00000140  // 3.6864 MHz
#define SYSCTL_RCC_XTAL_4MHZ    0x00000180  // 4 MHz
#define SYSCTL_RCC_XTAL_4_09MHZ 0x000001C0  // 4.096 MHz
#define SYSCTL_RCC_XTAL_4_91MHZ 0x00000200  // 4.9152 MHz
#define SYSCTL_RCC_XTAL_5MHZ    0x00000240  // 5 MHz
#define SYSCTL_RCC_XTAL_5_12MHZ 0x00000280  // 5.12 MHz
#define SYSCTL_RCC_XTAL_6MHZ    0x000002C0  // 6 MHz (reset value)
#define SYSCTL_RCC_XTAL_6_14MHZ 0x00000300  // 6.144 MHz
#define SYSCTL_RCC_XTAL_7_37MHZ 0x00000340  // 7.3728 MHz
#define SYSCTL_RCC_XTAL_8MHZ    0x00000380  // 8 MHz
#define SYSCTL_RCC_XTAL_8_19MHZ 0x000003C0  // 8.192 MHz
#define SYSCTL_RCC_OSCSRC_M     0x00000030  // Oscillator Source.
#define SYSCTL_RCC_OSCSRC_MAIN  0x00000000  // Main oscillator (default)
#define SYSCTL_RCC_OSCSRC_INT   0x00000010  // Internal oscillator (default)
#define SYSCTL_RCC_OSCSRC_INT4  0x00000020  // Internal oscillator / 4 (this is
                                            // necessary if used as input to
                                            // PLL)
#define SYSCTL_RCC_IOSCVER      0x00000008  // Internal Oscillator Verification
                                            // Timer.
#define SYSCTL_RCC_MOSCVER      0x00000004  // Main Oscillator Verification
                                            // Timer.
#define SYSCTL_RCC_IOSCDIS      0x00000002  // Internal Oscillator Disable.
#define SYSCTL_RCC_MOSCDIS      0x00000001  // Main Oscillator Disable.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_PLLCFG register.
//
//*****************************************************************************
#define SYSCTL_PLLCFG_OD_M      0x0000C000  // PLL OD Value.
#define SYSCTL_PLLCFG_OD_1      0x00000000  // Divide by 1
#define SYSCTL_PLLCFG_OD_2      0x00004000  // Divide by 2
#define SYSCTL_PLLCFG_OD_4      0x00008000  // Divide by 4
#define SYSCTL_PLLCFG_F_M       0x00003FE0  // PLL F Value.
#define SYSCTL_PLLCFG_R_M       0x0000001F  // PLL R Value.
#define SYSCTL_PLLCFG_F_S       5
#define SYSCTL_PLLCFG_R_S       0

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_RCGC0 register.
//
//*****************************************************************************
#define SYSCTL_RCGC0_WDT        0x00000008  // WDT Clock Gating Control.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_RCGC1 register.
//
//*****************************************************************************
#define SYSCTL_RCGC1_COMP0      0x01000000  // Analog Comparator 0 Clock
                                            // Gating.
#define SYSCTL_RCGC1_TIMER1     0x00020000  // Timer 1 Clock Gating Control.
#define SYSCTL_RCGC1_TIMER0     0x00010000  // Timer 0 Clock Gating Control.
#define SYSCTL_RCGC1_I2C0       0x00001000  // I2C0 Clock Gating Control.
#define SYSCTL_RCGC1_SSI0       0x00000010  // SSI0 Clock Gating Control.
#define SYSCTL_RCGC1_UART0      0x00000001  // UART0 Clock Gating Control.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_RCGC2 register.
//
//*****************************************************************************
#define SYSCTL_RCGC2_GPIOC      0x00000004  // Port C Clock Gating Control.
#define SYSCTL_RCGC2_GPIOB      0x00000002  // Port B Clock Gating Control.
#define SYSCTL_RCGC2_GPIOA      0x00000001  // Port A Clock Gating Control.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_SCGC0 register.
//
//*****************************************************************************
#define SYSCTL_SCGC0_WDT        0x00000008  // WDT Clock Gating Control.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_SCGC1 register.
//
//*****************************************************************************
#define SYSCTL_SCGC1_COMP0      0x01000000  // Analog Comparator 0 Clock
                                            // Gating.
#define SYSCTL_SCGC1_TIMER1     0x00020000  // Timer 1 Clock Gating Control.
#define SYSCTL_SCGC1_TIMER0     0x00010000  // Timer 0 Clock Gating Control.
#define SYSCTL_SCGC1_I2C0       0x00001000  // I2C0 Clock Gating Control.
#define SYSCTL_SCGC1_SSI0       0x00000010  // SSI0 Clock Gating Control.
#define SYSCTL_SCGC1_UART0      0x00000001  // UART0 Clock Gating Control.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_SCGC2 register.
//
//*****************************************************************************
#define SYSCTL_SCGC2_GPIOC      0x00000004  // Port C Clock Gating Control.
#define SYSCTL_SCGC2_GPIOB      0x00000002  // Port B Clock Gating Control.
#define SYSCTL_SCGC2_GPIOA      0x00000001  // Port A Clock Gating Control.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_DCGC0 register.
//
//*****************************************************************************
#define SYSCTL_DCGC0_WDT        0x00000008  // WDT Clock Gating Control.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_DCGC1 register.
//
//*****************************************************************************
#define SYSCTL_DCGC1_COMP0      0x01000000  // Analog Comparator 0 Clock
                                            // Gating.
#define SYSCTL_DCGC1_TIMER1     0x00020000  // Timer 1 Clock Gating Control.
#define SYSCTL_DCGC1_TIMER0     0x00010000  // Timer 0 Clock Gating Control.
#define SYSCTL_DCGC1_I2C0       0x00001000  // I2C0 Clock Gating Control.
#define SYSCTL_DCGC1_SSI0       0x00000010  // SSI0 Clock Gating Control.
#define SYSCTL_DCGC1_UART0      0x00000001  // UART0 Clock Gating Control.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_DCGC2 register.
//
//*****************************************************************************
#define SYSCTL_DCGC2_GPIOC      0x00000004  // Port C Clock Gating Control.
#define SYSCTL_DCGC2_GPIOB      0x00000002  // Port B Clock Gating Control.
#define SYSCTL_DCGC2_GPIOA      0x00000001  // Port A Clock Gating Control.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_DSLPCLKCFG
// register.
//
//*****************************************************************************
#define SYSCTL_DSLPCLKCFG_IOSC  0x00000001  // IOSC Clock Source.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_CLKVCLR register.
//
//*****************************************************************************
#define SYSCTL_CLKVCLR_VERCLR   0x00000001  // Clock Verification Clear.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_LDOARST register.
//
//*****************************************************************************
#define SYSCTL_LDOARST_LDOARST  0x00000001  // LDO Reset.

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_INT_TYPE register.
//
//*****************************************************************************
#define NVIC_INT_TYPE_LINES_M   0x0000001F  // Number of interrupt lines (x32)
#define NVIC_INT_TYPE_LINES_S   0

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_ST_CTRL register.
//
//*****************************************************************************
#define NVIC_ST_CTRL_COUNT      0x00010000  // Count flag
#define NVIC_ST_CTRL_CLK_SRC    0x00000004  // Clock Source
#define NVIC_ST_CTRL_INTEN      0x00000002  // Interrupt enable
#define NVIC_ST_CTRL_ENABLE     0x00000001  // Counter mode

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_ST_RELOAD register.
//
//*****************************************************************************
#define NVIC_ST_RELOAD_M        0x00FFFFFF  // Counter load value
#define NVIC_ST_RELOAD_S        0

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_ST_CURRENT
// register.
//
//*****************************************************************************
#define NVIC_ST_CURRENT_M       0x00FFFFFF  // Counter current value
#define NVIC_ST_CURRENT_S       0

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_ST_CAL register.
//
//*****************************************************************************
#define NVIC_ST_CAL_NOREF       0x80000000  // No reference clock
#define NVIC_ST_CAL_SKEW        0x40000000  // Clock skew
#define NVIC_ST_CAL_ONEMS_M     0x00FFFFFF  // 1ms reference value
#define NVIC_ST_CAL_ONEMS_S     0

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_EN0 register.
//
//*****************************************************************************
#define NVIC_EN0_INT31          0x80000000  // Interrupt 31 enable
#define NVIC_EN0_INT30          0x40000000  // Interrupt 30 enable
#define NVIC_EN0_INT29          0x20000000  // Interrupt 29 enable
#define NVIC_EN0_INT28          0x10000000  // Interrupt 28 enable
#define NVIC_EN0_INT27          0x08000000  // Interrupt 27 enable
#define NVIC_EN0_INT26          0x04000000  // Interrupt 26 enable
#define NVIC_EN0_INT25          0x02000000  // Interrupt 25 enable
#define NVIC_EN0_INT24          0x01000000  // Interrupt 24 enable
#define NVIC_EN0_INT23          0x00800000  // Interrupt 23 enable
#define NVIC_EN0_INT22          0x00400000  // Interrupt 22 enable
#define NVIC_EN0_INT21          0x00200000  // Interrupt 21 enable
#define NVIC_EN0_INT20          0x00100000  // Interrupt 20 enable
#define NVIC_EN0_INT19          0x00080000  // Interrupt 19 enable
#define NVIC_EN0_INT18          0x00040000  // Interrupt 18 enable
#define NVIC_EN0_INT17          0x00020000  // Interrupt 17 enable
#define NVIC_EN0_INT16          0x00010000  // Interrupt 16 enable
#define NVIC_EN0_INT15          0x00008000  // Interrupt 15 enable
#define NVIC_EN0_INT14          0x00004000  // Interrupt 14 enable
#define NVIC_EN0_INT13          0x00002000  // Interrupt 13 enable
#define NVIC_EN0_INT12          0x00001000  // Interrupt 12 enable
#define NVIC_EN0_INT11          0x00000800  // Interrupt 11 enable
#define NVIC_EN0_INT10          0x00000400  // Interrupt 10 enable
#define NVIC_EN0_INT9           0x00000200  // Interrupt 9 enable
#define NVIC_EN0_INT8           0x00000100  // Interrupt 8 enable
#define NVIC_EN0_INT7           0x00000080  // Interrupt 7 enable
#define NVIC_EN0_INT6           0x00000040  // Interrupt 6 enable
#define NVIC_EN0_INT5           0x00000020  // Interrupt 5 enable
#define NVIC_EN0_INT4           0x00000010  // Interrupt 4 enable
#define NVIC_EN0_INT3           0x00000008  // Interrupt 3 enable
#define NVIC_EN0_INT2           0x00000004  // Interrupt 2 enable
#define NVIC_EN0_INT1           0x00000002  // Interrupt 1 enable
#define NVIC_EN0_INT0           0x00000001  // Interrupt 0 enable

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_DIS0 register.
//
//*****************************************************************************
#define NVIC_DIS0_INT31         0x80000000  // Interrupt 31 disable
#define NVIC_DIS0_INT30         0x40000000  // Interrupt 30 disable
#define NVIC_DIS0_INT29         0x20000000  // Interrupt 29 disable
#define NVIC_DIS0_INT28         0x10000000  // Interrupt 28 disable
#define NVIC_DIS0_INT27         0x08000000  // Interrupt 27 disable
#define NVIC_DIS0_INT26         0x04000000  // Interrupt 26 disable
#define NVIC_DIS0_INT25         0x02000000  // Interrupt 25 disable
#define NVIC_DIS0_INT24         0x01000000  // Interrupt 24 disable
#define NVIC_DIS0_INT23         0x00800000  // Interrupt 23 disable
#define NVIC_DIS0_INT22         0x00400000  // Interrupt 22 disable
#define NVIC_DIS0_INT21         0x00200000  // Interrupt 21 disable
#define NVIC_DIS0_INT20         0x00100000  // Interrupt 20 disable
#define NVIC_DIS0_INT19         0x00080000  // Interrupt 19 disable
#define NVIC_DIS0_INT18         0x00040000  // Interrupt 18 disable
#define NVIC_DIS0_INT17         0x00020000  // Interrupt 17 disable
#define NVIC_DIS0_INT16         0x00010000  // Interrupt 16 disable
#define NVIC_DIS0_INT15         0x00008000  // Interrupt 15 disable
#define NVIC_DIS0_INT14         0x00004000  // Interrupt 14 disable
#define NVIC_DIS0_INT13         0x00002000  // Interrupt 13 disable
#define NVIC_DIS0_INT12         0x00001000  // Interrupt 12 disable
#define NVIC_DIS0_INT11         0x00000800  // Interrupt 11 disable
#define NVIC_DIS0_INT10         0x00000400  // Interrupt 10 disable
#define NVIC_DIS0_INT9          0x00000200  // Interrupt 9 disable
#define NVIC_DIS0_INT8          0x00000100  // Interrupt 8 disable
#define NVIC_DIS0_INT7          0x00000080  // Interrupt 7 disable
#define NVIC_DIS0_INT6          0x00000040  // Interrupt 6 disable
#define NVIC_DIS0_INT5          0x00000020  // Interrupt 5 disable
#define NVIC_DIS0_INT4          0x00000010  // Interrupt 4 disable
#define NVIC_DIS0_INT3          0x00000008  // Interrupt 3 disable
#define NVIC_DIS0_INT2          0x00000004  // Interrupt 2 disable
#define NVIC_DIS0_INT1          0x00000002  // Interrupt 1 disable
#define NVIC_DIS0_INT0          0x00000001  // Interrupt 0 disable

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_PEND0 register.
//
//*****************************************************************************
#define NVIC_PEND0_INT31        0x80000000  // Interrupt 31 pend
#define NVIC_PEND0_INT30        0x40000000  // Interrupt 30 pend
#define NVIC_PEND0_INT29        0x20000000  // Interrupt 29 pend
#define NVIC_PEND0_INT28        0x10000000  // Interrupt 28 pend
#define NVIC_PEND0_INT27        0x08000000  // Interrupt 27 pend
#define NVIC_PEND0_INT26        0x04000000  // Interrupt 26 pend
#define NVIC_PEND0_INT25        0x02000000  // Interrupt 25 pend
#define NVIC_PEND0_INT24        0x01000000  // Interrupt 24 pend
#define NVIC_PEND0_INT23        0x00800000  // Interrupt 23 pend
#define NVIC_PEND0_INT22        0x00400000  // Interrupt 22 pend
#define NVIC_PEND0_INT21        0x00200000  // Interrupt 21 pend
#define NVIC_PEND0_INT20        0x00100000  // Interrupt 20 pend
#define NVIC_PEND0_INT19        0x00080000  // Interrupt 19 pend
#define NVIC_PEND0_INT18        0x00040000  // Interrupt 18 pend
#define NVIC_PEND0_INT17        0x00020000  // Interrupt 17 pend
#define NVIC_PEND0_INT16        0x00010000  // Interrupt 16 pend
#define NVIC_PEND0_INT15        0x00008000  // Interrupt 15 pend
#define NVIC_PEND0_INT14        0x00004000  // Interrupt 14 pend
#define NVIC_PEND0_INT13        0x00002000  // Interrupt 13 pend
#define NVIC_PEND0_INT12        0x00001000  // Interrupt 12 pend
#define NVIC_PEND0_INT11        0x00000800  // Interrupt 11 pend
#define NVIC_PEND0_INT10        0x00000400  // Interrupt 10 pend
#define NVIC_PEND0_INT9         0x00000200  // Interrupt 9 pend
#define NVIC_PEND0_INT8         0x00000100  // Interrupt 8 pend
#define NVIC_PEND0_INT7         0x00000080  // Interrupt 7 pend
#define NVIC_PEND0_INT6         0x00000040  // Interrupt 6 pend
#define NVIC_PEND0_INT5         0x00000020  // Interrupt 5 pend
#define NVIC_PEND0_INT4         0x00000010  // Interrupt 4 pend
#define NVIC_PEND0_INT3         0x00000008  // Interrupt 3 pend
#define NVIC_PEND0_INT2         0x00000004  // Interrupt 2 pend
#define NVIC_PEND0_INT1         0x00000002  // Interrupt 1 pend
#define NVIC_PEND0_INT0         0x00000001  // Interrupt 0 pend

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_UNPEND0 register.
//
//*****************************************************************************
#define NVIC_UNPEND0_INT31      0x80000000  // Interrupt 31 unpend
#define NVIC_UNPEND0_INT30      0x40000000  // Interrupt 30 unpend
#define NVIC_UNPEND0_INT29      0x20000000  // Interrupt 29 unpend
#define NVIC_UNPEND0_INT28      0x10000000  // Interrupt 28 unpend
#define NVIC_UNPEND0_INT27      0x08000000  // Interrupt 27 unpend
#define NVIC_UNPEND0_INT26      0x04000000  // Interrupt 26 unpend
#define NVIC_UNPEND0_INT25      0x02000000  // Interrupt 25 unpend
#define NVIC_UNPEND0_INT24      0x01000000  // Interrupt 24 unpend
#define NVIC_UNPEND0_INT23      0x00800000  // Interrupt 23 unpend
#define NVIC_UNPEND0_INT22      0x00400000  // Interrupt 22 unpend
#define NVIC_UNPEND0_INT21      0x00200000  // Interrupt 21 unpend
#define NVIC_UNPEND0_INT20      0x00100000  // Interrupt 20 unpend
#define NVIC_UNPEND0_INT19      0x00080000  // Interrupt 19 unpend
#define NVIC_UNPEND0_INT18      0x00040000  // Interrupt 18 unpend
#define NVIC_UNPEND0_INT17      0x00020000  // Interrupt 17 unpend
#define NVIC_UNPEND0_INT16      0x00010000  // Interrupt 16 unpend
#define NVIC_UNPEND0_INT15      0x00008000  // Interrupt 15 unpend
#define NVIC_UNPEND0_INT14      0x00004000  // Interrupt 14 unpend
#define NVIC_UNPEND0_INT13      0x00002000  // Interrupt 13 unpend
#define NVIC_UNPEND0_INT12      0x00001000  // Interrupt 12 unpend
#define NVIC_UNPEND0_INT11      0x00000800  // Interrupt 11 unpend
#define NVIC_UNPEND0_INT10      0x00000400  // Interrupt 10 unpend
#define NVIC_UNPEND0_INT9       0x00000200  // Interrupt 9 unpend
#define NVIC_UNPEND0_INT8       0x00000100  // Interrupt 8 unpend
#define NVIC_UNPEND0_INT7       0x00000080  // Interrupt 7 unpend
#define NVIC_UNPEND0_INT6       0x00000040  // Interrupt 6 unpend
#define NVIC_UNPEND0_INT5       0x00000020  // Interrupt 5 unpend
#define NVIC_UNPEND0_INT4       0x00000010  // Interrupt 4 unpend
#define NVIC_UNPEND0_INT3       0x00000008  // Interrupt 3 unpend
#define NVIC_UNPEND0_INT2       0x00000004  // Interrupt 2 unpend
#define NVIC_UNPEND0_INT1       0x00000002  // Interrupt 1 unpend
#define NVIC_UNPEND0_INT0       0x00000001  // Interrupt 0 unpend

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_ACTIVE0 register.
//
//*****************************************************************************
#define NVIC_ACTIVE0_INT31      0x80000000  // Interrupt 31 active
#define NVIC_ACTIVE0_INT30      0x40000000  // Interrupt 30 active
#define NVIC_ACTIVE0_INT29      0x20000000  // Interrupt 29 active
#define NVIC_ACTIVE0_INT28      0x10000000  // Interrupt 28 active
#define NVIC_ACTIVE0_INT27      0x08000000  // Interrupt 27 active
#define NVIC_ACTIVE0_INT26      0x04000000  // Interrupt 26 active
#define NVIC_ACTIVE0_INT25      0x02000000  // Interrupt 25 active
#define NVIC_ACTIVE0_INT24      0x01000000  // Interrupt 24 active
#define NVIC_ACTIVE0_INT23      0x00800000  // Interrupt 23 active
#define NVIC_ACTIVE0_INT22      0x00400000  // Interrupt 22 active
#define NVIC_ACTIVE0_INT21      0x00200000  // Interrupt 21 active
#define NVIC_ACTIVE0_INT20      0x00100000  // Interrupt 20 active
#define NVIC_ACTIVE0_INT19      0x00080000  // Interrupt 19 active
#define NVIC_ACTIVE0_INT18      0x00040000  // Interrupt 18 active
#define NVIC_ACTIVE0_INT17      0x00020000  // Interrupt 17 active
#define NVIC_ACTIVE0_INT16      0x00010000  // Interrupt 16 active
#define NVIC_ACTIVE0_INT15      0x00008000  // Interrupt 15 active
#define NVIC_ACTIVE0_INT14      0x00004000  // Interrupt 14 active
#define NVIC_ACTIVE0_INT13      0x00002000  // Interrupt 13 active
#define NVIC_ACTIVE0_INT12      0x00001000  // Interrupt 12 active
#define NVIC_ACTIVE0_INT11      0x00000800  // Interrupt 11 active
#define NVIC_ACTIVE0_INT10      0x00000400  // Interrupt 10 active
#define NVIC_ACTIVE0_INT9       0x00000200  // Interrupt 9 active
#define NVIC_ACTIVE0_INT8       0x00000100  // Interrupt 8 active
#define NVIC_ACTIVE0_INT7       0x00000080  // Interrupt 7 active
#define NVIC_ACTIVE0_INT6       0x00000040  // Interrupt 6 active
#define NVIC_ACTIVE0_INT5       0x00000020  // Interrupt 5 active
#define NVIC_ACTIVE0_INT4       0x00000010  // Interrupt 4 active
#define NVIC_ACTIVE0_INT3       0x00000008  // Interrupt 3 active
#define NVIC_ACTIVE0_INT2       0x00000004  // Interrupt 2 active
#define NVIC_ACTIVE0_INT1       0x00000002  // Interrupt 1 active
#define NVIC_ACTIVE0_INT0       0x00000001  // Interrupt 0 active

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_PRI0 register.
//
//*****************************************************************************
#define NVIC_PRI0_INT3_M        0xFF000000  // Interrupt 3 priority mask
#define NVIC_PRI0_INT2_M        0x00FF0000  // Interrupt 2 priority mask
#define NVIC_PRI0_INT1_M        0x0000FF00  // Interrupt 1 priority mask
#define NVIC_PRI0_INT0_M        0x000000FF  // Interrupt 0 priority mask
#define NVIC_PRI0_INT3_S        24
#define NVIC_PRI0_INT2_S        16
#define NVIC_PRI0_INT1_S        8
#define NVIC_PRI0_INT0_S        0

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_PRI1 register.
//
//*****************************************************************************
#define NVIC_PRI1_INT7_M        0xFF000000  // Interrupt 7 priority mask
#define NVIC_PRI1_INT6_M        0x00FF0000  // Interrupt 6 priority mask
#define NVIC_PRI1_INT5_M        0x0000FF00  // Interrupt 5 priority mask
#define NVIC_PRI1_INT4_M        0x000000FF  // Interrupt 4 priority mask
#define NVIC_PRI1_INT7_S        24
#define NVIC_PRI1_INT6_S        16
#define NVIC_PRI1_INT5_S        8
#define NVIC_PRI1_INT4_S        0

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_PRI2 register.
//
//*****************************************************************************
#define NVIC_PRI2_INT11_M       0xFF000000  // Interrupt 11 priority mask
#define NVIC_PRI2_INT10_M       0x00FF0000  // Interrupt 10 priority mask
#define NVIC_PRI2_INT9_M        0x0000FF00  // Interrupt 9 priority mask
#define NVIC_PRI2_INT8_M        0x000000FF  // Interrupt 8 priority mask
#define NVIC_PRI2_INT11_S       24
#define NVIC_PRI2_INT10_S       16
#define NVIC_PRI2_INT9_S        8
#define NVIC_PRI2_INT8_S        0

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_PRI3 register.
//
//*****************************************************************************
#define NVIC_PRI3_INT15_M       0xFF000000  // Interrupt 15 priority mask
#define NVIC_PRI3_INT14_M       0x00FF0000  // Interrupt 14 priority mask
#define NVIC_PRI3_INT13_M       0x0000FF00  // Interrupt 13 priority mask
#define NVIC_PRI3_INT12_M       0x000000FF  // Interrupt 12 priority mask
#define NVIC_PRI3_INT15_S       24
#define NVIC_PRI3_INT14_S       16
#define NVIC_PRI3_INT13_S       8
#define NVIC_PRI3_INT12_S       0

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_PRI4 register.
//
//*****************************************************************************
#define NVIC_PRI4_INT19_M       0xFF000000  // Interrupt 19 priority mask
#define NVIC_PRI4_INT18_M       0x00FF0000  // Interrupt 18 priority mask
#define NVIC_PRI4_INT17_M       0x0000FF00  // Interrupt 17 priority mask
#define NVIC_PRI4_INT16_M       0x000000FF  // Interrupt 16 priority mask
#define NVIC_PRI4_INT19_S       24
#define NVIC_PRI4_INT18_S       16
#define NVIC_PRI4_INT17_S       8
#define NVIC_PRI4_INT16_S       0

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_PRI5 register.
//
//*****************************************************************************
#define NVIC_PRI5_INT23_M       0xFF000000  // Interrupt 23 priority mask
#define NVIC_PRI5_INT22_M       0x00FF0000  // Interrupt 22 priority mask
#define NVIC_PRI5_INT21_M       0x0000FF00  // Interrupt 21 priority mask
#define NVIC_PRI5_INT20_M       0x000000FF  // Interrupt 20 priority mask
#define NVIC_PRI5_INT23_S       24
#define NVIC_PRI5_INT22_S       16
#define NVIC_PRI5_INT21_S       8
#define NVIC_PRI5_INT20_S       0

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_PRI6 register.
//
//*****************************************************************************
#define NVIC_PRI6_INT27_M       0xFF000000  // Interrupt 27 priority mask
#define NVIC_PRI6_INT26_M       0x00FF0000  // Interrupt 26 priority mask
#define NVIC_PRI6_INT25_M       0x0000FF00  // Interrupt 25 priority mask
#define NVIC_PRI6_INT24_M       0x000000FF  // Interrupt 24 priority mask
#define NVIC_PRI6_INT27_S       24
#define NVIC_PRI6_INT26_S       16
#define NVIC_PRI6_INT25_S       8
#define NVIC_PRI6_INT24_S       0

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_PRI7 register.
//
//*****************************************************************************
#define NVIC_PRI7_INT31_M       0xFF000000  // Interrupt 31 priority mask
#define NVIC_PRI7_INT30_M       0x00FF0000  // Interrupt 30 priority mask
#define NVIC_PRI7_INT29_M       0x0000FF00  // Interrupt 29 priority mask
#define NVIC_PRI7_INT28_M       0x000000FF  // Interrupt 28 priority mask
#define NVIC_PRI7_INT31_S       24
#define NVIC_PRI7_INT30_S       16
#define NVIC_PRI7_INT29_S       8
#define NVIC_PRI7_INT28_S       0

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_CPUID register.
//
//*****************************************************************************
#define NVIC_CPUID_IMP_M        0xFF000000  // Implementer
#define NVIC_CPUID_VAR_M        0x00F00000  // Variant
#define NVIC_CPUID_PARTNO_M     0x0000FFF0  // Processor part number
#define NVIC_CPUID_REV_M        0x0000000F  // Revision

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_INT_CTRL register.
//
//*****************************************************************************
#define NVIC_INT_CTRL_NMI_SET   0x80000000  // Pend a NMI
#define NVIC_INT_CTRL_PEND_SV   0x10000000  // Pend a PendSV
#define NVIC_INT_CTRL_UNPEND_SV 0x08000000  // Unpend a PendSV
#define NVIC_INT_CTRL_ISR_PRE   0x00800000  // Debug interrupt handling
#define NVIC_INT_CTRL_ISR_PEND  0x00400000  // Debug interrupt pending
#define NVIC_INT_CTRL_VEC_PEN_M 0x003FF000  // Highest pending exception
#define NVIC_INT_CTRL_RET_BASE  0x00000800  // Return to base
#define NVIC_INT_CTRL_VEC_ACT_M 0x000003FF  // Current active exception
#define NVIC_INT_CTRL_VEC_PEN_S 12
#define NVIC_INT_CTRL_VEC_ACT_S 0

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_VTABLE register.
//
//*****************************************************************************
#define NVIC_VTABLE_BASE        0x20000000  // Vector table base
#define NVIC_VTABLE_OFFSET_M    0x1FFFFF00  // Vector table offset
#define NVIC_VTABLE_OFFSET_S    8

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_APINT register.
//
//*****************************************************************************
#define NVIC_APINT_VECTKEY_M    0xFFFF0000  // Vector key mask
#define NVIC_APINT_VECTKEY      0x05FA0000  // Vector key
#define NVIC_APINT_ENDIANESS    0x00008000  // Data endianess
#define NVIC_APINT_PRIGROUP_M   0x00000700  // Priority group
#define NVIC_APINT_PRIGROUP_0_8 0x00000700  // Priority group 0.8 split
#define NVIC_APINT_PRIGROUP_1_7 0x00000600  // Priority group 1.7 split
#define NVIC_APINT_PRIGROUP_2_6 0x00000500  // Priority group 2.6 split
#define NVIC_APINT_PRIGROUP_3_5 0x00000400  // Priority group 3.5 split
#define NVIC_APINT_PRIGROUP_4_4 0x00000300  // Priority group 4.4 split
#define NVIC_APINT_PRIGROUP_5_3 0x00000200  // Priority group 5.3 split
#define NVIC_APINT_PRIGROUP_6_2 0x00000100  // Priority group 6.2 split
#define NVIC_APINT_SYSRESETREQ  0x00000004  // System reset request
#define NVIC_APINT_VECT_CLR_ACT 0x00000002  // Clear active NMI/fault info
#define NVIC_APINT_VECT_RESET   0x00000001  // System reset
#define NVIC_APINT_PRIGROUP_7_1 0x00000000  // Priority group 7.1 split

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_SYS_CTRL register.
//
//*****************************************************************************
#define NVIC_SYS_CTRL_SEVONPEND 0x00000010  // Wakeup on pend
#define NVIC_SYS_CTRL_SLEEPDEEP 0x00000004  // Deep sleep enable
#define NVIC_SYS_CTRL_SLEEPEXIT 0x00000002  // Sleep on ISR exit

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_CFG_CTRL register.
//
//*****************************************************************************
#define NVIC_CFG_CTRL_BFHFNMIGN 0x00000100  // Ignore bus fault in NMI/fault
#define NVIC_CFG_CTRL_DIV0      0x00000010  // Trap on divide by 0
#define NVIC_CFG_CTRL_UNALIGNED 0x00000008  // Trap on unaligned access
#define NVIC_CFG_CTRL_DEEP_PEND 0x00000004  // Allow deep interrupt trigger
#define NVIC_CFG_CTRL_MAIN_PEND 0x00000002  // Allow main interrupt trigger
#define NVIC_CFG_CTRL_BASE_THR  0x00000001  // Thread state control

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_SYS_PRI1 register.
//
//*****************************************************************************
#define NVIC_SYS_PRI1_RES_M     0xFF000000  // Priority of reserved handler
#define NVIC_SYS_PRI1_USAGE_M   0x00FF0000  // Priority of usage fault handler
#define NVIC_SYS_PRI1_BUS_M     0x0000FF00  // Priority of bus fault handler
#define NVIC_SYS_PRI1_MEM_M     0x000000FF  // Priority of mem manage handler
#define NVIC_SYS_PRI1_USAGE_S   16
#define NVIC_SYS_PRI1_BUS_S     8
#define NVIC_SYS_PRI1_MEM_S     0

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_SYS_PRI2 register.
//
//*****************************************************************************
#define NVIC_SYS_PRI2_SVC_M     0xFF000000  // Priority of SVCall handler
#define NVIC_SYS_PRI2_RES_M     0x00FFFFFF  // Priority of reserved handlers
#define NVIC_SYS_PRI2_SVC_S     24

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_SYS_PRI3 register.
//
//*****************************************************************************
#define NVIC_SYS_PRI3_TICK_M    0xFF000000  // Priority of Sys Tick handler
#define NVIC_SYS_PRI3_PENDSV_M  0x00FF0000  // Priority of PendSV handler
#define NVIC_SYS_PRI3_RES_M     0x0000FF00  // Priority of reserved handler
#define NVIC_SYS_PRI3_DEBUG_M   0x000000FF  // Priority of debug handler
#define NVIC_SYS_PRI3_TICK_S    24
#define NVIC_SYS_PRI3_PENDSV_S  16
#define NVIC_SYS_PRI3_DEBUG_S   0

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_SYS_HND_CTRL
// register.
//
//*****************************************************************************
#define NVIC_SYS_HND_CTRL_USAGE 0x00040000  // Usage fault enable
#define NVIC_SYS_HND_CTRL_BUS   0x00020000  // Bus fault enable
#define NVIC_SYS_HND_CTRL_MEM   0x00010000  // Mem manage fault enable
#define NVIC_SYS_HND_CTRL_SVC   0x00008000  // SVCall is pended
#define NVIC_SYS_HND_CTRL_BUSP  0x00004000  // Bus fault is pended
#define NVIC_SYS_HND_CTRL_TICK  0x00000800  // Sys tick is active
#define NVIC_SYS_HND_CTRL_PNDSV 0x00000400  // PendSV is active
#define NVIC_SYS_HND_CTRL_MON   0x00000100  // Monitor is active
#define NVIC_SYS_HND_CTRL_SVCA  0x00000080  // SVCall is active
#define NVIC_SYS_HND_CTRL_USGA  0x00000008  // Usage fault is active
#define NVIC_SYS_HND_CTRL_BUSA  0x00000002  // Bus fault is active
#define NVIC_SYS_HND_CTRL_MEMA  0x00000001  // Mem manage is active

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_FAULT_STAT
// register.
//
//*****************************************************************************
#define NVIC_FAULT_STAT_DIV0    0x02000000  // Divide by zero fault
#define NVIC_FAULT_STAT_UNALIGN 0x01000000  // Unaligned access fault
#define NVIC_FAULT_STAT_NOCP    0x00080000  // No coprocessor fault
#define NVIC_FAULT_STAT_INVPC   0x00040000  // Invalid PC fault
#define NVIC_FAULT_STAT_INVSTAT 0x00020000  // Invalid state fault
#define NVIC_FAULT_STAT_UNDEF   0x00010000  // Undefined instruction fault
#define NVIC_FAULT_STAT_BFARV   0x00008000  // BFAR is valid
#define NVIC_FAULT_STAT_BSTKE   0x00001000  // Stack bus fault
#define NVIC_FAULT_STAT_BUSTKE  0x00000800  // Unstack bus fault
#define NVIC_FAULT_STAT_IMPRE   0x00000400  // Imprecise data bus error
#define NVIC_FAULT_STAT_PRECISE 0x00000200  // Precise data bus error
#define NVIC_FAULT_STAT_IBUS    0x00000100  // Instruction bus fault
#define NVIC_FAULT_STAT_MMARV   0x00000080  // MMAR is valid
#define NVIC_FAULT_STAT_MSTKE   0x00000010  // Stack access violation
#define NVIC_FAULT_STAT_MUSTKE  0x00000008  // Unstack access violation
#define NVIC_FAULT_STAT_DERR    0x00000002  // Data access violation
#define NVIC_FAULT_STAT_IERR    0x00000001  // Instruction access violation

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_HFAULT_STAT
// register.
//
//*****************************************************************************
#define NVIC_HFAULT_STAT_DBG    0x80000000  // Debug event
#define NVIC_HFAULT_STAT_FORCED 0x40000000  // Cannot execute fault handler
#define NVIC_HFAULT_STAT_VECT   0x00000002  // Vector table read fault

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_DEBUG_STAT
// register.
//
//*****************************************************************************
#define NVIC_DEBUG_STAT_EXTRNL  0x00000010  // EDBGRQ asserted
#define NVIC_DEBUG_STAT_VCATCH  0x00000008  // Vector catch
#define NVIC_DEBUG_STAT_DWTTRAP 0x00000004  // DWT match
#define NVIC_DEBUG_STAT_BKPT    0x00000002  // Breakpoint instruction
#define NVIC_DEBUG_STAT_HALTED  0x00000001  // Halt request

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_MM_ADDR register.
//
//*****************************************************************************
#define NVIC_MM_ADDR_M          0xFFFFFFFF  // Data fault address
#define NVIC_MM_ADDR_S          0

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_FAULT_ADDR
// register.
//
//*****************************************************************************
#define NVIC_FAULT_ADDR_M       0xFFFFFFFF  // Data bus fault address
#define NVIC_FAULT_ADDR_S       0

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_DBG_CTRL register.
//
//*****************************************************************************
#define NVIC_DBG_CTRL_DBGKEY_M  0xFFFF0000  // Debug key mask
#define NVIC_DBG_CTRL_DBGKEY    0xA05F0000  // Debug key
#define NVIC_DBG_CTRL_MON_PEND  0x00008000  // Pend the monitor
#define NVIC_DBG_CTRL_MON_REQ   0x00004000  // Monitor request
#define NVIC_DBG_CTRL_MON_EN    0x00002000  // Debug monitor enable
#define NVIC_DBG_CTRL_MONSTEP   0x00001000  // Monitor step the core
#define NVIC_DBG_CTRL_S_SLEEP   0x00000400  // Core is sleeping
#define NVIC_DBG_CTRL_S_HALT    0x00000200  // Core status on halt
#define NVIC_DBG_CTRL_S_REGRDY  0x00000100  // Register read/write available
#define NVIC_DBG_CTRL_S_LOCKUP  0x00000080  // Core is locked up
#define NVIC_DBG_CTRL_C_RESET   0x00000010  // Reset the core
#define NVIC_DBG_CTRL_C_MASKINT 0x00000008  // Mask interrupts when stepping
#define NVIC_DBG_CTRL_C_STEP    0x00000004  // Step the core
#define NVIC_DBG_CTRL_C_HALT    0x00000002  // Halt the core
#define NVIC_DBG_CTRL_C_DEBUGEN 0x00000001  // Enable debug

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_DBG_XFER register.
//
//*****************************************************************************
#define NVIC_DBG_XFER_REG_WNR   0x00010000  // Write or not read
#define NVIC_DBG_XFER_REG_SEL_M 0x0000001F  // Register
#define NVIC_DBG_XFER_REG_CFBP  0x00000014  // Control/Fault/BasePri/PriMask
#define NVIC_DBG_XFER_REG_DSP   0x00000013  // Deep SP
#define NVIC_DBG_XFER_REG_PSP   0x00000012  // Process SP
#define NVIC_DBG_XFER_REG_MSP   0x00000011  // Main SP
#define NVIC_DBG_XFER_REG_FLAGS 0x00000010  // xPSR/Flags register
#define NVIC_DBG_XFER_REG_R15   0x0000000F  // Register R15
#define NVIC_DBG_XFER_REG_R14   0x0000000E  // Register R14
#define NVIC_DBG_XFER_REG_R13   0x0000000D  // Register R13
#define NVIC_DBG_XFER_REG_R12   0x0000000C  // Register R12
#define NVIC_DBG_XFER_REG_R11   0x0000000B  // Register R11
#define NVIC_DBG_XFER_REG_R10   0x0000000A  // Register R10
#define NVIC_DBG_XFER_REG_R9    0x00000009  // Register R9
#define NVIC_DBG_XFER_REG_R8    0x00000008  // Register R8
#define NVIC_DBG_XFER_REG_R7    0x00000007  // Register R7
#define NVIC_DBG_XFER_REG_R6    0x00000006  // Register R6
#define NVIC_DBG_XFER_REG_R5    0x00000005  // Register R5
#define NVIC_DBG_XFER_REG_R4    0x00000004  // Register R4
#define NVIC_DBG_XFER_REG_R3    0x00000003  // Register R3
#define NVIC_DBG_XFER_REG_R2    0x00000002  // Register R2
#define NVIC_DBG_XFER_REG_R1    0x00000001  // Register R1
#define NVIC_DBG_XFER_REG_R0    0x00000000  // Register R0

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_DBG_DATA register.
//
//*****************************************************************************
#define NVIC_DBG_DATA_M         0xFFFFFFFF  // Data temporary cache
#define NVIC_DBG_DATA_S         0

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_DBG_INT register.
//
//*****************************************************************************
#define NVIC_DBG_INT_HARDERR    0x00000400  // Debug trap on hard fault
#define NVIC_DBG_INT_INTERR     0x00000200  // Debug trap on interrupt errors
#define NVIC_DBG_INT_BUSERR     0x00000100  // Debug trap on bus error
#define NVIC_DBG_INT_STATERR    0x00000080  // Debug trap on usage fault state
#define NVIC_DBG_INT_CHKERR     0x00000040  // Debug trap on usage fault check
#define NVIC_DBG_INT_NOCPERR    0x00000020  // Debug trap on coprocessor error
#define NVIC_DBG_INT_MMERR      0x00000010  // Debug trap on mem manage fault
#define NVIC_DBG_INT_RESET      0x00000008  // Core reset status
#define NVIC_DBG_INT_RSTPENDCLR 0x00000004  // Clear pending core reset
#define NVIC_DBG_INT_RSTPENDING 0x00000002  // Core reset is pending
#define NVIC_DBG_INT_RSTVCATCH  0x00000001  // Reset vector catch

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_SW_TRIG register.
//
//*****************************************************************************
#define NVIC_SW_TRIG_INTID_M    0x000003FF  // Interrupt to trigger
#define NVIC_SW_TRIG_INTID_S    0

#endif // __LM3S102_H__
