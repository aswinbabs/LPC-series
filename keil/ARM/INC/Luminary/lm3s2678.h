//*****************************************************************************
//
// lm3s2678.h - LM3S2678 Register Definitions
//
// Copyright (c) 2008 Luminary Micro, Inc.  All rights reserved.
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

#ifndef __LM3S2678_H__
#define __LM3S2678_H__

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
#define GPIO_PORTA_LOCK_R       (*((volatile unsigned long *)0x40004520))
#define GPIO_PORTA_CR_R         (*((volatile unsigned long *)0x40004524))
#define GPIO_PORTA_AMSEL_R      (*((volatile unsigned long *)0x40004528))

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
#define GPIO_PORTB_LOCK_R       (*((volatile unsigned long *)0x40005520))
#define GPIO_PORTB_CR_R         (*((volatile unsigned long *)0x40005524))
#define GPIO_PORTB_AMSEL_R      (*((volatile unsigned long *)0x40005528))

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
#define GPIO_PORTC_LOCK_R       (*((volatile unsigned long *)0x40006520))
#define GPIO_PORTC_CR_R         (*((volatile unsigned long *)0x40006524))
#define GPIO_PORTC_AMSEL_R      (*((volatile unsigned long *)0x40006528))

//*****************************************************************************
//
// General-Purpose Input/Outputs (PORTD)
//
//*****************************************************************************
#define GPIO_PORTD_DATA_BITS_R  ((volatile unsigned long *)0x40007000)
#define GPIO_PORTD_DATA_R       (*((volatile unsigned long *)0x400073FC))
#define GPIO_PORTD_DIR_R        (*((volatile unsigned long *)0x40007400))
#define GPIO_PORTD_IS_R         (*((volatile unsigned long *)0x40007404))
#define GPIO_PORTD_IBE_R        (*((volatile unsigned long *)0x40007408))
#define GPIO_PORTD_IEV_R        (*((volatile unsigned long *)0x4000740C))
#define GPIO_PORTD_IM_R         (*((volatile unsigned long *)0x40007410))
#define GPIO_PORTD_RIS_R        (*((volatile unsigned long *)0x40007414))
#define GPIO_PORTD_MIS_R        (*((volatile unsigned long *)0x40007418))
#define GPIO_PORTD_ICR_R        (*((volatile unsigned long *)0x4000741C))
#define GPIO_PORTD_AFSEL_R      (*((volatile unsigned long *)0x40007420))
#define GPIO_PORTD_DR2R_R       (*((volatile unsigned long *)0x40007500))
#define GPIO_PORTD_DR4R_R       (*((volatile unsigned long *)0x40007504))
#define GPIO_PORTD_DR8R_R       (*((volatile unsigned long *)0x40007508))
#define GPIO_PORTD_ODR_R        (*((volatile unsigned long *)0x4000750C))
#define GPIO_PORTD_PUR_R        (*((volatile unsigned long *)0x40007510))
#define GPIO_PORTD_PDR_R        (*((volatile unsigned long *)0x40007514))
#define GPIO_PORTD_SLR_R        (*((volatile unsigned long *)0x40007518))
#define GPIO_PORTD_DEN_R        (*((volatile unsigned long *)0x4000751C))
#define GPIO_PORTD_LOCK_R       (*((volatile unsigned long *)0x40007520))
#define GPIO_PORTD_CR_R         (*((volatile unsigned long *)0x40007524))
#define GPIO_PORTD_AMSEL_R      (*((volatile unsigned long *)0x40007528))

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
#define SSI0_DMACTL_R           (*((volatile unsigned long *)0x40008024))

//*****************************************************************************
//
// Universal Asynchronous Receivers/Transmitters (UART0)
//
//*****************************************************************************
#define UART0_DR_R              (*((volatile unsigned long *)0x4000C000))
#define UART0_RSR_R             (*((volatile unsigned long *)0x4000C004))
#define UART0_ECR_R             (*((volatile unsigned long *)0x4000C004))
#define UART0_FR_R              (*((volatile unsigned long *)0x4000C018))
#define UART0_ILPR_R            (*((volatile unsigned long *)0x4000C020))
#define UART0_IBRD_R            (*((volatile unsigned long *)0x4000C024))
#define UART0_FBRD_R            (*((volatile unsigned long *)0x4000C028))
#define UART0_LCRH_R            (*((volatile unsigned long *)0x4000C02C))
#define UART0_CTL_R             (*((volatile unsigned long *)0x4000C030))
#define UART0_IFLS_R            (*((volatile unsigned long *)0x4000C034))
#define UART0_IM_R              (*((volatile unsigned long *)0x4000C038))
#define UART0_RIS_R             (*((volatile unsigned long *)0x4000C03C))
#define UART0_MIS_R             (*((volatile unsigned long *)0x4000C040))
#define UART0_ICR_R             (*((volatile unsigned long *)0x4000C044))
#define UART0_DMACTL_R          (*((volatile unsigned long *)0x4000C048))

//*****************************************************************************
//
// General-Purpose Input/Outputs (PORTE)
//
//*****************************************************************************
#define GPIO_PORTE_DATA_BITS_R  ((volatile unsigned long *)0x40024000)
#define GPIO_PORTE_DATA_R       (*((volatile unsigned long *)0x400243FC))
#define GPIO_PORTE_DIR_R        (*((volatile unsigned long *)0x40024400))
#define GPIO_PORTE_IS_R         (*((volatile unsigned long *)0x40024404))
#define GPIO_PORTE_IBE_R        (*((volatile unsigned long *)0x40024408))
#define GPIO_PORTE_IEV_R        (*((volatile unsigned long *)0x4002440C))
#define GPIO_PORTE_IM_R         (*((volatile unsigned long *)0x40024410))
#define GPIO_PORTE_RIS_R        (*((volatile unsigned long *)0x40024414))
#define GPIO_PORTE_MIS_R        (*((volatile unsigned long *)0x40024418))
#define GPIO_PORTE_ICR_R        (*((volatile unsigned long *)0x4002441C))
#define GPIO_PORTE_AFSEL_R      (*((volatile unsigned long *)0x40024420))
#define GPIO_PORTE_DR2R_R       (*((volatile unsigned long *)0x40024500))
#define GPIO_PORTE_DR4R_R       (*((volatile unsigned long *)0x40024504))
#define GPIO_PORTE_DR8R_R       (*((volatile unsigned long *)0x40024508))
#define GPIO_PORTE_ODR_R        (*((volatile unsigned long *)0x4002450C))
#define GPIO_PORTE_PUR_R        (*((volatile unsigned long *)0x40024510))
#define GPIO_PORTE_PDR_R        (*((volatile unsigned long *)0x40024514))
#define GPIO_PORTE_SLR_R        (*((volatile unsigned long *)0x40024518))
#define GPIO_PORTE_DEN_R        (*((volatile unsigned long *)0x4002451C))
#define GPIO_PORTE_LOCK_R       (*((volatile unsigned long *)0x40024520))
#define GPIO_PORTE_CR_R         (*((volatile unsigned long *)0x40024524))
#define GPIO_PORTE_AMSEL_R      (*((volatile unsigned long *)0x40024528))

//*****************************************************************************
//
// Pulse Width Modulator (PWM)
//
//*****************************************************************************
#define PWM_CTL_R               (*((volatile unsigned long *)0x40028000))
#define PWM_SYNC_R              (*((volatile unsigned long *)0x40028004))
#define PWM_ENABLE_R            (*((volatile unsigned long *)0x40028008))
#define PWM_INVERT_R            (*((volatile unsigned long *)0x4002800C))
#define PWM_FAULT_R             (*((volatile unsigned long *)0x40028010))
#define PWM_INTEN_R             (*((volatile unsigned long *)0x40028014))
#define PWM_RIS_R               (*((volatile unsigned long *)0x40028018))
#define PWM_ISC_R               (*((volatile unsigned long *)0x4002801C))
#define PWM_STATUS_R            (*((volatile unsigned long *)0x40028020))
#define PWM_FAULTVAL_R          (*((volatile unsigned long *)0x40028024))
#define PWM_0_CTL_R             (*((volatile unsigned long *)0x40028040))
#define PWM_0_INTEN_R           (*((volatile unsigned long *)0x40028044))
#define PWM_0_RIS_R             (*((volatile unsigned long *)0x40028048))
#define PWM_0_ISC_R             (*((volatile unsigned long *)0x4002804C))
#define PWM_0_LOAD_R            (*((volatile unsigned long *)0x40028050))
#define PWM_0_COUNT_R           (*((volatile unsigned long *)0x40028054))
#define PWM_0_CMPA_R            (*((volatile unsigned long *)0x40028058))
#define PWM_0_CMPB_R            (*((volatile unsigned long *)0x4002805C))
#define PWM_0_GENA_R            (*((volatile unsigned long *)0x40028060))
#define PWM_0_GENB_R            (*((volatile unsigned long *)0x40028064))
#define PWM_0_DBCTL_R           (*((volatile unsigned long *)0x40028068))
#define PWM_0_DBRISE_R          (*((volatile unsigned long *)0x4002806C))
#define PWM_0_DBFALL_R          (*((volatile unsigned long *)0x40028070))
#define PWM_0_FLTSRC0_R         (*((volatile unsigned long *)0x40028074))
#define PWM_0_MINFLTPER_R       (*((volatile unsigned long *)0x4002807C))
#define PWM_1_CTL_R             (*((volatile unsigned long *)0x40028080))
#define PWM_1_INTEN_R           (*((volatile unsigned long *)0x40028084))
#define PWM_1_RIS_R             (*((volatile unsigned long *)0x40028088))
#define PWM_1_ISC_R             (*((volatile unsigned long *)0x4002808C))
#define PWM_1_LOAD_R            (*((volatile unsigned long *)0x40028090))
#define PWM_1_COUNT_R           (*((volatile unsigned long *)0x40028094))
#define PWM_1_CMPA_R            (*((volatile unsigned long *)0x40028098))
#define PWM_1_CMPB_R            (*((volatile unsigned long *)0x4002809C))
#define PWM_1_GENA_R            (*((volatile unsigned long *)0x400280A0))
#define PWM_1_GENB_R            (*((volatile unsigned long *)0x400280A4))
#define PWM_1_DBCTL_R           (*((volatile unsigned long *)0x400280A8))
#define PWM_1_DBRISE_R          (*((volatile unsigned long *)0x400280AC))
#define PWM_1_DBFALL_R          (*((volatile unsigned long *)0x400280B0))
#define PWM_1_FLTSRC0_R         (*((volatile unsigned long *)0x400280B4))
#define PWM_1_MINFLTPER_R       (*((volatile unsigned long *)0x400280BC))
#define PWM_0_FLTSEN_R          (*((volatile unsigned long *)0x40028800))
#define PWM_0_FLTSTAT0_R        (*((volatile unsigned long *)0x40028804))
#define PWM_1_FLTSEN_R          (*((volatile unsigned long *)0x40028880))
#define PWM_1_FLTSTAT0_R        (*((volatile unsigned long *)0x40028884))

//*****************************************************************************
//
// Quadrature Encoder Interface (QEI0)
//
//*****************************************************************************
#define QEI0_CTL_R              (*((volatile unsigned long *)0x4002C000))
#define QEI0_STAT_R             (*((volatile unsigned long *)0x4002C004))
#define QEI0_POS_R              (*((volatile unsigned long *)0x4002C008))
#define QEI0_MAXPOS_R           (*((volatile unsigned long *)0x4002C00C))
#define QEI0_LOAD_R             (*((volatile unsigned long *)0x4002C010))
#define QEI0_TIME_R             (*((volatile unsigned long *)0x4002C014))
#define QEI0_COUNT_R            (*((volatile unsigned long *)0x4002C018))
#define QEI0_SPEED_R            (*((volatile unsigned long *)0x4002C01C))
#define QEI0_INTEN_R            (*((volatile unsigned long *)0x4002C020))
#define QEI0_RIS_R              (*((volatile unsigned long *)0x4002C024))
#define QEI0_ISC_R              (*((volatile unsigned long *)0x4002C028))

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
#define TIMER1_TAR_R            (*((volatile unsigned long *)0x40031048))
#define TIMER1_TBR_R            (*((volatile unsigned long *)0x4003104C))

//*****************************************************************************
//
// General-Purpose Timers (TIMER2)
//
//*****************************************************************************
#define TIMER2_CFG_R            (*((volatile unsigned long *)0x40032000))
#define TIMER2_TAMR_R           (*((volatile unsigned long *)0x40032004))
#define TIMER2_TBMR_R           (*((volatile unsigned long *)0x40032008))
#define TIMER2_CTL_R            (*((volatile unsigned long *)0x4003200C))
#define TIMER2_IMR_R            (*((volatile unsigned long *)0x40032018))
#define TIMER2_RIS_R            (*((volatile unsigned long *)0x4003201C))
#define TIMER2_MIS_R            (*((volatile unsigned long *)0x40032020))
#define TIMER2_ICR_R            (*((volatile unsigned long *)0x40032024))
#define TIMER2_TAILR_R          (*((volatile unsigned long *)0x40032028))
#define TIMER2_TBILR_R          (*((volatile unsigned long *)0x4003202C))
#define TIMER2_TAMATCHR_R       (*((volatile unsigned long *)0x40032030))
#define TIMER2_TBMATCHR_R       (*((volatile unsigned long *)0x40032034))
#define TIMER2_TAPR_R           (*((volatile unsigned long *)0x40032038))
#define TIMER2_TBPR_R           (*((volatile unsigned long *)0x4003203C))
#define TIMER2_TAR_R            (*((volatile unsigned long *)0x40032048))
#define TIMER2_TBR_R            (*((volatile unsigned long *)0x4003204C))

//*****************************************************************************
//
// General-Purpose Timers (TIMER3)
//
//*****************************************************************************
#define TIMER3_CFG_R            (*((volatile unsigned long *)0x40033000))
#define TIMER3_TAMR_R           (*((volatile unsigned long *)0x40033004))
#define TIMER3_TBMR_R           (*((volatile unsigned long *)0x40033008))
#define TIMER3_CTL_R            (*((volatile unsigned long *)0x4003300C))
#define TIMER3_IMR_R            (*((volatile unsigned long *)0x40033018))
#define TIMER3_RIS_R            (*((volatile unsigned long *)0x4003301C))
#define TIMER3_MIS_R            (*((volatile unsigned long *)0x40033020))
#define TIMER3_ICR_R            (*((volatile unsigned long *)0x40033024))
#define TIMER3_TAILR_R          (*((volatile unsigned long *)0x40033028))
#define TIMER3_TBILR_R          (*((volatile unsigned long *)0x4003302C))
#define TIMER3_TAMATCHR_R       (*((volatile unsigned long *)0x40033030))
#define TIMER3_TBMATCHR_R       (*((volatile unsigned long *)0x40033034))
#define TIMER3_TAPR_R           (*((volatile unsigned long *)0x40033038))
#define TIMER3_TBPR_R           (*((volatile unsigned long *)0x4003303C))
#define TIMER3_TAR_R            (*((volatile unsigned long *)0x40033048))
#define TIMER3_TBR_R            (*((volatile unsigned long *)0x4003304C))

//*****************************************************************************
//
// Analog-to-Digital Converter (ADC)
//
//*****************************************************************************
#define ADC_ACTSS_R             (*((volatile unsigned long *)0x40038000))
#define ADC_RIS_R               (*((volatile unsigned long *)0x40038004))
#define ADC_IM_R                (*((volatile unsigned long *)0x40038008))
#define ADC_ISC_R               (*((volatile unsigned long *)0x4003800C))
#define ADC_OSTAT_R             (*((volatile unsigned long *)0x40038010))
#define ADC_EMUX_R              (*((volatile unsigned long *)0x40038014))
#define ADC_USTAT_R             (*((volatile unsigned long *)0x40038018))
#define ADC_SSPRI_R             (*((volatile unsigned long *)0x40038020))
#define ADC_PSSI_R              (*((volatile unsigned long *)0x40038028))
#define ADC_SAC_R               (*((volatile unsigned long *)0x40038030))
#define ADC_SSMUX0_R            (*((volatile unsigned long *)0x40038040))
#define ADC_SSCTL0_R            (*((volatile unsigned long *)0x40038044))
#define ADC_SSFIFO0_R           (*((volatile unsigned long *)0x40038048))
#define ADC_SSFSTAT0_R          (*((volatile unsigned long *)0x4003804C))
#define ADC_SSMUX1_R            (*((volatile unsigned long *)0x40038060))
#define ADC_SSCTL1_R            (*((volatile unsigned long *)0x40038064))
#define ADC_SSFIFO1_R           (*((volatile unsigned long *)0x40038068))
#define ADC_SSFSTAT1_R          (*((volatile unsigned long *)0x4003806C))
#define ADC_SSMUX2_R            (*((volatile unsigned long *)0x40038080))
#define ADC_SSCTL2_R            (*((volatile unsigned long *)0x40038084))
#define ADC_SSFIFO2_R           (*((volatile unsigned long *)0x40038088))
#define ADC_SSFSTAT2_R          (*((volatile unsigned long *)0x4003808C))
#define ADC_SSMUX3_R            (*((volatile unsigned long *)0x400380A0))
#define ADC_SSCTL3_R            (*((volatile unsigned long *)0x400380A4))
#define ADC_SSFIFO3_R           (*((volatile unsigned long *)0x400380A8))
#define ADC_SSFSTAT3_R          (*((volatile unsigned long *)0x400380AC))

//*****************************************************************************
//
// Controller Area Network (CAN0) Module
//
//*****************************************************************************
#define CAN0_CTL_R              (*((volatile unsigned long *)0x40040000))
#define CAN0_STS_R              (*((volatile unsigned long *)0x40040004))
#define CAN0_ERR_R              (*((volatile unsigned long *)0x40040008))
#define CAN0_BIT_R              (*((volatile unsigned long *)0x4004000C))
#define CAN0_INT_R              (*((volatile unsigned long *)0x40040010))
#define CAN0_TST_R              (*((volatile unsigned long *)0x40040014))
#define CAN0_BRPE_R             (*((volatile unsigned long *)0x40040018))
#define CAN0_IF1CRQ_R           (*((volatile unsigned long *)0x40040020))
#define CAN0_IF1CMSK_R          (*((volatile unsigned long *)0x40040024))
#define CAN0_IF1MSK1_R          (*((volatile unsigned long *)0x40040028))
#define CAN0_IF1MSK2_R          (*((volatile unsigned long *)0x4004002C))
#define CAN0_IF1ARB1_R          (*((volatile unsigned long *)0x40040030))
#define CAN0_IF1ARB2_R          (*((volatile unsigned long *)0x40040034))
#define CAN0_IF1MCTL_R          (*((volatile unsigned long *)0x40040038))
#define CAN0_IF1DA1_R           (*((volatile unsigned long *)0x4004003C))
#define CAN0_IF1DA2_R           (*((volatile unsigned long *)0x40040040))
#define CAN0_IF1DB1_R           (*((volatile unsigned long *)0x40040044))
#define CAN0_IF1DB2_R           (*((volatile unsigned long *)0x40040048))
#define CAN0_IF2CRQ_R           (*((volatile unsigned long *)0x40040080))
#define CAN0_IF2CMSK_R          (*((volatile unsigned long *)0x40040084))
#define CAN0_IF2MSK1_R          (*((volatile unsigned long *)0x40040088))
#define CAN0_IF2MSK2_R          (*((volatile unsigned long *)0x4004008C))
#define CAN0_IF2ARB1_R          (*((volatile unsigned long *)0x40040090))
#define CAN0_IF2ARB2_R          (*((volatile unsigned long *)0x40040094))
#define CAN0_IF2MCTL_R          (*((volatile unsigned long *)0x40040098))
#define CAN0_IF2DA1_R           (*((volatile unsigned long *)0x4004009C))
#define CAN0_IF2DA2_R           (*((volatile unsigned long *)0x400400A0))
#define CAN0_IF2DB1_R           (*((volatile unsigned long *)0x400400A4))
#define CAN0_IF2DB2_R           (*((volatile unsigned long *)0x400400A8))
#define CAN0_TXRQ1_R            (*((volatile unsigned long *)0x40040100))
#define CAN0_TXRQ2_R            (*((volatile unsigned long *)0x40040104))
#define CAN0_NWDA1_R            (*((volatile unsigned long *)0x40040120))
#define CAN0_NWDA2_R            (*((volatile unsigned long *)0x40040124))
#define CAN0_MSG1INT_R          (*((volatile unsigned long *)0x40040140))
#define CAN0_MSG2INT_R          (*((volatile unsigned long *)0x40040144))
#define CAN0_MSG1VAL_R          (*((volatile unsigned long *)0x40040160))
#define CAN0_MSG2VAL_R          (*((volatile unsigned long *)0x40040164))

//*****************************************************************************
//
// General-Purpose Input/Outputs (AHB)
//
//*****************************************************************************
#define GPIO_PORTA_AHB_DATA_BITS_R \
                                ((volatile unsigned long *)0x40058000)
#define GPIO_PORTA_AHB_DATA_R   (*((volatile unsigned long *)0x400583FC))
#define GPIO_PORTA_AHB_DIR_R    (*((volatile unsigned long *)0x40058400))
#define GPIO_PORTA_AHB_IS_R     (*((volatile unsigned long *)0x40058404))
#define GPIO_PORTA_AHB_IBE_R    (*((volatile unsigned long *)0x40058408))
#define GPIO_PORTA_AHB_IEV_R    (*((volatile unsigned long *)0x4005840C))
#define GPIO_PORTA_AHB_IM_R     (*((volatile unsigned long *)0x40058410))
#define GPIO_PORTA_AHB_RIS_R    (*((volatile unsigned long *)0x40058414))
#define GPIO_PORTA_AHB_MIS_R    (*((volatile unsigned long *)0x40058418))
#define GPIO_PORTA_AHB_ICR_R    (*((volatile unsigned long *)0x4005841C))
#define GPIO_PORTA_AHB_AFSEL_R  (*((volatile unsigned long *)0x40058420))
#define GPIO_PORTA_AHB_DR2R_R   (*((volatile unsigned long *)0x40058500))
#define GPIO_PORTA_AHB_DR4R_R   (*((volatile unsigned long *)0x40058504))
#define GPIO_PORTA_AHB_DR8R_R   (*((volatile unsigned long *)0x40058508))
#define GPIO_PORTA_AHB_ODR_R    (*((volatile unsigned long *)0x4005850C))
#define GPIO_PORTA_AHB_PUR_R    (*((volatile unsigned long *)0x40058510))
#define GPIO_PORTA_AHB_PDR_R    (*((volatile unsigned long *)0x40058514))
#define GPIO_PORTA_AHB_SLR_R    (*((volatile unsigned long *)0x40058518))
#define GPIO_PORTA_AHB_DEN_R    (*((volatile unsigned long *)0x4005851C))
#define GPIO_PORTA_AHB_LOCK_R   (*((volatile unsigned long *)0x40058520))
#define GPIO_PORTA_AHB_CR_R     (*((volatile unsigned long *)0x40058524))
#define GPIO_PORTA_AHB_AMSEL_R  (*((volatile unsigned long *)0x40058528))

//*****************************************************************************
//
// General-Purpose Input/Outputs (AHB)
//
//*****************************************************************************
#define GPIO_PORTB_AHB_DATA_BITS_R \
                                ((volatile unsigned long *)0x40059000)
#define GPIO_PORTB_AHB_DATA_R   (*((volatile unsigned long *)0x400593FC))
#define GPIO_PORTB_AHB_DIR_R    (*((volatile unsigned long *)0x40059400))
#define GPIO_PORTB_AHB_IS_R     (*((volatile unsigned long *)0x40059404))
#define GPIO_PORTB_AHB_IBE_R    (*((volatile unsigned long *)0x40059408))
#define GPIO_PORTB_AHB_IEV_R    (*((volatile unsigned long *)0x4005940C))
#define GPIO_PORTB_AHB_IM_R     (*((volatile unsigned long *)0x40059410))
#define GPIO_PORTB_AHB_RIS_R    (*((volatile unsigned long *)0x40059414))
#define GPIO_PORTB_AHB_MIS_R    (*((volatile unsigned long *)0x40059418))
#define GPIO_PORTB_AHB_ICR_R    (*((volatile unsigned long *)0x4005941C))
#define GPIO_PORTB_AHB_AFSEL_R  (*((volatile unsigned long *)0x40059420))
#define GPIO_PORTB_AHB_DR2R_R   (*((volatile unsigned long *)0x40059500))
#define GPIO_PORTB_AHB_DR4R_R   (*((volatile unsigned long *)0x40059504))
#define GPIO_PORTB_AHB_DR8R_R   (*((volatile unsigned long *)0x40059508))
#define GPIO_PORTB_AHB_ODR_R    (*((volatile unsigned long *)0x4005950C))
#define GPIO_PORTB_AHB_PUR_R    (*((volatile unsigned long *)0x40059510))
#define GPIO_PORTB_AHB_PDR_R    (*((volatile unsigned long *)0x40059514))
#define GPIO_PORTB_AHB_SLR_R    (*((volatile unsigned long *)0x40059518))
#define GPIO_PORTB_AHB_DEN_R    (*((volatile unsigned long *)0x4005951C))
#define GPIO_PORTB_AHB_LOCK_R   (*((volatile unsigned long *)0x40059520))
#define GPIO_PORTB_AHB_CR_R     (*((volatile unsigned long *)0x40059524))
#define GPIO_PORTB_AHB_AMSEL_R  (*((volatile unsigned long *)0x40059528))

//*****************************************************************************
//
// General-Purpose Input/Outputs (AHB)
//
//*****************************************************************************
#define GPIO_PORTC_AHB_DATA_BITS_R \
                                ((volatile unsigned long *)0x4005A000)
#define GPIO_PORTC_AHB_DATA_R   (*((volatile unsigned long *)0x4005A3FC))
#define GPIO_PORTC_AHB_DIR_R    (*((volatile unsigned long *)0x4005A400))
#define GPIO_PORTC_AHB_IS_R     (*((volatile unsigned long *)0x4005A404))
#define GPIO_PORTC_AHB_IBE_R    (*((volatile unsigned long *)0x4005A408))
#define GPIO_PORTC_AHB_IEV_R    (*((volatile unsigned long *)0x4005A40C))
#define GPIO_PORTC_AHB_IM_R     (*((volatile unsigned long *)0x4005A410))
#define GPIO_PORTC_AHB_RIS_R    (*((volatile unsigned long *)0x4005A414))
#define GPIO_PORTC_AHB_MIS_R    (*((volatile unsigned long *)0x4005A418))
#define GPIO_PORTC_AHB_ICR_R    (*((volatile unsigned long *)0x4005A41C))
#define GPIO_PORTC_AHB_AFSEL_R  (*((volatile unsigned long *)0x4005A420))
#define GPIO_PORTC_AHB_DR2R_R   (*((volatile unsigned long *)0x4005A500))
#define GPIO_PORTC_AHB_DR4R_R   (*((volatile unsigned long *)0x4005A504))
#define GPIO_PORTC_AHB_DR8R_R   (*((volatile unsigned long *)0x4005A508))
#define GPIO_PORTC_AHB_ODR_R    (*((volatile unsigned long *)0x4005A50C))
#define GPIO_PORTC_AHB_PUR_R    (*((volatile unsigned long *)0x4005A510))
#define GPIO_PORTC_AHB_PDR_R    (*((volatile unsigned long *)0x4005A514))
#define GPIO_PORTC_AHB_SLR_R    (*((volatile unsigned long *)0x4005A518))
#define GPIO_PORTC_AHB_DEN_R    (*((volatile unsigned long *)0x4005A51C))
#define GPIO_PORTC_AHB_LOCK_R   (*((volatile unsigned long *)0x4005A520))
#define GPIO_PORTC_AHB_CR_R     (*((volatile unsigned long *)0x4005A524))
#define GPIO_PORTC_AHB_AMSEL_R  (*((volatile unsigned long *)0x4005A528))

//*****************************************************************************
//
// General-Purpose Input/Outputs (AHB)
//
//*****************************************************************************
#define GPIO_PORTD_AHB_DATA_BITS_R \
                                ((volatile unsigned long *)0x4005B000)
#define GPIO_PORTD_AHB_DATA_R   (*((volatile unsigned long *)0x4005B3FC))
#define GPIO_PORTD_AHB_DIR_R    (*((volatile unsigned long *)0x4005B400))
#define GPIO_PORTD_AHB_IS_R     (*((volatile unsigned long *)0x4005B404))
#define GPIO_PORTD_AHB_IBE_R    (*((volatile unsigned long *)0x4005B408))
#define GPIO_PORTD_AHB_IEV_R    (*((volatile unsigned long *)0x4005B40C))
#define GPIO_PORTD_AHB_IM_R     (*((volatile unsigned long *)0x4005B410))
#define GPIO_PORTD_AHB_RIS_R    (*((volatile unsigned long *)0x4005B414))
#define GPIO_PORTD_AHB_MIS_R    (*((volatile unsigned long *)0x4005B418))
#define GPIO_PORTD_AHB_ICR_R    (*((volatile unsigned long *)0x4005B41C))
#define GPIO_PORTD_AHB_AFSEL_R  (*((volatile unsigned long *)0x4005B420))
#define GPIO_PORTD_AHB_DR2R_R   (*((volatile unsigned long *)0x4005B500))
#define GPIO_PORTD_AHB_DR4R_R   (*((volatile unsigned long *)0x4005B504))
#define GPIO_PORTD_AHB_DR8R_R   (*((volatile unsigned long *)0x4005B508))
#define GPIO_PORTD_AHB_ODR_R    (*((volatile unsigned long *)0x4005B50C))
#define GPIO_PORTD_AHB_PUR_R    (*((volatile unsigned long *)0x4005B510))
#define GPIO_PORTD_AHB_PDR_R    (*((volatile unsigned long *)0x4005B514))
#define GPIO_PORTD_AHB_SLR_R    (*((volatile unsigned long *)0x4005B518))
#define GPIO_PORTD_AHB_DEN_R    (*((volatile unsigned long *)0x4005B51C))
#define GPIO_PORTD_AHB_LOCK_R   (*((volatile unsigned long *)0x4005B520))
#define GPIO_PORTD_AHB_CR_R     (*((volatile unsigned long *)0x4005B524))
#define GPIO_PORTD_AHB_AMSEL_R  (*((volatile unsigned long *)0x4005B528))

//*****************************************************************************
//
// General-Purpose Input/Outputs (AHB)
//
//*****************************************************************************
#define GPIO_PORTE_AHB_DATA_BITS_R \
                                ((volatile unsigned long *)0x4005C000)
#define GPIO_PORTE_AHB_DATA_R   (*((volatile unsigned long *)0x4005C3FC))
#define GPIO_PORTE_AHB_DIR_R    (*((volatile unsigned long *)0x4005C400))
#define GPIO_PORTE_AHB_IS_R     (*((volatile unsigned long *)0x4005C404))
#define GPIO_PORTE_AHB_IBE_R    (*((volatile unsigned long *)0x4005C408))
#define GPIO_PORTE_AHB_IEV_R    (*((volatile unsigned long *)0x4005C40C))
#define GPIO_PORTE_AHB_IM_R     (*((volatile unsigned long *)0x4005C410))
#define GPIO_PORTE_AHB_RIS_R    (*((volatile unsigned long *)0x4005C414))
#define GPIO_PORTE_AHB_MIS_R    (*((volatile unsigned long *)0x4005C418))
#define GPIO_PORTE_AHB_ICR_R    (*((volatile unsigned long *)0x4005C41C))
#define GPIO_PORTE_AHB_AFSEL_R  (*((volatile unsigned long *)0x4005C420))
#define GPIO_PORTE_AHB_DR2R_R   (*((volatile unsigned long *)0x4005C500))
#define GPIO_PORTE_AHB_DR4R_R   (*((volatile unsigned long *)0x4005C504))
#define GPIO_PORTE_AHB_DR8R_R   (*((volatile unsigned long *)0x4005C508))
#define GPIO_PORTE_AHB_ODR_R    (*((volatile unsigned long *)0x4005C50C))
#define GPIO_PORTE_AHB_PUR_R    (*((volatile unsigned long *)0x4005C510))
#define GPIO_PORTE_AHB_PDR_R    (*((volatile unsigned long *)0x4005C514))
#define GPIO_PORTE_AHB_SLR_R    (*((volatile unsigned long *)0x4005C518))
#define GPIO_PORTE_AHB_DEN_R    (*((volatile unsigned long *)0x4005C51C))
#define GPIO_PORTE_AHB_LOCK_R   (*((volatile unsigned long *)0x4005C520))
#define GPIO_PORTE_AHB_CR_R     (*((volatile unsigned long *)0x4005C524))
#define GPIO_PORTE_AHB_AMSEL_R  (*((volatile unsigned long *)0x4005C528))

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
#define FLASH_RMCTL_R           (*((volatile unsigned long *)0x400FE0F0))
#define FLASH_RMVER_R           (*((volatile unsigned long *)0x400FE0F4))
#define FLASH_USECRL_R          (*((volatile unsigned long *)0x400FE140))
#define FLASH_USERDBG_R         (*((volatile unsigned long *)0x400FE1D0))
#define FLASH_USERREG0_R        (*((volatile unsigned long *)0x400FE1E0))
#define FLASH_USERREG1_R        (*((volatile unsigned long *)0x400FE1E4))
#define FLASH_USERREG2_R        (*((volatile unsigned long *)0x400FE1E8))
#define FLASH_USERREG3_R        (*((volatile unsigned long *)0x400FE1EC))
#define FLASH_FMPRE0_R          (*((volatile unsigned long *)0x400FE200))
#define FLASH_FMPRE1_R          (*((volatile unsigned long *)0x400FE204))
#define FLASH_FMPRE2_R          (*((volatile unsigned long *)0x400FE208))
#define FLASH_FMPRE3_R          (*((volatile unsigned long *)0x400FE20C))
#define FLASH_FMPPE0_R          (*((volatile unsigned long *)0x400FE400))
#define FLASH_FMPPE1_R          (*((volatile unsigned long *)0x400FE404))
#define FLASH_FMPPE2_R          (*((volatile unsigned long *)0x400FE408))
#define FLASH_FMPPE3_R          (*((volatile unsigned long *)0x400FE40C))

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
#define SYSCTL_DC5_R            (*((volatile unsigned long *)0x400FE020))
#define SYSCTL_DC6_R            (*((volatile unsigned long *)0x400FE024))
#define SYSCTL_DC7_R            (*((volatile unsigned long *)0x400FE028))
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
#define SYSCTL_GPIOHSCTL_R      (*((volatile unsigned long *)0x400FE06C))
#define SYSCTL_RCC2_R           (*((volatile unsigned long *)0x400FE070))
#define SYSCTL_MOSCCTL_R        (*((volatile unsigned long *)0x400FE07C))
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

//*****************************************************************************
//
// Micro Direct Memory Access (UDMA)
//
//*****************************************************************************
#define UDMA_STAT_R             (*((volatile unsigned long *)0x400FF000))
#define UDMA_CFG_R              (*((volatile unsigned long *)0x400FF004))
#define UDMA_CTLBASE_R          (*((volatile unsigned long *)0x400FF008))
#define UDMA_ALTBASE_R          (*((volatile unsigned long *)0x400FF00C))
#define UDMA_WAITSTAT_R         (*((volatile unsigned long *)0x400FF010))
#define UDMA_SWREQ_R            (*((volatile unsigned long *)0x400FF014))
#define UDMA_USEBURSTSET_R      (*((volatile unsigned long *)0x400FF018))
#define UDMA_USEBURSTCLR_R      (*((volatile unsigned long *)0x400FF01C))
#define UDMA_REQMASKSET_R       (*((volatile unsigned long *)0x400FF020))
#define UDMA_REQMASKCLR_R       (*((volatile unsigned long *)0x400FF024))
#define UDMA_ENASET_R           (*((volatile unsigned long *)0x400FF028))
#define UDMA_ENACLR_R           (*((volatile unsigned long *)0x400FF02C))
#define UDMA_ALTSET_R           (*((volatile unsigned long *)0x400FF030))
#define UDMA_ALTCLR_R           (*((volatile unsigned long *)0x400FF034))
#define UDMA_PRIOSET_R          (*((volatile unsigned long *)0x400FF038))
#define UDMA_PRIOCLR_R          (*((volatile unsigned long *)0x400FF03C))
#define UDMA_ERRCLR_R           (*((volatile unsigned long *)0x400FF04C))

//*****************************************************************************
//
// Micro Direct Memory Access (UDMA) Offsets
//
//*****************************************************************************
#define UDMA_SRCENDP            0x0x00000000
#define UDMA_DSTENDP            0x0x00000004
#define UDMA_CHCTL              0x0x00000008

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
#define NVIC_EN1_R              (*((volatile unsigned long *)0xE000E104))
#define NVIC_DIS0_R             (*((volatile unsigned long *)0xE000E180))
#define NVIC_DIS1_R             (*((volatile unsigned long *)0xE000E184))
#define NVIC_PEND0_R            (*((volatile unsigned long *)0xE000E200))
#define NVIC_PEND1_R            (*((volatile unsigned long *)0xE000E204))
#define NVIC_UNPEND0_R          (*((volatile unsigned long *)0xE000E280))
#define NVIC_UNPEND1_R          (*((volatile unsigned long *)0xE000E284))
#define NVIC_ACTIVE0_R          (*((volatile unsigned long *)0xE000E300))
#define NVIC_ACTIVE1_R          (*((volatile unsigned long *)0xE000E304))
#define NVIC_PRI0_R             (*((volatile unsigned long *)0xE000E400))
#define NVIC_PRI1_R             (*((volatile unsigned long *)0xE000E404))
#define NVIC_PRI2_R             (*((volatile unsigned long *)0xE000E408))
#define NVIC_PRI3_R             (*((volatile unsigned long *)0xE000E40C))
#define NVIC_PRI4_R             (*((volatile unsigned long *)0xE000E410))
#define NVIC_PRI5_R             (*((volatile unsigned long *)0xE000E414))
#define NVIC_PRI6_R             (*((volatile unsigned long *)0xE000E418))
#define NVIC_PRI7_R             (*((volatile unsigned long *)0xE000E41C))
#define NVIC_PRI8_R             (*((volatile unsigned long *)0xE000E420))
#define NVIC_PRI9_R             (*((volatile unsigned long *)0xE000E424))
#define NVIC_PRI10_R            (*((volatile unsigned long *)0xE000E428))
#define NVIC_PRI11_R            (*((volatile unsigned long *)0xE000E42C))
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
#define NVIC_MPU_TYPE_R         (*((volatile unsigned long *)0xE000ED90))
#define NVIC_MPU_CTRL_R         (*((volatile unsigned long *)0xE000ED94))
#define NVIC_MPU_NUMBER_R       (*((volatile unsigned long *)0xE000ED98))
#define NVIC_MPU_R              (*((volatile unsigned long *)0xE000ED9C))
#define NVIC_MPU_ATTR_R         (*((volatile unsigned long *)0xE000EDA0))
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
// The following are defines for the bit fields in the GPIO_O_LOCK register.
//
//*****************************************************************************
#define GPIO_LOCK_M             0xFFFFFFFF  // GPIO Lock.
#define GPIO_LOCK_UNLOCKED      0x00000000  // unlocked
#define GPIO_LOCK_LOCKED        0x00000001  // locked
#define GPIO_LOCK_KEY           0x4C4F434B  // Unlocks the GPIO_CR register

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
// The following are defines for the bit fields in the SSI_O_DMACTL register.
//
//*****************************************************************************
#define SSI_DMACTL_TXDMAE       0x00000002  // Transmit DMA Enable.
#define SSI_DMACTL_RXDMAE       0x00000001  // Receive DMA Enable.

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
// The following are defines for the bit fields in the UART_O_ILPR register.
//
//*****************************************************************************
#define UART_ILPR_ILPDVSR_M     0x000000FF  // IrDA Low-Power Divisor.
#define UART_ILPR_ILPDVSR_S     0

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
#define UART_CTL_SIRLP          0x00000004  // UART SIR Low Power Mode.
#define UART_CTL_SIREN          0x00000002  // UART SIR Enable.
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
// The following are defines for the bit fields in the UART_O_DMACTL register.
//
//*****************************************************************************
#define UART_DMACTL_DMAERR      0x00000004  // DMA on Error.
#define UART_DMACTL_TXDMAE      0x00000002  // Transmit DMA Enable.
#define UART_DMACTL_RXDMAE      0x00000001  // Receive DMA Enable.

//*****************************************************************************
//
// The following are defines for the bit fields in the PWM_O_CTL register.
//
//*****************************************************************************
#define PWM_CTL_GLOBALSYNC1     0x00000002  // Update PWM Generator 1.
#define PWM_CTL_GLOBALSYNC0     0x00000001  // Update PWM Generator 0.

//*****************************************************************************
//
// The following are defines for the bit fields in the PWM_O_SYNC register.
//
//*****************************************************************************
#define PWM_SYNC_SYNC1          0x00000002  // Reset Generator 1 Counter.
#define PWM_SYNC_SYNC0          0x00000001  // Reset Generator 0 Counter.

//*****************************************************************************
//
// The following are defines for the bit fields in the PWM_O_ENABLE register.
//
//*****************************************************************************
#define PWM_ENABLE_PWM3EN       0x00000008  // PWM3 Output Enable.
#define PWM_ENABLE_PWM2EN       0x00000004  // PWM2 Output Enable.
#define PWM_ENABLE_PWM1EN       0x00000002  // PWM1 Output Enable.
#define PWM_ENABLE_PWM0EN       0x00000001  // PWM0 Output Enable.

//*****************************************************************************
//
// The following are defines for the bit fields in the PWM_O_INVERT register.
//
//*****************************************************************************
#define PWM_INVERT_PWM3INV      0x00000008  // Invert PWM3 Signal.
#define PWM_INVERT_PWM2INV      0x00000004  // Invert PWM2 Signal.
#define PWM_INVERT_PWM1INV      0x00000002  // Invert PWM1 Signal.
#define PWM_INVERT_PWM0INV      0x00000001  // Invert PWM0 Signal.

//*****************************************************************************
//
// The following are defines for the bit fields in the PWM_O_FAULT register.
//
//*****************************************************************************
#define PWM_FAULT_FAULT3        0x00000008  // PWM3 Fault.
#define PWM_FAULT_FAULT2        0x00000004  // PWM2 Fault.
#define PWM_FAULT_FAULT1        0x00000002  // PWM1 Fault.
#define PWM_FAULT_FAULT0        0x00000001  // PWM0 Fault.

//*****************************************************************************
//
// The following are defines for the bit fields in the PWM_O_INTEN register.
//
//*****************************************************************************
#define PWM_INTEN_INTFAULT1     0x00020000  // Interrupt Fault 1.
#define PWM_INTEN_INTFAULT0     0x00010000  // Interrupt Fault 0.
#define PWM_INTEN_INTPWM1       0x00000002  // PWM1 Interrupt Enable.
#define PWM_INTEN_INTPWM0       0x00000001  // PWM0 Interrupt Enable.

//*****************************************************************************
//
// The following are defines for the bit fields in the PWM_O_RIS register.
//
//*****************************************************************************
#define PWM_RIS_INTFAULT1       0x00020000  // Interrupt Fault PWM 1.
#define PWM_RIS_INTFAULT0       0x00010000  // Interrupt Fault PWM 0.
#define PWM_RIS_INTPWM1         0x00000002  // PWM1 Interrupt Asserted.
#define PWM_RIS_INTPWM0         0x00000001  // PWM0 Interrupt Asserted.

//*****************************************************************************
//
// The following are defines for the bit fields in the PWM_O_ISC register.
//
//*****************************************************************************
#define PWM_ISC_INTFAULT1       0x00020000  // FAULT1 Interrupt Asserted.
#define PWM_ISC_INTFAULT0       0x00010000  // FAULT0 Interrupt Asserted.
#define PWM_ISC_INTPWM1         0x00000002  // PWM1 Interrupt Status.
#define PWM_ISC_INTPWM0         0x00000001  // PWM0 Interrupt Status.

//*****************************************************************************
//
// The following are defines for the bit fields in the PWM_O_STATUS register.
//
//*****************************************************************************
#define PWM_STATUS_FAULT1       0x00000002  // Fault1 Interrupt Status.
#define PWM_STATUS_FAULT0       0x00000001  // Fault0 Interrupt Status.

//*****************************************************************************
//
// The following are defines for the bit fields in the PWM_O_FAULTVAL register.
//
//*****************************************************************************
#define PWM_FAULTVAL_PWM3       0x00000008  // PWM3 Fault Value.
#define PWM_FAULTVAL_PWM2       0x00000004  // PWM2 Fault Value.
#define PWM_FAULTVAL_PWM1       0x00000002  // PWM1 Fault Value.
#define PWM_FAULTVAL_PWM0       0x00000001  // PWM0 Fault Value.

//*****************************************************************************
//
// The following are defines for the bit fields in the PWM_O_0_CTL, and
// PWM_O_1_CTL registers.
//
//*****************************************************************************
#define PWM_X_CTL_LATCH         0x00040000  // Latch Fault Input.
#define PWM_X_CTL_MINFLTPER     0x00020000  // Minimum Fault Period.
#define PWM_X_CTL_FLTSRC        0x00010000  // Fault Condition Source.
#define PWM_X_CTL_DBFALLUPD_M   0x0000C000  // Specifies the update mode for
                                            // the PWMnDBFALL register.
#define PWM_X_CTL_DBFALLUPD_I   0x00000000  // Immediate
#define PWM_X_CTL_DBFALLUPD_LS  0x00008000  // Locally Synchronized
#define PWM_X_CTL_DBFALLUPD_GS  0x0000C000  // Globally Synchronized
#define PWM_X_CTL_DBRISEUPD_M   0x00003000  // PWMnDBRISE Update Mode.
#define PWM_X_CTL_DBRISEUPD_I   0x00000000  // Immediate
#define PWM_X_CTL_DBRISEUPD_LS  0x00002000  // Locally Synchronized
#define PWM_X_CTL_DBRISEUPD_GS  0x00003000  // Globally Synchronized
#define PWM_X_CTL_DBCTLUPD_M    0x00000C00  // PWMnDBCTL Update Mode.
#define PWM_X_CTL_DBCTLUPD_I    0x00000000  // Immediate
#define PWM_X_CTL_DBCTLUPD_LS   0x00000800  // Locally Synchronized
#define PWM_X_CTL_DBCTLUPD_GS   0x00000C00  // Globally Synchronized
#define PWM_X_CTL_GENBUPD_M     0x00000300  // PWMnGENB Update Mode.
#define PWM_X_CTL_GENBUPD_I     0x00000000  // Immediate
#define PWM_X_CTL_GENBUPD_LS    0x00000200  // Locally Synchronized
#define PWM_X_CTL_GENBUPD_GS    0x00000300  // Globally Synchronized
#define PWM_X_CTL_GENAUPD_M     0x000000C0  // PWMnGENA Update Mode.
#define PWM_X_CTL_GENAUPD_I     0x00000000  // Immediate
#define PWM_X_CTL_GENAUPD_LS    0x00000080  // Locally Synchronized
#define PWM_X_CTL_GENAUPD_GS    0x000000C0  // Globally Synchronized
#define PWM_X_CTL_CMPBUPD       0x00000020  // Comparator B Update Mode.
#define PWM_X_CTL_CMPAUPD       0x00000010  // Comparator A Update Mode.
#define PWM_X_CTL_LOADUPD       0x00000008  // Load Register Update Mode.
#define PWM_X_CTL_DEBUG         0x00000004  // Debug Mode.
#define PWM_X_CTL_MODE          0x00000002  // Counter Mode.
#define PWM_X_CTL_ENABLE        0x00000001  // PWM Block Enable.

//*****************************************************************************
//
// The following are defines for the bit fields in the PWM_O_0_INTEN, and
// PWM_O_1_INTEN registers.
//
//*****************************************************************************
#define PWM_X_INTEN_TRCMPBD     0x00002000  // Trigger for Counter=Comparator B
                                            // Down.
#define PWM_X_INTEN_TRCMPBU     0x00001000  // Trigger for Counter=Comparator B
                                            // Up.
#define PWM_X_INTEN_TRCMPAD     0x00000800  // Trigger for Counter=Comparator A
                                            // Down.
#define PWM_X_INTEN_TRCMPAU     0x00000400  // Trigger for Counter=Comparator A
                                            // Up.
#define PWM_X_INTEN_TRCNTLOAD   0x00000200  // Trigger for Counter=Load.
#define PWM_X_INTEN_TRCNTZERO   0x00000100  // Trigger for Counter=0.
#define PWM_X_INTEN_INTCMPBD    0x00000020  // Interrupt for Counter=Comparator
                                            // B Down.
#define PWM_X_INTEN_INTCMPBU    0x00000010  // Interrupt for Counter=Comparator
                                            // B Up.
#define PWM_X_INTEN_INTCMPAD    0x00000008  // Interrupt for Counter=Comparator
                                            // A Down.
#define PWM_X_INTEN_INTCMPAU    0x00000004  // Interrupt for Counter=Comparator
                                            // A Up.
#define PWM_X_INTEN_INTCNTLOAD  0x00000002  // Interrupt for Counter=Load.
#define PWM_X_INTEN_INTCNTZERO  0x00000001  // Interrupt for Counter=0.

//*****************************************************************************
//
// The following are defines for the bit fields in the PWM_O_0_RIS, and
// PWM_O_1_RIS registers.
//
//*****************************************************************************
#define PWM_X_RIS_INTCMPBD      0x00000020  // Comparator B Down Interrupt
                                            // Status.
#define PWM_X_RIS_INTCMPBU      0x00000010  // Comparator B Up Interrupt
                                            // Status.
#define PWM_X_RIS_INTCMPAD      0x00000008  // Comparator A Down Interrupt
                                            // Status.
#define PWM_X_RIS_INTCMPAU      0x00000004  // Comparator A Up Interrupt
                                            // Status.
#define PWM_X_RIS_INTCNTLOAD    0x00000002  // Counter=Load Interrupt Status.
#define PWM_X_RIS_INTCNTZERO    0x00000001  // Counter=0 Interrupt Status.

//*****************************************************************************
//
// The following are defines for the bit fields in the PWM_O_0_ISC, and
// PWM_O_1_ISC registers.
//
//*****************************************************************************
#define PWM_X_ISC_INTCMPBD      0x00000020  // Comparator B Down Interrupt.
#define PWM_X_ISC_INTCMPBU      0x00000010  // Comparator B Up Interrupt.
#define PWM_X_ISC_INTCMPAD      0x00000008  // Comparator A Down Interrupt.
#define PWM_X_ISC_INTCMPAU      0x00000004  // Comparator A Up Interrupt.
#define PWM_X_ISC_INTCNTLOAD    0x00000002  // Counter=Load Interrupt.
#define PWM_X_ISC_INTCNTZERO    0x00000001  // Counter=0 Interrupt.

//*****************************************************************************
//
// The following are defines for the bit fields in the PWM_O_0_LOAD, and
// PWM_O_1_LOAD registers.
//
//*****************************************************************************
#define PWM_X_LOAD_M            0x0000FFFF  // Counter Load Value.
#define PWM_X_LOAD_S            0

//*****************************************************************************
//
// The following are defines for the bit fields in the PWM_O_0_COUNT, and
// PWM_O_1_COUNT registers.
//
//*****************************************************************************
#define PWM_X_COUNT_M           0x0000FFFF  // Counter Value.
#define PWM_X_COUNT_S           0

//*****************************************************************************
//
// The following are defines for the bit fields in the PWM_O_0_CMPA, and
// PWM_O_1_CMPA registers.
//
//*****************************************************************************
#define PWM_X_CMPA_M            0x0000FFFF  // Comparator A Value.
#define PWM_X_CMPA_S            0

//*****************************************************************************
//
// The following are defines for the bit fields in the PWM_O_0_CMPB, and
// PWM_O_1_CMPB registers.
//
//*****************************************************************************
#define PWM_X_CMPB_M            0x0000FFFF  // Comparator B Value.
#define PWM_X_CMPB_S            0

//*****************************************************************************
//
// The following are defines for the bit fields in the PWM_O_0_GENA, and
// PWM_O_1_GENA registers.
//
//*****************************************************************************
#define PWM_X_GENA_ACTCMPBD_M   0x00000C00  // Action for Comparator B Down.
#define PWM_X_GENA_ACTCMPBD_NONE \
                                0x00000000  // Do nothing.
#define PWM_X_GENA_ACTCMPBD_INV 0x00000400  // Invert the output signal.
#define PWM_X_GENA_ACTCMPBD_ZERO \
                                0x00000800  // Set the output signal to 0.
#define PWM_X_GENA_ACTCMPBD_ONE 0x00000C00  // Set the output signal to 1.
#define PWM_X_GENA_ACTCMPBU_M   0x00000300  // Action for Comparator B Up.
#define PWM_X_GENA_ACTCMPBU_NONE \
                                0x00000000  // Do nothing.
#define PWM_X_GENA_ACTCMPBU_INV 0x00000100  // Invert the output signal.
#define PWM_X_GENA_ACTCMPBU_ZERO \
                                0x00000200  // Set the output signal to 0.
#define PWM_X_GENA_ACTCMPBU_ONE 0x00000300  // Set the output signal to 1.
#define PWM_X_GENA_ACTCMPAD_M   0x000000C0  // Action for Comparator A Down.
#define PWM_X_GENA_ACTCMPAD_NONE \
                                0x00000000  // Do nothing.
#define PWM_X_GENA_ACTCMPAD_INV 0x00000040  // Invert the output signal.
#define PWM_X_GENA_ACTCMPAD_ZERO \
                                0x00000080  // Set the output signal to 0.
#define PWM_X_GENA_ACTCMPAD_ONE 0x000000C0  // Set the output signal to 1.
#define PWM_X_GENA_ACTCMPAU_M   0x00000030  // Action for Comparator A Up.
#define PWM_X_GENA_ACTCMPAU_NONE \
                                0x00000000  // Do nothing.
#define PWM_X_GENA_ACTCMPAU_INV 0x00000010  // Invert the output signal.
#define PWM_X_GENA_ACTCMPAU_ZERO \
                                0x00000020  // Set the output signal to 0.
#define PWM_X_GENA_ACTCMPAU_ONE 0x00000030  // Set the output signal to 1.
#define PWM_X_GENA_ACTLOAD_M    0x0000000C  // Action for Counter=Load.
#define PWM_X_GENA_ACTLOAD_NONE 0x00000000  // Do nothing.
#define PWM_X_GENA_ACTLOAD_INV  0x00000004  // Invert the output signal.
#define PWM_X_GENA_ACTLOAD_ZERO 0x00000008  // Set the output signal to 0.
#define PWM_X_GENA_ACTLOAD_ONE  0x0000000C  // Set the output signal to 1.
#define PWM_X_GENA_ACTZERO_M    0x00000003  // Action for Counter=0.
#define PWM_X_GENA_ACTZERO_NONE 0x00000000  // Do nothing.
#define PWM_X_GENA_ACTZERO_INV  0x00000001  // Invert the output signal.
#define PWM_X_GENA_ACTZERO_ZERO 0x00000002  // Set the output signal to 0.
#define PWM_X_GENA_ACTZERO_ONE  0x00000003  // Set the output signal to 1.

//*****************************************************************************
//
// The following are defines for the bit fields in the PWM_O_0_GENB, and
// PWM_O_1_GENB registers.
//
//*****************************************************************************
#define PWM_X_GENB_ACTCMPBD_M   0x00000C00  // Action for Comparator B Down.
#define PWM_X_GENB_ACTCMPBD_NONE \
                                0x00000000  // Do nothing.
#define PWM_X_GENB_ACTCMPBD_INV 0x00000400  // Invert the output signal.
#define PWM_X_GENB_ACTCMPBD_ZERO \
                                0x00000800  // Set the output signal to 0.
#define PWM_X_GENB_ACTCMPBD_ONE 0x00000C00  // Set the output signal to 1.
#define PWM_X_GENB_ACTCMPBU_M   0x00000300  // Action for Comparator B Up.
#define PWM_X_GENB_ACTCMPBU_NONE \
                                0x00000000  // Do nothing.
#define PWM_X_GENB_ACTCMPBU_INV 0x00000100  // Invert the output signal.
#define PWM_X_GENB_ACTCMPBU_ZERO \
                                0x00000200  // Set the output signal to 0.
#define PWM_X_GENB_ACTCMPBU_ONE 0x00000300  // Set the output signal to 1.
#define PWM_X_GENB_ACTCMPAD_M   0x000000C0  // Action for Comparator A Down.
#define PWM_X_GENB_ACTCMPAD_NONE \
                                0x00000000  // Do nothing.
#define PWM_X_GENB_ACTCMPAD_INV 0x00000040  // Invert the output signal.
#define PWM_X_GENB_ACTCMPAD_ZERO \
                                0x00000080  // Set the output signal to 0.
#define PWM_X_GENB_ACTCMPAD_ONE 0x000000C0  // Set the output signal to 1.
#define PWM_X_GENB_ACTCMPAU_M   0x00000030  // Action for Comparator A Up.
#define PWM_X_GENB_ACTCMPAU_NONE \
                                0x00000000  // Do nothing.
#define PWM_X_GENB_ACTCMPAU_INV 0x00000010  // Invert the output signal.
#define PWM_X_GENB_ACTCMPAU_ZERO \
                                0x00000020  // Set the output signal to 0.
#define PWM_X_GENB_ACTCMPAU_ONE 0x00000030  // Set the output signal to 1.
#define PWM_X_GENB_ACTLOAD_M    0x0000000C  // Action for Counter=Load.
#define PWM_X_GENB_ACTLOAD_NONE 0x00000000  // Do nothing.
#define PWM_X_GENB_ACTLOAD_INV  0x00000004  // Invert the output signal.
#define PWM_X_GENB_ACTLOAD_ZERO 0x00000008  // Set the output signal to 0.
#define PWM_X_GENB_ACTLOAD_ONE  0x0000000C  // Set the output signal to 1.
#define PWM_X_GENB_ACTZERO_M    0x00000003  // Action for Counter=0.
#define PWM_X_GENB_ACTZERO_NONE 0x00000000  // Do nothing.
#define PWM_X_GENB_ACTZERO_INV  0x00000001  // Invert the output signal.
#define PWM_X_GENB_ACTZERO_ZERO 0x00000002  // Set the output signal to 0.
#define PWM_X_GENB_ACTZERO_ONE  0x00000003  // Set the output signal to 1.

//*****************************************************************************
//
// The following are defines for the bit fields in the PWM_O_0_DBCTL, and
// PWM_O_1_DBCTL registers.
//
//*****************************************************************************
#define PWM_X_DBCTL_ENABLE      0x00000001  // Dead-Band Generator Enable.

//*****************************************************************************
//
// The following are defines for the bit fields in the PWM_O_0_DBRISE, and
// PWM_O_1_DBRISE registers.
//
//*****************************************************************************
#define PWM_X_DBRISE_DELAY_M    0x00000FFF  // Dead-Band Rise Delay.
#define PWM_X_DBRISE_DELAY_S    0

//*****************************************************************************
//
// The following are defines for the bit fields in the PWM_O_0_DBFALL, and
// PWM_O_1_DBFALL registers.
//
//*****************************************************************************
#define PWM_X_DBFALL_DELAY_M    0x00000FFF  // Dead-Band Fall Delay.
#define PWM_X_DBFALL_DELAY_S    0

//*****************************************************************************
//
// The following are defines for the bit fields in the PWM_O_0_FLTSRC0, and
// PWM_O_1_FLTSRC0 registers.
//
//*****************************************************************************
#define PWM_X_FLTSRC0_FAULT1    0x00000002  // Fault1.
#define PWM_X_FLTSRC0_FAULT0    0x00000001  // Fault0.

//*****************************************************************************
//
// The following are defines for the bit fields in the PWM_O_0_MINFLTPER, and
// PWM_O_1_MINFLTPER registers.
//
//*****************************************************************************
#define PWM_X_MINFLTPER_M       0x0000FFFF  // Minimum Fault Period.
#define PWM_X_MINFLTPER_S       0

//*****************************************************************************
//
// The following are defines for the bit fields in the PWM_O_0_FLTSEN, and
// PWM_O_1_FLTSEN registers.
//
//*****************************************************************************
#define PWM_X_FLTSEN_FAULT1     0x00000002  // Fault1 Sense.
#define PWM_X_FLTSEN_FAULT0     0x00000001  // Fault0 Sense.

//*****************************************************************************
//
// The following are defines for the bit fields in the PWM_O_0_FLTSTAT0, and
// PWM_O_1_FLTSTAT0 registers.
//
//*****************************************************************************
#define PWM_X_FLTSTAT0_FAULT1   0x00000002  // Fault Input 1.
#define PWM_X_FLTSTAT0_FAULT0   0x00000001  // Fault Input 0.

//*****************************************************************************
//
// The following are defines for the bit fields in the QEI_O_CTL register.
//
//*****************************************************************************
#define QEI_CTL_STALLEN         0x00001000  // Stall QEI.
#define QEI_CTL_INVI            0x00000800  // Invert Index Pulse.
#define QEI_CTL_INVB            0x00000400  // Invert PhB.
#define QEI_CTL_INVA            0x00000200  // Invert PhA.
#define QEI_CTL_VELDIV_M        0x000001C0  // Predivide Velocity.
#define QEI_CTL_VELDIV_1        0x00000000  // /1
#define QEI_CTL_VELDIV_2        0x00000040  // /2
#define QEI_CTL_VELDIV_4        0x00000080  // /4
#define QEI_CTL_VELDIV_8        0x000000C0  // /8
#define QEI_CTL_VELDIV_16       0x00000100  // /16
#define QEI_CTL_VELDIV_32       0x00000140  // /32
#define QEI_CTL_VELDIV_64       0x00000180  // /64
#define QEI_CTL_VELDIV_128      0x000001C0  // /128
#define QEI_CTL_VELEN           0x00000020  // Capture Velocity.
#define QEI_CTL_RESMODE         0x00000010  // Reset Mode.
#define QEI_CTL_CAPMODE         0x00000008  // Capture Mode.
#define QEI_CTL_SIGMODE         0x00000004  // Signal Mode.
#define QEI_CTL_SWAP            0x00000002  // Swap Signals.
#define QEI_CTL_ENABLE          0x00000001  // Enable QEI.

//*****************************************************************************
//
// The following are defines for the bit fields in the QEI_O_STAT register.
//
//*****************************************************************************
#define QEI_STAT_DIRECTION      0x00000002  // Direction of Rotation.
#define QEI_STAT_ERROR          0x00000001  // Error Detected.

//*****************************************************************************
//
// The following are defines for the bit fields in the QEI_O_POS register.
//
//*****************************************************************************
#define QEI_POS_M               0xFFFFFFFF  // Current Position Integrator
                                            // Value.
#define QEI_POS_S               0

//*****************************************************************************
//
// The following are defines for the bit fields in the QEI_O_MAXPOS register.
//
//*****************************************************************************
#define QEI_MAXPOS_M            0xFFFFFFFF  // Maximum Position Integrator
                                            // Value.
#define QEI_MAXPOS_S            0

//*****************************************************************************
//
// The following are defines for the bit fields in the QEI_O_LOAD register.
//
//*****************************************************************************
#define QEI_LOAD_M              0xFFFFFFFF  // Velocity Timer Load Value.
#define QEI_LOAD_S              0

//*****************************************************************************
//
// The following are defines for the bit fields in the QEI_O_TIME register.
//
//*****************************************************************************
#define QEI_TIME_M              0xFFFFFFFF  // Velocity Timer Current Value.
#define QEI_TIME_S              0

//*****************************************************************************
//
// The following are defines for the bit fields in the QEI_O_COUNT register.
//
//*****************************************************************************
#define QEI_COUNT_M             0xFFFFFFFF  // Velocity Pulse Count.
#define QEI_COUNT_S             0

//*****************************************************************************
//
// The following are defines for the bit fields in the QEI_O_SPEED register.
//
//*****************************************************************************
#define QEI_SPEED_M             0xFFFFFFFF  // Velocity.
#define QEI_SPEED_S             0

//*****************************************************************************
//
// The following are defines for the bit fields in the QEI_O_INTEN register.
//
//*****************************************************************************
#define QEI_INTEN_ERROR         0x00000008  // Phase Error Interrupt Enable.
#define QEI_INTEN_DIR           0x00000004  // Direction Change Interrupt
                                            // Enable.
#define QEI_INTEN_TIMER         0x00000002  // Timer Expires Interrupt Enable.
#define QEI_INTEN_INDEX         0x00000001  // Index Pulse Detected Interrupt
                                            // Enable.

//*****************************************************************************
//
// The following are defines for the bit fields in the QEI_O_RIS register.
//
//*****************************************************************************
#define QEI_RIS_ERROR           0x00000008  // Phase Error Detected.
#define QEI_RIS_DIR             0x00000004  // Direction Change Detected.
#define QEI_RIS_TIMER           0x00000002  // Velocity Timer Expired.
#define QEI_RIS_INDEX           0x00000001  // Index Pulse Asserted.

//*****************************************************************************
//
// The following are defines for the bit fields in the QEI_O_ISC register.
//
//*****************************************************************************
#define QEI_ISC_ERROR           0x00000008  // Phase Error Interrupt.
#define QEI_ISC_DIR             0x00000004  // Direction Change Interrupt.
#define QEI_ISC_TIMER           0x00000002  // Velocity Timer Expired
                                            // Interrupt.
#define QEI_ISC_INDEX           0x00000001  // Index Pulse Interrupt.

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
#define TIMER_TAMR_TAMR_1_SHOT  0x00000001  // One-Shot Timer mode
#define TIMER_TAMR_TAMR_PERIOD  0x00000002  // Periodic Timer mode
#define TIMER_TAMR_TAMR_CAP     0x00000003  // Capture mode

//*****************************************************************************
//
// The following are defines for the bit fields in the TIMER_O_TBMR register.
//
//*****************************************************************************
#define TIMER_TBMR_TBAMS        0x00000008  // GPTM TimerB Alternate Mode
                                            // Select.
#define TIMER_TBMR_TBCMR        0x00000004  // GPTM TimerB Capture Mode.
#define TIMER_TBMR_TBMR_M       0x00000003  // GPTM TimerB Mode.
#define TIMER_TBMR_TBMR_1_SHOT  0x00000001  // One-Shot Timer mode
#define TIMER_TBMR_TBMR_PERIOD  0x00000002  // Periodic Timer mode
#define TIMER_TBMR_TBMR_CAP     0x00000003  // Capture mode

//*****************************************************************************
//
// The following are defines for the bit fields in the TIMER_O_CTL register.
//
//*****************************************************************************
#define TIMER_CTL_TBPWML        0x00004000  // GPTM TimerB PWM Output Level.
#define TIMER_CTL_TBOTE         0x00002000  // GPTM TimerB Output Trigger
                                            // Enable.
#define TIMER_CTL_TBEVENT_M     0x00000C00  // GPTM TimerB Event Mode.
#define TIMER_CTL_TBEVENT_POS   0x00000000  // Positive edge
#define TIMER_CTL_TBEVENT_NEG   0x00000400  // Negative edge
#define TIMER_CTL_TBEVENT_BOTH  0x00000C00  // Both edges
#define TIMER_CTL_TBSTALL       0x00000200  // GPTM TimerB Stall Enable.
#define TIMER_CTL_TBEN          0x00000100  // GPTM TimerB Enable.
#define TIMER_CTL_TAPWML        0x00000040  // GPTM TimerA PWM Output Level.
#define TIMER_CTL_TAOTE         0x00000020  // GPTM TimerA Output Trigger
                                            // Enable.
#define TIMER_CTL_RTCEN         0x00000010  // GPTM RTC Enable.
#define TIMER_CTL_TAEVENT_M     0x0000000C  // GPTM TimerA Event Mode.
#define TIMER_CTL_TAEVENT_POS   0x00000000  // Positive edge
#define TIMER_CTL_TAEVENT_NEG   0x00000004  // Negative edge
#define TIMER_CTL_TAEVENT_BOTH  0x0000000C  // Both edges
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
// The following are defines for the bit fields in the ADC_O_ACTSS register.
//
//*****************************************************************************
#define ADC_ACTSS_ASEN3         0x00000008  // ADC SS3 Enable.
#define ADC_ACTSS_ASEN2         0x00000004  // ADC SS2 Enable.
#define ADC_ACTSS_ASEN1         0x00000002  // ADC SS1 Enable.
#define ADC_ACTSS_ASEN0         0x00000001  // ADC SS0 Enable.

//*****************************************************************************
//
// The following are defines for the bit fields in the ADC_O_RIS register.
//
//*****************************************************************************
#define ADC_RIS_INR3            0x00000008  // SS3 Raw Interrupt Status.
#define ADC_RIS_INR2            0x00000004  // SS2 Raw Interrupt Status.
#define ADC_RIS_INR1            0x00000002  // SS1 Raw Interrupt Status.
#define ADC_RIS_INR0            0x00000001  // SS0 Raw Interrupt Status.

//*****************************************************************************
//
// The following are defines for the bit fields in the ADC_O_IM register.
//
//*****************************************************************************
#define ADC_IM_MASK3            0x00000008  // SS3 Interrupt Mask.
#define ADC_IM_MASK2            0x00000004  // SS2 Interrupt Mask.
#define ADC_IM_MASK1            0x00000002  // SS1 Interrupt Mask.
#define ADC_IM_MASK0            0x00000001  // SS0 Interrupt Mask.

//*****************************************************************************
//
// The following are defines for the bit fields in the ADC_O_ISC register.
//
//*****************************************************************************
#define ADC_ISC_IN3             0x00000008  // SS3 Interrupt Status and Clear.
#define ADC_ISC_IN2             0x00000004  // SS2 Interrupt Status and Clear.
#define ADC_ISC_IN1             0x00000002  // SS1 Interrupt Status and Clear.
#define ADC_ISC_IN0             0x00000001  // SS0 Interrupt Status and Clear.

//*****************************************************************************
//
// The following are defines for the bit fields in the ADC_O_OSTAT register.
//
//*****************************************************************************
#define ADC_OSTAT_OV3           0x00000008  // SS3 FIFO Overflow.
#define ADC_OSTAT_OV2           0x00000004  // SS2 FIFO Overflow.
#define ADC_OSTAT_OV1           0x00000002  // SS1 FIFO Overflow.
#define ADC_OSTAT_OV0           0x00000001  // SS0 FIFO Overflow.

//*****************************************************************************
//
// The following are defines for the bit fields in the ADC_O_EMUX register.
//
//*****************************************************************************
#define ADC_EMUX_EM3_M          0x0000F000  // SS3 Trigger Select.
#define ADC_EMUX_EM3_PROCESSOR  0x00000000  // Controller (default)
#define ADC_EMUX_EM3_EXTERNAL   0x00004000  // External (GPIO PB4)
#define ADC_EMUX_EM3_TIMER      0x00005000  // Timer
#define ADC_EMUX_EM3_PWM0       0x00006000  // PWM0
#define ADC_EMUX_EM3_PWM1       0x00007000  // PWM1
#define ADC_EMUX_EM3_PWM2       0x00008000  // PWM2
#define ADC_EMUX_EM3_ALWAYS     0x0000F000  // Always (continuously sample)
#define ADC_EMUX_EM2_M          0x00000F00  // SS2 Trigger Select.
#define ADC_EMUX_EM2_PROCESSOR  0x00000000  // Controller (default)
#define ADC_EMUX_EM2_EXTERNAL   0x00000400  // External (GPIO PB4)
#define ADC_EMUX_EM2_TIMER      0x00000500  // Timer
#define ADC_EMUX_EM2_PWM0       0x00000600  // PWM0
#define ADC_EMUX_EM2_PWM1       0x00000700  // PWM1
#define ADC_EMUX_EM2_PWM2       0x00000800  // PWM2
#define ADC_EMUX_EM2_ALWAYS     0x00000F00  // Always (continuously sample)
#define ADC_EMUX_EM1_M          0x000000F0  // SS1 Trigger Select.
#define ADC_EMUX_EM1_PROCESSOR  0x00000000  // Controller (default)
#define ADC_EMUX_EM1_EXTERNAL   0x00000040  // External (GPIO PB4)
#define ADC_EMUX_EM1_TIMER      0x00000050  // Timer
#define ADC_EMUX_EM1_PWM0       0x00000060  // PWM0
#define ADC_EMUX_EM1_PWM1       0x00000070  // PWM1
#define ADC_EMUX_EM1_PWM2       0x00000080  // PWM2
#define ADC_EMUX_EM1_ALWAYS     0x000000F0  // Always (continuously sample)
#define ADC_EMUX_EM0_M          0x0000000F  // SS0 Trigger Select.
#define ADC_EMUX_EM0_PROCESSOR  0x00000000  // Controller (default)
#define ADC_EMUX_EM0_EXTERNAL   0x00000004  // External (GPIO PB4)
#define ADC_EMUX_EM0_TIMER      0x00000005  // Timer
#define ADC_EMUX_EM0_PWM0       0x00000006  // PWM0
#define ADC_EMUX_EM0_PWM1       0x00000007  // PWM1
#define ADC_EMUX_EM0_PWM2       0x00000008  // PWM2
#define ADC_EMUX_EM0_ALWAYS     0x0000000F  // Always (continuously sample)

//*****************************************************************************
//
// The following are defines for the bit fields in the ADC_O_USTAT register.
//
//*****************************************************************************
#define ADC_USTAT_UV3           0x00000008  // SS3 FIFO Underflow.
#define ADC_USTAT_UV2           0x00000004  // SS2 FIFO Underflow.
#define ADC_USTAT_UV1           0x00000002  // SS1 FIFO Underflow.
#define ADC_USTAT_UV0           0x00000001  // SS0 FIFO Underflow.

//*****************************************************************************
//
// The following are defines for the bit fields in the ADC_O_SSPRI register.
//
//*****************************************************************************
#define ADC_SSPRI_SS3_M         0x00003000  // SS3 Priority.
#define ADC_SSPRI_SS3_1ST       0x00000000  // First priority
#define ADC_SSPRI_SS3_2ND       0x00001000  // Second priority
#define ADC_SSPRI_SS3_3RD       0x00002000  // Third priority
#define ADC_SSPRI_SS3_4TH       0x00003000  // Fourth priority
#define ADC_SSPRI_SS2_M         0x00000300  // SS2 Priority.
#define ADC_SSPRI_SS2_1ST       0x00000000  // First priority
#define ADC_SSPRI_SS2_2ND       0x00000100  // Second priority
#define ADC_SSPRI_SS2_3RD       0x00000200  // Third priority
#define ADC_SSPRI_SS2_4TH       0x00000300  // Fourth priority
#define ADC_SSPRI_SS1_M         0x00000030  // SS1 Priority.
#define ADC_SSPRI_SS1_1ST       0x00000000  // First priority
#define ADC_SSPRI_SS1_2ND       0x00000010  // Second priority
#define ADC_SSPRI_SS1_3RD       0x00000020  // Third priority
#define ADC_SSPRI_SS1_4TH       0x00000030  // Fourth priority
#define ADC_SSPRI_SS0_M         0x00000003  // SS0 Priority.
#define ADC_SSPRI_SS0_1ST       0x00000000  // First priority
#define ADC_SSPRI_SS0_2ND       0x00000001  // Second priority
#define ADC_SSPRI_SS0_3RD       0x00000002  // Third priority
#define ADC_SSPRI_SS0_4TH       0x00000003  // Fourth priority

//*****************************************************************************
//
// The following are defines for the bit fields in the ADC_O_PSSI register.
//
//*****************************************************************************
#define ADC_PSSI_SS3            0x00000008  // SS3 Initiate.
#define ADC_PSSI_SS2            0x00000004  // SS2 Initiate.
#define ADC_PSSI_SS1            0x00000002  // SS1 Initiate.
#define ADC_PSSI_SS0            0x00000001  // SS0 Initiate.

//*****************************************************************************
//
// The following are defines for the bit fields in the ADC_O_SAC register.
//
//*****************************************************************************
#define ADC_SAC_AVG_M           0x00000007  // Hardware Averaging Control.
#define ADC_SAC_AVG_OFF         0x00000000  // No hardware oversampling
#define ADC_SAC_AVG_2X          0x00000001  // 2x hardware oversampling
#define ADC_SAC_AVG_4X          0x00000002  // 4x hardware oversampling
#define ADC_SAC_AVG_8X          0x00000003  // 8x hardware oversampling
#define ADC_SAC_AVG_16X         0x00000004  // 16x hardware oversampling
#define ADC_SAC_AVG_32X         0x00000005  // 32x hardware oversampling
#define ADC_SAC_AVG_64X         0x00000006  // 64x hardware oversampling

//*****************************************************************************
//
// The following are defines for the bit fields in the ADC_O_SSMUX0 register.
//
//*****************************************************************************
#define ADC_SSMUX0_MUX7_M       0x70000000  // 8th Sample Input Select.
#define ADC_SSMUX0_MUX6_M       0x07000000  // 7th Sample Input Select.
#define ADC_SSMUX0_MUX5_M       0x00700000  // 6th Sample Input Select.
#define ADC_SSMUX0_MUX4_M       0x00070000  // 5th Sample Input Select.
#define ADC_SSMUX0_MUX3_M       0x00007000  // 4th Sample Input Select.
#define ADC_SSMUX0_MUX2_M       0x00000700  // 3rd Sample Input Select.
#define ADC_SSMUX0_MUX1_M       0x00000070  // 2nd Sample Input Select.
#define ADC_SSMUX0_MUX0_M       0x00000007  // 1st Sample Input Select.
#define ADC_SSMUX0_MUX7_S       28
#define ADC_SSMUX0_MUX6_S       24
#define ADC_SSMUX0_MUX5_S       20
#define ADC_SSMUX0_MUX4_S       16
#define ADC_SSMUX0_MUX3_S       12
#define ADC_SSMUX0_MUX2_S       8
#define ADC_SSMUX0_MUX1_S       4
#define ADC_SSMUX0_MUX0_S       0

//*****************************************************************************
//
// The following are defines for the bit fields in the ADC_O_SSCTL0 register.
//
//*****************************************************************************
#define ADC_SSCTL0_TS7          0x80000000  // 8th Sample Temp Sensor Select.
#define ADC_SSCTL0_IE7          0x40000000  // 8th Sample Interrupt Enable.
#define ADC_SSCTL0_END7         0x20000000  // 8th Sample is End of Sequence.
#define ADC_SSCTL0_D7           0x10000000  // 8th Sample Diff Input Select.
#define ADC_SSCTL0_TS6          0x08000000  // 7th Sample Temp Sensor Select.
#define ADC_SSCTL0_IE6          0x04000000  // 7th Sample Interrupt Enable.
#define ADC_SSCTL0_END6         0x02000000  // 7th Sample is End of Sequence.
#define ADC_SSCTL0_D6           0x01000000  // 7th Sample Diff Input Select.
#define ADC_SSCTL0_TS5          0x00800000  // 6th Sample Temp Sensor Select.
#define ADC_SSCTL0_IE5          0x00400000  // 6th Sample Interrupt Enable.
#define ADC_SSCTL0_END5         0x00200000  // 6th Sample is End of Sequence.
#define ADC_SSCTL0_D5           0x00100000  // 6th Sample Diff Input Select.
#define ADC_SSCTL0_TS4          0x00080000  // 5th Sample Temp Sensor Select.
#define ADC_SSCTL0_IE4          0x00040000  // 5th Sample Interrupt Enable.
#define ADC_SSCTL0_END4         0x00020000  // 5th Sample is End of Sequence.
#define ADC_SSCTL0_D4           0x00010000  // 5th Sample Diff Input Select.
#define ADC_SSCTL0_TS3          0x00008000  // 4th Sample Temp Sensor Select.
#define ADC_SSCTL0_IE3          0x00004000  // 4th Sample Interrupt Enable.
#define ADC_SSCTL0_END3         0x00002000  // 4th Sample is End of Sequence.
#define ADC_SSCTL0_D3           0x00001000  // 4th Sample Diff Input Select.
#define ADC_SSCTL0_TS2          0x00000800  // 3rd Sample Temp Sensor Select.
#define ADC_SSCTL0_IE2          0x00000400  // 3rd Sample Interrupt Enable.
#define ADC_SSCTL0_END2         0x00000200  // 3rd Sample is End of Sequence.
#define ADC_SSCTL0_D2           0x00000100  // 3rd Sample Diff Input Select.
#define ADC_SSCTL0_TS1          0x00000080  // 2nd Sample Temp Sensor Select.
#define ADC_SSCTL0_IE1          0x00000040  // 2nd Sample Interrupt Enable.
#define ADC_SSCTL0_END1         0x00000020  // 2nd Sample is End of Sequence.
#define ADC_SSCTL0_D1           0x00000010  // 2nd Sample Diff Input Select.
#define ADC_SSCTL0_TS0          0x00000008  // 1st Sample Temp Sensor Select.
#define ADC_SSCTL0_IE0          0x00000004  // 1st Sample Interrupt Enable.
#define ADC_SSCTL0_END0         0x00000002  // 1st Sample is End of Sequence.
#define ADC_SSCTL0_D0           0x00000001  // 1st Sample Diff Input Select.

//*****************************************************************************
//
// The following are defines for the bit fields in the ADC_O_SSFIFO0 register.
//
//*****************************************************************************
#define ADC_SSFIFO0_DATA_M      0x000003FF  // Conversion Result Data.
#define ADC_SSFIFO0_DATA_S      0

//*****************************************************************************
//
// The following are defines for the bit fields in the ADC_O_SSFSTAT0 register.
//
//*****************************************************************************
#define ADC_SSFSTAT0_FULL       0x00001000  // FIFO Full.
#define ADC_SSFSTAT0_EMPTY      0x00000100  // FIFO Empty.
#define ADC_SSFSTAT0_HPTR_M     0x000000F0  // FIFO Head Pointer.
#define ADC_SSFSTAT0_TPTR_M     0x0000000F  // FIFO Tail Pointer.
#define ADC_SSFSTAT0_HPTR_S     4
#define ADC_SSFSTAT0_TPTR_S     0

//*****************************************************************************
//
// The following are defines for the bit fields in the ADC_O_SSMUX1 register.
//
//*****************************************************************************
#define ADC_SSMUX1_MUX3_M       0x00007000  // 4th Sample Input Select.
#define ADC_SSMUX1_MUX2_M       0x00000700  // 3rd Sample Input Select.
#define ADC_SSMUX1_MUX1_M       0x00000070  // 2nd Sample Input Select.
#define ADC_SSMUX1_MUX0_M       0x00000007  // 1st Sample Input Select.
#define ADC_SSMUX1_MUX3_S       12
#define ADC_SSMUX1_MUX2_S       8
#define ADC_SSMUX1_MUX1_S       4
#define ADC_SSMUX1_MUX0_S       0

//*****************************************************************************
//
// The following are defines for the bit fields in the ADC_O_SSCTL1 register.
//
//*****************************************************************************
#define ADC_SSCTL1_TS3          0x00008000  // 4th Sample Temp Sensor Select.
#define ADC_SSCTL1_IE3          0x00004000  // 4th Sample Interrupt Enable.
#define ADC_SSCTL1_END3         0x00002000  // 4th Sample is End of Sequence.
#define ADC_SSCTL1_D3           0x00001000  // 4th Sample Diff Input Select.
#define ADC_SSCTL1_TS2          0x00000800  // 3rd Sample Temp Sensor Select.
#define ADC_SSCTL1_IE2          0x00000400  // 3rd Sample Interrupt Enable.
#define ADC_SSCTL1_END2         0x00000200  // 3rd Sample is End of Sequence.
#define ADC_SSCTL1_D2           0x00000100  // 3rd Sample Diff Input Select.
#define ADC_SSCTL1_TS1          0x00000080  // 2nd Sample Temp Sensor Select.
#define ADC_SSCTL1_IE1          0x00000040  // 2nd Sample Interrupt Enable.
#define ADC_SSCTL1_END1         0x00000020  // 2nd Sample is End of Sequence.
#define ADC_SSCTL1_D1           0x00000010  // 2nd Sample Diff Input Select.
#define ADC_SSCTL1_TS0          0x00000008  // 1st Sample Temp Sensor Select.
#define ADC_SSCTL1_IE0          0x00000004  // 1st Sample Interrupt Enable.
#define ADC_SSCTL1_END0         0x00000002  // 1st Sample is End of Sequence.
#define ADC_SSCTL1_D0           0x00000001  // 1st Sample Diff Input Select.

//*****************************************************************************
//
// The following are defines for the bit fields in the ADC_O_SSFIFO1 register.
//
//*****************************************************************************
#define ADC_SSFIFO1_DATA_M      0x000003FF  // Conversion Result Data.
#define ADC_SSFIFO1_DATA_S      0

//*****************************************************************************
//
// The following are defines for the bit fields in the ADC_O_SSFSTAT1 register.
//
//*****************************************************************************
#define ADC_SSFSTAT1_FULL       0x00001000  // FIFO Full.
#define ADC_SSFSTAT1_EMPTY      0x00000100  // FIFO Empty.
#define ADC_SSFSTAT1_HPTR_M     0x000000F0  // FIFO Head Pointer.
#define ADC_SSFSTAT1_TPTR_M     0x0000000F  // FIFO Tail Pointer.
#define ADC_SSFSTAT1_HPTR_S     4
#define ADC_SSFSTAT1_TPTR_S     0

//*****************************************************************************
//
// The following are defines for the bit fields in the ADC_O_SSMUX2 register.
//
//*****************************************************************************
#define ADC_SSMUX2_MUX3_M       0x00007000  // 4th Sample Input Select.
#define ADC_SSMUX2_MUX2_M       0x00000700  // 3rd Sample Input Select.
#define ADC_SSMUX2_MUX1_M       0x00000070  // 2nd Sample Input Select.
#define ADC_SSMUX2_MUX0_M       0x00000007  // 1st Sample Input Select.
#define ADC_SSMUX2_MUX3_S       12
#define ADC_SSMUX2_MUX2_S       8
#define ADC_SSMUX2_MUX1_S       4
#define ADC_SSMUX2_MUX0_S       0

//*****************************************************************************
//
// The following are defines for the bit fields in the ADC_O_SSCTL2 register.
//
//*****************************************************************************
#define ADC_SSCTL2_TS3          0x00008000  // 4th Sample Temp Sensor Select.
#define ADC_SSCTL2_IE3          0x00004000  // 4th Sample Interrupt Enable.
#define ADC_SSCTL2_END3         0x00002000  // 4th Sample is End of Sequence.
#define ADC_SSCTL2_D3           0x00001000  // 4th Sample Diff Input Select.
#define ADC_SSCTL2_TS2          0x00000800  // 3rd Sample Temp Sensor Select.
#define ADC_SSCTL2_IE2          0x00000400  // 3rd Sample Interrupt Enable.
#define ADC_SSCTL2_END2         0x00000200  // 3rd Sample is End of Sequence.
#define ADC_SSCTL2_D2           0x00000100  // 3rd Sample Diff Input Select.
#define ADC_SSCTL2_TS1          0x00000080  // 2nd Sample Temp Sensor Select.
#define ADC_SSCTL2_IE1          0x00000040  // 2nd Sample Interrupt Enable.
#define ADC_SSCTL2_END1         0x00000020  // 2nd Sample is End of Sequence.
#define ADC_SSCTL2_D1           0x00000010  // 2nd Sample Diff Input Select.
#define ADC_SSCTL2_TS0          0x00000008  // 1st Sample Temp Sensor Select.
#define ADC_SSCTL2_IE0          0x00000004  // 1st Sample Interrupt Enable.
#define ADC_SSCTL2_END0         0x00000002  // 1st Sample is End of Sequence.
#define ADC_SSCTL2_D0           0x00000001  // 1st Sample Diff Input Select.

//*****************************************************************************
//
// The following are defines for the bit fields in the ADC_O_SSFIFO2 register.
//
//*****************************************************************************
#define ADC_SSFIFO2_DATA_M      0x000003FF  // Conversion Result Data.
#define ADC_SSFIFO2_DATA_S      0

//*****************************************************************************
//
// The following are defines for the bit fields in the ADC_O_SSFSTAT2 register.
//
//*****************************************************************************
#define ADC_SSFSTAT2_FULL       0x00001000  // FIFO Full.
#define ADC_SSFSTAT2_EMPTY      0x00000100  // FIFO Empty.
#define ADC_SSFSTAT2_HPTR_M     0x000000F0  // FIFO Head Pointer.
#define ADC_SSFSTAT2_TPTR_M     0x0000000F  // FIFO Tail Pointer.
#define ADC_SSFSTAT2_HPTR_S     4
#define ADC_SSFSTAT2_TPTR_S     0

//*****************************************************************************
//
// The following are defines for the bit fields in the ADC_O_SSMUX3 register.
//
//*****************************************************************************
#define ADC_SSMUX3_MUX0_M       0x00000007  // 1st Sample Input Select.
#define ADC_SSMUX3_MUX0_S       0

//*****************************************************************************
//
// The following are defines for the bit fields in the ADC_O_SSCTL3 register.
//
//*****************************************************************************
#define ADC_SSCTL3_TS0          0x00000008  // 1st Sample Temp Sensor Select.
#define ADC_SSCTL3_IE0          0x00000004  // 1st Sample Interrupt Enable.
#define ADC_SSCTL3_END0         0x00000002  // 1st Sample is End of Sequence.
#define ADC_SSCTL3_D0           0x00000001  // 1st Sample Diff Input Select.

//*****************************************************************************
//
// The following are defines for the bit fields in the ADC_O_SSFIFO3 register.
//
//*****************************************************************************
#define ADC_SSFIFO3_DATA_M      0x000003FF  // Conversion Result Data.
#define ADC_SSFIFO3_DATA_S      0

//*****************************************************************************
//
// The following are defines for the bit fields in the ADC_O_SSFSTAT3 register.
//
//*****************************************************************************
#define ADC_SSFSTAT3_FULL       0x00001000  // FIFO Full.
#define ADC_SSFSTAT3_EMPTY      0x00000100  // FIFO Empty.
#define ADC_SSFSTAT3_HPTR_M     0x000000F0  // FIFO Head Pointer.
#define ADC_SSFSTAT3_TPTR_M     0x0000000F  // FIFO Tail Pointer.
#define ADC_SSFSTAT3_HPTR_S     4
#define ADC_SSFSTAT3_TPTR_S     0

//*****************************************************************************
//
// The following are defines for the bit fields in the CAN_O_CTL register.
//
//*****************************************************************************
#define CAN_CTL_TEST            0x00000080  // Test Mode Enable.
#define CAN_CTL_CCE             0x00000040  // Configuration Change Enable.
#define CAN_CTL_DAR             0x00000020  // Disable Automatic
                                            // Retransmission.
#define CAN_CTL_EIE             0x00000008  // Error Interrupt Enable.
#define CAN_CTL_SIE             0x00000004  // Status Interrupt Enable.
#define CAN_CTL_IE              0x00000002  // CAN Interrupt Enable.
#define CAN_CTL_INIT            0x00000001  // Initialization.

//*****************************************************************************
//
// The following are defines for the bit fields in the CAN_O_STS register.
//
//*****************************************************************************
#define CAN_STS_BOFF            0x00000080  // Bus-Off Status.
#define CAN_STS_EWARN           0x00000040  // Warning Status.
#define CAN_STS_EPASS           0x00000020  // Error Passive.
#define CAN_STS_RXOK            0x00000010  // Received a Message Successfully.
#define CAN_STS_TXOK            0x00000008  // Transmitted a Message
                                            // Successfully.
#define CAN_STS_LEC_M           0x00000007  // Last Error Code.
#define CAN_STS_LEC_NONE        0x00000000  // No Error
#define CAN_STS_LEC_STUFF       0x00000001  // Stuff Error
#define CAN_STS_LEC_FORM        0x00000002  // Format Error
#define CAN_STS_LEC_ACK         0x00000003  // ACK Error
#define CAN_STS_LEC_BIT1        0x00000004  // Bit 1 Error
#define CAN_STS_LEC_BIT0        0x00000005  // Bit 0 Error
#define CAN_STS_LEC_CRC         0x00000006  // CRC Error
#define CAN_STS_LEC_NOEVENT     0x00000007  // Unused

//*****************************************************************************
//
// The following are defines for the bit fields in the CAN_O_ERR register.
//
//*****************************************************************************
#define CAN_ERR_RP              0x00008000  // Received Error Passive.
#define CAN_ERR_REC_M           0x00007F00  // Receive Error Counter.
#define CAN_ERR_TEC_M           0x000000FF  // Transmit Error Counter.
#define CAN_ERR_REC_S           8
#define CAN_ERR_TEC_S           0

//*****************************************************************************
//
// The following are defines for the bit fields in the CAN_O_BIT register.
//
//*****************************************************************************
#define CAN_BIT_TSEG2_M         0x00007000  // Time Segment after Sample Point.
#define CAN_BIT_TSEG1_M         0x00000F00  // Time Segment Before Sample
                                            // Point.
#define CAN_BIT_SJW_M           0x000000C0  // (Re)Synchronization Jump Width.
#define CAN_BIT_BRP_M           0x0000003F  // Baud Rate Prescalar.
#define CAN_BIT_TSEG2_S         12
#define CAN_BIT_TSEG1_S         8
#define CAN_BIT_SJW_S           6
#define CAN_BIT_BRP_S           0

//*****************************************************************************
//
// The following are defines for the bit fields in the CAN_O_INT register.
//
//*****************************************************************************
#define CAN_INT_INTID_M         0x0000FFFF  // Interrupt Identifier.
#define CAN_INT_INTID_NONE      0x00000000  // No interrupt pending
#define CAN_INT_INTID_STATUS    0x00008000  // Status Interrupt

//*****************************************************************************
//
// The following are defines for the bit fields in the CAN_O_TST register.
//
//*****************************************************************************
#define CAN_TST_RX              0x00000080  // Receive Observation.
#define CAN_TST_TX_M            0x00000060  // Transmit Control.
#define CAN_TST_TX_CANCTL       0x00000000  // CANnTx is controlled by the CAN
                                            // module
#define CAN_TST_TX_SAMPLE       0x00000020  // Sample Point signal driven on
                                            // the CANnTx pin
#define CAN_TST_TX_DOMINANT     0x00000040  // CANnTx drives a Low value
#define CAN_TST_TX_RECESSIVE    0x00000060  // CANnTx drives a High value
#define CAN_TST_LBACK           0x00000010  // Loopback Mode.
#define CAN_TST_SILENT          0x00000008  // Silent Mode.
#define CAN_TST_BASIC           0x00000004  // Basic Mode.

//*****************************************************************************
//
// The following are defines for the bit fields in the CAN_O_BRPE register.
//
//*****************************************************************************
#define CAN_BRPE_BRPE_M         0x0000000F  // Baud Rate Prescalar Extension.
#define CAN_BRPE_BRPE_S         0

//*****************************************************************************
//
// The following are defines for the bit fields in the CAN_O_IF1CRQ register.
//
//*****************************************************************************
#define CAN_IF1CRQ_BUSY         0x00008000  // Busy Flag.
#define CAN_IF1CRQ_MNUM_M       0x0000003F  // Message Number.
#define CAN_IF1CRQ_MNUM_RSVD    0x00000000  // 0 is not a valid message number;
                                            // it is interpreted as 0x20, or
                                            // object 32.

//*****************************************************************************
//
// The following are defines for the bit fields in the CAN_O_IF1CMSK register.
//
//*****************************************************************************
#define CAN_IF1CMSK_WRNRD       0x00000080  // Write, Not Read.
#define CAN_IF1CMSK_MASK        0x00000040  // Access Mask Bits.
#define CAN_IF1CMSK_ARB         0x00000020  // Access Arbitration Bits.
#define CAN_IF1CMSK_CONTROL     0x00000010  // Access Control Bits.
#define CAN_IF1CMSK_CLRINTPND   0x00000008  // Clear Interrupt Pending Bit.
#define CAN_IF1CMSK_NEWDAT      0x00000004  // Access New Data.
#define CAN_IF1CMSK_TXRQST      0x00000004  // Access Transmission Request Bit.
#define CAN_IF1CMSK_DATAA       0x00000002  // Access Data Byte 0 to 3.
#define CAN_IF1CMSK_DATAB       0x00000001  // Access Data Byte 4 to 7.

//*****************************************************************************
//
// The following are defines for the bit fields in the CAN_O_IF1MSK1 register.
//
//*****************************************************************************
#define CAN_IF1MSK1_IDMSK_M     0x0000FFFF  // Identifier Mask.
#define CAN_IF1MSK1_IDMSK_S     0

//*****************************************************************************
//
// The following are defines for the bit fields in the CAN_O_IF1MSK2 register.
//
//*****************************************************************************
#define CAN_IF1MSK2_MXTD        0x00008000  // Mask Extended Identifier.
#define CAN_IF1MSK2_MDIR        0x00004000  // Mask Message Direction.
#define CAN_IF1MSK2_IDMSK_M     0x00001FFF  // Identifier Mask.
#define CAN_IF1MSK2_IDMSK_S     0

//*****************************************************************************
//
// The following are defines for the bit fields in the CAN_O_IF1ARB1 register.
//
//*****************************************************************************
#define CAN_IF1ARB1_ID_M        0x0000FFFF  // Message Identifier.
#define CAN_IF1ARB1_ID_S        0

//*****************************************************************************
//
// The following are defines for the bit fields in the CAN_O_IF1ARB2 register.
//
//*****************************************************************************
#define CAN_IF1ARB2_MSGVAL      0x00008000  // Message Valid.
#define CAN_IF1ARB2_XTD         0x00004000  // Extended Identifier.
#define CAN_IF1ARB2_DIR         0x00002000  // Message Direction.
#define CAN_IF1ARB2_ID_M        0x00001FFF  // Message Identifier.
#define CAN_IF1ARB2_ID_S        0

//*****************************************************************************
//
// The following are defines for the bit fields in the CAN_O_IF1MCTL register.
//
//*****************************************************************************
#define CAN_IF1MCTL_NEWDAT      0x00008000  // New Data.
#define CAN_IF1MCTL_MSGLST      0x00004000  // Message Lost.
#define CAN_IF1MCTL_INTPND      0x00002000  // Interrupt Pending.
#define CAN_IF1MCTL_UMASK       0x00001000  // Use Acceptance Mask.
#define CAN_IF1MCTL_TXIE        0x00000800  // Transmit Interrupt Enable.
#define CAN_IF1MCTL_RXIE        0x00000400  // Receive Interrupt Enable.
#define CAN_IF1MCTL_RMTEN       0x00000200  // Remote Enable.
#define CAN_IF1MCTL_TXRQST      0x00000100  // Transmit Request.
#define CAN_IF1MCTL_EOB         0x00000080  // End of Buffer.
#define CAN_IF1MCTL_DLC_M       0x0000000F  // Data Length Code.
#define CAN_IF1MCTL_DLC_S       0

//*****************************************************************************
//
// The following are defines for the bit fields in the CAN_O_IF1DA1 register.
//
//*****************************************************************************
#define CAN_IF1DA1_DATA_M       0x0000FFFF  // Data.
#define CAN_IF1DA1_DATA_S       0

//*****************************************************************************
//
// The following are defines for the bit fields in the CAN_O_IF1DA2 register.
//
//*****************************************************************************
#define CAN_IF1DA2_DATA_M       0x0000FFFF  // Data.
#define CAN_IF1DA2_DATA_S       0

//*****************************************************************************
//
// The following are defines for the bit fields in the CAN_O_IF1DB1 register.
//
//*****************************************************************************
#define CAN_IF1DB1_DATA_M       0x0000FFFF  // Data.
#define CAN_IF1DB1_DATA_S       0

//*****************************************************************************
//
// The following are defines for the bit fields in the CAN_O_IF1DB2 register.
//
//*****************************************************************************
#define CAN_IF1DB2_DATA_M       0x0000FFFF  // Data.
#define CAN_IF1DB2_DATA_S       0

//*****************************************************************************
//
// The following are defines for the bit fields in the CAN_O_IF2CRQ register.
//
//*****************************************************************************
#define CAN_IF2CRQ_BUSY         0x00008000  // Busy Flag.
#define CAN_IF2CRQ_MNUM_M       0x0000003F  // Message Number.
#define CAN_IF2CRQ_MNUM_RSVD    0x00000000  // 0 is not a valid message number;
                                            // it is interpreted as 0x20, or
                                            // object 32.

//*****************************************************************************
//
// The following are defines for the bit fields in the CAN_O_IF2CMSK register.
//
//*****************************************************************************
#define CAN_IF2CMSK_WRNRD       0x00000080  // Write, Not Read.
#define CAN_IF2CMSK_MASK        0x00000040  // Access Mask Bits.
#define CAN_IF2CMSK_ARB         0x00000020  // Access Arbitration Bits.
#define CAN_IF2CMSK_CONTROL     0x00000010  // Access Control Bits.
#define CAN_IF2CMSK_CLRINTPND   0x00000008  // Clear Interrupt Pending Bit.
#define CAN_IF2CMSK_NEWDAT      0x00000004  // Access New Data.
#define CAN_IF2CMSK_TXRQST      0x00000004  // Access Transmission Request Bit.
#define CAN_IF2CMSK_DATAA       0x00000002  // Access Data Byte 0 to 3.
#define CAN_IF2CMSK_DATAB       0x00000001  // Access Data Byte 4 to 7.

//*****************************************************************************
//
// The following are defines for the bit fields in the CAN_O_IF2MSK1 register.
//
//*****************************************************************************
#define CAN_IF2MSK1_IDMSK_M     0x0000FFFF  // Identifier Mask.
#define CAN_IF2MSK1_IDMSK_S     0

//*****************************************************************************
//
// The following are defines for the bit fields in the CAN_O_IF2MSK2 register.
//
//*****************************************************************************
#define CAN_IF2MSK2_MXTD        0x00008000  // Mask Extended Identifier.
#define CAN_IF2MSK2_MDIR        0x00004000  // Mask Message Direction.
#define CAN_IF2MSK2_IDMSK_M     0x00001FFF  // Identifier Mask.
#define CAN_IF2MSK2_IDMSK_S     0

//*****************************************************************************
//
// The following are defines for the bit fields in the CAN_O_IF2ARB1 register.
//
//*****************************************************************************
#define CAN_IF2ARB1_ID_M        0x0000FFFF  // Message Identifier.
#define CAN_IF2ARB1_ID_S        0

//*****************************************************************************
//
// The following are defines for the bit fields in the CAN_O_IF2ARB2 register.
//
//*****************************************************************************
#define CAN_IF2ARB2_MSGVAL      0x00008000  // Message Valid.
#define CAN_IF2ARB2_XTD         0x00004000  // Extended Identifier.
#define CAN_IF2ARB2_DIR         0x00002000  // Message Direction.
#define CAN_IF2ARB2_ID_M        0x00001FFF  // Message Identifier.
#define CAN_IF2ARB2_ID_S        0

//*****************************************************************************
//
// The following are defines for the bit fields in the CAN_O_IF2MCTL register.
//
//*****************************************************************************
#define CAN_IF2MCTL_NEWDAT      0x00008000  // New Data.
#define CAN_IF2MCTL_MSGLST      0x00004000  // Message Lost.
#define CAN_IF2MCTL_INTPND      0x00002000  // Interrupt Pending.
#define CAN_IF2MCTL_UMASK       0x00001000  // Use Acceptance Mask.
#define CAN_IF2MCTL_TXIE        0x00000800  // Transmit Interrupt Enable.
#define CAN_IF2MCTL_RXIE        0x00000400  // Receive Interrupt Enable.
#define CAN_IF2MCTL_RMTEN       0x00000200  // Remote Enable.
#define CAN_IF2MCTL_TXRQST      0x00000100  // Transmit Request.
#define CAN_IF2MCTL_EOB         0x00000080  // End of Buffer.
#define CAN_IF2MCTL_DLC_M       0x0000000F  // Data Length Code.
#define CAN_IF2MCTL_DLC_S       0

//*****************************************************************************
//
// The following are defines for the bit fields in the CAN_O_IF2DA1 register.
//
//*****************************************************************************
#define CAN_IF2DA1_DATA_M       0x0000FFFF  // Data.
#define CAN_IF2DA1_DATA_S       0

//*****************************************************************************
//
// The following are defines for the bit fields in the CAN_O_IF2DA2 register.
//
//*****************************************************************************
#define CAN_IF2DA2_DATA_M       0x0000FFFF  // Data.
#define CAN_IF2DA2_DATA_S       0

//*****************************************************************************
//
// The following are defines for the bit fields in the CAN_O_IF2DB1 register.
//
//*****************************************************************************
#define CAN_IF2DB1_DATA_M       0x0000FFFF  // Data.
#define CAN_IF2DB1_DATA_S       0

//*****************************************************************************
//
// The following are defines for the bit fields in the CAN_O_IF2DB2 register.
//
//*****************************************************************************
#define CAN_IF2DB2_DATA_M       0x0000FFFF  // Data.
#define CAN_IF2DB2_DATA_S       0

//*****************************************************************************
//
// The following are defines for the bit fields in the CAN_O_TXRQ1 register.
//
//*****************************************************************************
#define CAN_TXRQ1_TXRQST_M      0x0000FFFF  // Transmission Request Bits.
#define CAN_TXRQ1_TXRQST_S      0

//*****************************************************************************
//
// The following are defines for the bit fields in the CAN_O_TXRQ2 register.
//
//*****************************************************************************
#define CAN_TXRQ2_TXRQST_M      0x0000FFFF  // Transmission Request Bits.
#define CAN_TXRQ2_TXRQST_S      0

//*****************************************************************************
//
// The following are defines for the bit fields in the CAN_O_NWDA1 register.
//
//*****************************************************************************
#define CAN_NWDA1_NEWDAT_M      0x0000FFFF  // New Data Bits.
#define CAN_NWDA1_NEWDAT_S      0

//*****************************************************************************
//
// The following are defines for the bit fields in the CAN_O_NWDA2 register.
//
//*****************************************************************************
#define CAN_NWDA2_NEWDAT_M      0x0000FFFF  // New Data Bits.
#define CAN_NWDA2_NEWDAT_S      0

//*****************************************************************************
//
// The following are defines for the bit fields in the CAN_O_MSG1INT register.
//
//*****************************************************************************
#define CAN_MSG1INT_INTPND_M    0x0000FFFF  // Interrupt Pending Bits.
#define CAN_MSG1INT_INTPND_S    0

//*****************************************************************************
//
// The following are defines for the bit fields in the CAN_O_MSG2INT register.
//
//*****************************************************************************
#define CAN_MSG2INT_INTPND_M    0x0000FFFF  // Interrupt Pending Bits.
#define CAN_MSG2INT_INTPND_S    0

//*****************************************************************************
//
// The following are defines for the bit fields in the CAN_O_MSG1VAL register.
//
//*****************************************************************************
#define CAN_MSG1VAL_MSGVAL_M    0x0000FFFF  // Message Valid Bits.
#define CAN_MSG1VAL_MSGVAL_S    0

//*****************************************************************************
//
// The following are defines for the bit fields in the CAN_O_MSG2VAL register.
//
//*****************************************************************************
#define CAN_MSG2VAL_MSGVAL_M    0x0000FFFF  // Message Valid Bits.
#define CAN_MSG2VAL_MSGVAL_S    0

//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_FMA register.
//
//*****************************************************************************
#define FLASH_FMA_OFFSET_M      0x0001FFFF  // Address Offset.
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
// The following are defines for the bit fields in the FLASH_RMCTL register.
//
//*****************************************************************************
#define FLASH_RMCTL_BA          0x00000001  // Boot Alias.

//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_RMVER register.
//
//*****************************************************************************
#define FLASH_RMVER_CONT_M      0xFF000000  // ROM Contents.
#define FLASH_RMVER_CONT_LM     0x00000000  // Boot Loader & DriverLib
#define FLASH_RMVER_SIZE_M      0x00FF0000  // ROM Size.
#define FLASH_RMVER_SIZE_11K    0x00000000  // 11KB Size
#define FLASH_RMVER_VER_M       0x0000FF00  // ROM Version.
#define FLASH_RMVER_REV_M       0x000000FF  // ROM Revision.
#define FLASH_RMVER_VER_S       8
#define FLASH_RMVER_REV_S       0

//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_USECRL register.
//
//*****************************************************************************
#define FLASH_USECRL_M          0x000000FF  // Microsecond Reload Value.
#define FLASH_USECRL_S          0

//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_USERDBG register.
//
//*****************************************************************************
#define FLASH_USERDBG_NW        0x80000000  // User Debug Not Written.
#define FLASH_USERDBG_DATA_M    0x7FFFFFFC  // User Data.
#define FLASH_USERDBG_DBG1      0x00000002  // Debug Control 1.
#define FLASH_USERDBG_DBG0      0x00000001  // Debug Control 0.
#define FLASH_USERDBG_DATA_S    2

//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_USERREG0 register.
//
//*****************************************************************************
#define FLASH_USERREG0_NW       0x80000000  // Not Written.
#define FLASH_USERREG0_DATA_M   0x7FFFFFFF  // User Data.
#define FLASH_USERREG0_DATA_S   0

//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_USERREG1 register.
//
//*****************************************************************************
#define FLASH_USERREG1_NW       0x80000000  // Not Written.
#define FLASH_USERREG1_DATA_M   0x7FFFFFFF  // User Data.
#define FLASH_USERREG1_DATA_S   0

//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_USERREG2 register.
//
//*****************************************************************************
#define FLASH_USERREG2_NW       0x80000000  // Not Written.
#define FLASH_USERREG2_DATA_M   0x7FFFFFFF  // User Data.
#define FLASH_USERREG2_DATA_S   0

//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_USERREG3 register.
//
//*****************************************************************************
#define FLASH_USERREG3_NW       0x80000000  // Not Written.
#define FLASH_USERREG3_DATA_M   0x7FFFFFFF  // User Data.
#define FLASH_USERREG3_DATA_S   0

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
#define SYSCTL_DID0_VER_1       0x10000000  // Second version of the DID0
                                            // register format.
#define SYSCTL_DID0_CLASS_M     0x00FF0000  // Device Class.
#define SYSCTL_DID0_CLASS_DUSTDEVIL \
                                0x00030000  // Stellaris(r) DustDevil-class
                                            // devices
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
#define SYSCTL_DID1_VER_1       0x10000000  // Second version of the DID1
                                            // register format.
#define SYSCTL_DID1_FAM_M       0x0F000000  // Family.
#define SYSCTL_DID1_FAM_STELLARIS \
                                0x00000000  // Stellaris family of
                                            // microcontollers, that is, all
                                            // devices with external part
                                            // numbers starting
                                            // with LM3S.
#define SYSCTL_DID1_PRTNO_M     0x00FF0000  // Part Number.
#define SYSCTL_DID1_PRTNO_2678  0x00500000  // LM3S2678
#define SYSCTL_DID1_PINCNT_M    0x0000E000  // Package Pin Count.
#define SYSCTL_DID1_PINCNT_64   0x00006000  // 64-pin package
#define SYSCTL_DID1_TEMP_M      0x000000E0  // Temperature Range.
#define SYSCTL_DID1_TEMP_C      0x00000000  // Commercial temperature range (0C
                                            // to 70C)
#define SYSCTL_DID1_TEMP_I      0x00000020  // Industrial temperature range
                                            // (-40C to 85C)
#define SYSCTL_DID1_TEMP_E      0x00000040  // Extended temperature range (-40C
                                            // to 105C)
#define SYSCTL_DID1_PKG_M       0x00000018  // Package Type.
#define SYSCTL_DID1_PKG_28SOIC  0x00000000  // SOIC package
#define SYSCTL_DID1_PKG_48QFP   0x00000008  // LQFP package
#define SYSCTL_DID1_PKG_BGA     0x00000010  // BGA package
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
#define SYSCTL_DC0_SRAMSZ_32KB  0x007F0000  // 32 KB of SRAM
#define SYSCTL_DC0_FLASHSZ_M    0x0000FFFF  // Flash Size.
#define SYSCTL_DC0_FLASHSZ_128K 0x0000003F  // 128 KB of Flash
#define SYSCTL_DC0_SRAMSZ_S     16          // SRAM size shift
#define SYSCTL_DC0_FLASHSZ_S    0           // Flash size shift

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_DC1 register.
//
//*****************************************************************************
#define SYSCTL_DC1_CAN0         0x01000000  // CAN Module 0 Present.
#define SYSCTL_DC1_PWM          0x00100000  // PWM Module Present.
#define SYSCTL_DC1_ADC          0x00010000  // ADC Module Present.
#define SYSCTL_DC1_MINSYSDIV_M  0x0000F000  // System Clock Divider.
#define SYSCTL_DC1_MINSYSDIV_50 0x00003000  // Specifies a 50-MHz CPU clock
                                            // with a PLL divider of 4.
#define SYSCTL_DC1_ADCSPD_M     0x00000300  // Max ADC Speed.
#define SYSCTL_DC1_ADCSPD_500K  0x00000200  // 500K samples/second
#define SYSCTL_DC1_MPU          0x00000080  // MPU Present.
#define SYSCTL_DC1_TEMP         0x00000020  // Temp Sensor Present.
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
#define SYSCTL_DC2_TIMER3       0x00080000  // Timer 3 Present.
#define SYSCTL_DC2_TIMER2       0x00040000  // Timer 2 Present.
#define SYSCTL_DC2_TIMER1       0x00020000  // Timer 1 Present.
#define SYSCTL_DC2_TIMER0       0x00010000  // Timer 0 Present.
#define SYSCTL_DC2_QEI0         0x00000100  // QEI0 Present.
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
#define SYSCTL_DC3_ADC7         0x00800000  // ADC7 Pin Present.
#define SYSCTL_DC3_ADC6         0x00400000  // ADC6 Pin Present.
#define SYSCTL_DC3_ADC5         0x00200000  // ADC5 Pin Present.
#define SYSCTL_DC3_ADC4         0x00100000  // ADC4 Pin Present.
#define SYSCTL_DC3_ADC3         0x00080000  // ADC3 Pin Present.
#define SYSCTL_DC3_ADC2         0x00040000  // ADC2 Pin Present.
#define SYSCTL_DC3_ADC1         0x00020000  // ADC1 Pin Present.
#define SYSCTL_DC3_ADC0         0x00010000  // ADC0 Pin Present.
#define SYSCTL_DC3_PWMFAULT     0x00008000  // PWM Fault Pin Present.
#define SYSCTL_DC3_PWM3         0x00000008  // PWM3 Pin Present.
#define SYSCTL_DC3_PWM2         0x00000004  // PWM2 Pin Present.
#define SYSCTL_DC3_PWM1         0x00000002  // PWM1 Pin Present.
#define SYSCTL_DC3_PWM0         0x00000001  // PWM0 Pin Present.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_DC4 register.
//
//*****************************************************************************
#define SYSCTL_DC4_UDMA         0x00002000  // Micro-DMA is present.
#define SYSCTL_DC4_ROM          0x00001000  // Internal Code ROM is present.
#define SYSCTL_DC4_GPIOE        0x00000010  // GPIO Port E Present.
#define SYSCTL_DC4_GPIOD        0x00000008  // GPIO Port D Present.
#define SYSCTL_DC4_GPIOC        0x00000004  // GPIO Port C Present.
#define SYSCTL_DC4_GPIOB        0x00000002  // GPIO Port B Present.
#define SYSCTL_DC4_GPIOA        0x00000001  // GPIO Port A Present.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_DC5 register.
//
//*****************************************************************************
#define SYSCTL_DC5_PWMFAULT1    0x02000000  // PWM Fault 1 Pin Present.
#define SYSCTL_DC5_PWMFAULT0    0x01000000  // PWM Fault 0 Pin Present.
#define SYSCTL_DC5_PWMEFLT      0x00200000  // PWM Extended Fault feature is
                                            // active.
#define SYSCTL_DC5_PWMESYNC     0x00100000  // PWM Extended SYNC feature is
                                            // active.
#define SYSCTL_DC5_PWM3         0x00000008  // PWM3 Pin Present.
#define SYSCTL_DC5_PWM2         0x00000004  // PWM2 Pin Present.
#define SYSCTL_DC5_PWM1         0x00000002  // PWM1 Pin Present.
#define SYSCTL_DC5_PWM0         0x00000001  // PWM0 Pin Present.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_DC7 register.
//
//*****************************************************************************
#define SYSCTL_DC7_SSI0_TX      0x00000800  // SSI0 TX on uDMA Ch11.
#define SYSCTL_DC7_SSI0_RX      0x00000400  // SSI0 RX on uDMA Ch10.
#define SYSCTL_DC7_UART0_TX     0x00000200  // UART0 TX on uDMA Ch9.
#define SYSCTL_DC7_UART0_RX     0x00000100  // UART0 RX on uDMA Ch8.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_PBORCTL register.
//
//*****************************************************************************
#define SYSCTL_PBORCTL_BORIOR   0x00000002  // BOR Interrupt or Reset.

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
#define SYSCTL_SRCR0_CAN0       0x01000000  // CAN0 Reset Control.
#define SYSCTL_SRCR0_PWM        0x00100000  // PWM Reset Control.
#define SYSCTL_SRCR0_ADC        0x00010000  // ADC0 Reset Control.
#define SYSCTL_SRCR0_WDT        0x00000008  // WDT Reset Control.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_SRCR1 register.
//
//*****************************************************************************
#define SYSCTL_SRCR1_TIMER3     0x00080000  // Timer 3 Reset Control.
#define SYSCTL_SRCR1_TIMER2     0x00040000  // Timer 2 Reset Control.
#define SYSCTL_SRCR1_TIMER1     0x00020000  // Timer 1 Reset Control.
#define SYSCTL_SRCR1_TIMER0     0x00010000  // Timer 0 Reset Control.
#define SYSCTL_SRCR1_QEI0       0x00000100  // QEI0 Reset Control.
#define SYSCTL_SRCR1_SSI0       0x00000010  // SSI0 Reset Control.
#define SYSCTL_SRCR1_UART0      0x00000001  // UART0 Reset Control.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_SRCR2 register.
//
//*****************************************************************************
#define SYSCTL_SRCR2_UDMA       0x00002000  // UDMA Reset Control.
#define SYSCTL_SRCR2_GPIOE      0x00000010  // Port E Reset Control.
#define SYSCTL_SRCR2_GPIOD      0x00000008  // Port D Reset Control.
#define SYSCTL_SRCR2_GPIOC      0x00000004  // Port C Reset Control.
#define SYSCTL_SRCR2_GPIOB      0x00000002  // Port B Reset Control.
#define SYSCTL_SRCR2_GPIOA      0x00000001  // Port A Reset Control.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_RIS register.
//
//*****************************************************************************
#define SYSCTL_RIS_MOSCPUPRIS   0x00000100  // MOSC Power Up Raw Interrupt
                                            // Status.
#define SYSCTL_RIS_PLLLRIS      0x00000040  // PLL Lock Raw Interrupt Status.
#define SYSCTL_RIS_BORRIS       0x00000002  // Brown-Out Reset Raw Interrupt
                                            // Status.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_IMC register.
//
//*****************************************************************************
#define SYSCTL_IMC_MOSCPUPIM    0x00000100  // MOSC Power Up Interrupt Mask.
#define SYSCTL_IMC_PLLLIM       0x00000040  // PLL Lock Interrupt Mask.
#define SYSCTL_IMC_BORIM        0x00000002  // Brown-Out Reset Interrupt Mask.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_MISC register.
//
//*****************************************************************************
#define SYSCTL_MISC_MOSCPUPMIS  0x00000100  // MOSC Power Up Masked Interrupt
                                            // Status.
#define SYSCTL_MISC_PLLLMIS     0x00000040  // PLL Lock Masked Interrupt
                                            // Status.
#define SYSCTL_MISC_BORMIS      0x00000002  // BOR Masked Interrupt Status.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_RESC register.
//
//*****************************************************************************
#define SYSCTL_RESC_MOSCFAIL    0x00010000  // MOSC Failure Reset.
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
#define SYSCTL_RCC_USEPWMDIV    0x00100000  // Enable PWM Clock Divisor.
#define SYSCTL_RCC_PWMDIV_M     0x000E0000  // PWM Unit Clock Divisor.
#define SYSCTL_RCC_PWMDIV_2     0x00000000  // /2
#define SYSCTL_RCC_PWMDIV_4     0x00020000  // /4
#define SYSCTL_RCC_PWMDIV_8     0x00040000  // /8
#define SYSCTL_RCC_PWMDIV_16    0x00060000  // /16
#define SYSCTL_RCC_PWMDIV_32    0x00080000  // /32
#define SYSCTL_RCC_PWMDIV_64    0x000A0000  // /64
#define SYSCTL_RCC_PWRDN        0x00002000  // PLL Power Down.
#define SYSCTL_RCC_BYPASS       0x00000800  // PLL Bypass.
#define SYSCTL_RCC_XTAL_M       0x000007C0  // Crystal Value.
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
#define SYSCTL_RCC_XTAL_10MHZ   0x00000400  // 10.0 MHz
#define SYSCTL_RCC_XTAL_12MHZ   0x00000440  // 12.0 MHz
#define SYSCTL_RCC_XTAL_12_2MHZ 0x00000480  // 12.288 MHz
#define SYSCTL_RCC_XTAL_13_5MHZ 0x000004C0  // 13.56 MHz
#define SYSCTL_RCC_XTAL_14_3MHZ 0x00000500  // 14.31818 MHz
#define SYSCTL_RCC_XTAL_16MHZ   0x00000540  // 16.0 MHz
#define SYSCTL_RCC_XTAL_16_3MHZ 0x00000580  // 16.384 MHz
#define SYSCTL_RCC_OSCSRC_M     0x00000030  // Oscillator Source.
#define SYSCTL_RCC_OSCSRC_MAIN  0x00000000  // Main oscillator
#define SYSCTL_RCC_OSCSRC_INT   0x00000010  // Internal oscillator (default)
#define SYSCTL_RCC_OSCSRC_INT4  0x00000020  // Internal oscillator / 4 (this is
                                            // necessary if used as input to
                                            // PLL)
#define SYSCTL_RCC_OSCSRC_30    0x00000030  // 30 KHz internal oscillator
#define SYSCTL_RCC_IOSCDIS      0x00000002  // Internal Oscillator Disable.
#define SYSCTL_RCC_MOSCDIS      0x00000001  // Main Oscillator Disable.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_PLLCFG register.
//
//*****************************************************************************
#define SYSCTL_PLLCFG_F_M       0x00003FE0  // PLL F Value.
#define SYSCTL_PLLCFG_R_M       0x0000001F  // PLL R Value.
#define SYSCTL_PLLCFG_F_S       5
#define SYSCTL_PLLCFG_R_S       0

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_GPIOHSCTL
// register.
//
//*****************************************************************************
#define SYSCTL_GPIOHSCTL_PORTE  0x00000010  // Port E High-Speed.
#define SYSCTL_GPIOHSCTL_PORTD  0x00000008  // Port D High-Speed.
#define SYSCTL_GPIOHSCTL_PORTC  0x00000004  // Port C High-Speed.
#define SYSCTL_GPIOHSCTL_PORTB  0x00000002  // Port B High-Speed.
#define SYSCTL_GPIOHSCTL_PORTA  0x00000001  // Port A High-Speed.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_RCC2 register.
//
//*****************************************************************************
#define SYSCTL_RCC2_USERCC2     0x80000000  // Use RCC2.
#define SYSCTL_RCC2_SYSDIV2_M   0x1F800000  // System Clock Divisor.
#define SYSCTL_RCC2_SYSDIV2_2   0x00800000  // System clock /2
#define SYSCTL_RCC2_SYSDIV2_3   0x01000000  // System clock /3
#define SYSCTL_RCC2_SYSDIV2_4   0x01800000  // System clock /4
#define SYSCTL_RCC2_SYSDIV2_5   0x02000000  // System clock /5
#define SYSCTL_RCC2_SYSDIV2_6   0x02800000  // System clock /6
#define SYSCTL_RCC2_SYSDIV2_7   0x03000000  // System clock /7
#define SYSCTL_RCC2_SYSDIV2_8   0x03800000  // System clock /8
#define SYSCTL_RCC2_SYSDIV2_9   0x04000000  // System clock /9
#define SYSCTL_RCC2_SYSDIV2_10  0x04800000  // System clock /10
#define SYSCTL_RCC2_SYSDIV2_11  0x05000000  // System clock /11
#define SYSCTL_RCC2_SYSDIV2_12  0x05800000  // System clock /12
#define SYSCTL_RCC2_SYSDIV2_13  0x06000000  // System clock /13
#define SYSCTL_RCC2_SYSDIV2_14  0x06800000  // System clock /14
#define SYSCTL_RCC2_SYSDIV2_15  0x07000000  // System clock /15
#define SYSCTL_RCC2_SYSDIV2_16  0x07800000  // System clock /16
#define SYSCTL_RCC2_SYSDIV2_17  0x08000000  // System clock /17
#define SYSCTL_RCC2_SYSDIV2_18  0x08800000  // System clock /18
#define SYSCTL_RCC2_SYSDIV2_19  0x09000000  // System clock /19
#define SYSCTL_RCC2_SYSDIV2_20  0x09800000  // System clock /20
#define SYSCTL_RCC2_SYSDIV2_21  0x0A000000  // System clock /21
#define SYSCTL_RCC2_SYSDIV2_22  0x0A800000  // System clock /22
#define SYSCTL_RCC2_SYSDIV2_23  0x0B000000  // System clock /23
#define SYSCTL_RCC2_SYSDIV2_24  0x0B800000  // System clock /24
#define SYSCTL_RCC2_SYSDIV2_25  0x0C000000  // System clock /25
#define SYSCTL_RCC2_SYSDIV2_26  0x0C800000  // System clock /26
#define SYSCTL_RCC2_SYSDIV2_27  0x0D000000  // System clock /27
#define SYSCTL_RCC2_SYSDIV2_28  0x0D800000  // System clock /28
#define SYSCTL_RCC2_SYSDIV2_29  0x0E000000  // System clock /29
#define SYSCTL_RCC2_SYSDIV2_30  0x0E800000  // System clock /30
#define SYSCTL_RCC2_SYSDIV2_31  0x0F000000  // System clock /31
#define SYSCTL_RCC2_SYSDIV2_32  0x0F800000  // System clock /32
#define SYSCTL_RCC2_SYSDIV2_33  0x10000000  // System clock /33
#define SYSCTL_RCC2_SYSDIV2_34  0x10800000  // System clock /34
#define SYSCTL_RCC2_SYSDIV2_35  0x11000000  // System clock /35
#define SYSCTL_RCC2_SYSDIV2_36  0x11800000  // System clock /36
#define SYSCTL_RCC2_SYSDIV2_37  0x12000000  // System clock /37
#define SYSCTL_RCC2_SYSDIV2_38  0x12800000  // System clock /38
#define SYSCTL_RCC2_SYSDIV2_39  0x13000000  // System clock /39
#define SYSCTL_RCC2_SYSDIV2_40  0x13800000  // System clock /40
#define SYSCTL_RCC2_SYSDIV2_41  0x14000000  // System clock /41
#define SYSCTL_RCC2_SYSDIV2_42  0x14800000  // System clock /42
#define SYSCTL_RCC2_SYSDIV2_43  0x15000000  // System clock /43
#define SYSCTL_RCC2_SYSDIV2_44  0x15800000  // System clock /44
#define SYSCTL_RCC2_SYSDIV2_45  0x16000000  // System clock /45
#define SYSCTL_RCC2_SYSDIV2_46  0x16800000  // System clock /46
#define SYSCTL_RCC2_SYSDIV2_47  0x17000000  // System clock /47
#define SYSCTL_RCC2_SYSDIV2_48  0x17800000  // System clock /48
#define SYSCTL_RCC2_SYSDIV2_49  0x18000000  // System clock /49
#define SYSCTL_RCC2_SYSDIV2_50  0x18800000  // System clock /50
#define SYSCTL_RCC2_SYSDIV2_51  0x19000000  // System clock /51
#define SYSCTL_RCC2_SYSDIV2_52  0x19800000  // System clock /52
#define SYSCTL_RCC2_SYSDIV2_53  0x1A000000  // System clock /53
#define SYSCTL_RCC2_SYSDIV2_54  0x1A800000  // System clock /54
#define SYSCTL_RCC2_SYSDIV2_55  0x1B000000  // System clock /55
#define SYSCTL_RCC2_SYSDIV2_56  0x1B800000  // System clock /56
#define SYSCTL_RCC2_SYSDIV2_57  0x1C000000  // System clock /57
#define SYSCTL_RCC2_SYSDIV2_58  0x1C800000  // System clock /58
#define SYSCTL_RCC2_SYSDIV2_59  0x1D000000  // System clock /59
#define SYSCTL_RCC2_SYSDIV2_60  0x1D800000  // System clock /60
#define SYSCTL_RCC2_SYSDIV2_61  0x1E000000  // System clock /61
#define SYSCTL_RCC2_SYSDIV2_62  0x1E800000  // System clock /62
#define SYSCTL_RCC2_SYSDIV2_63  0x1F000000  // System clock /63
#define SYSCTL_RCC2_SYSDIV2_64  0x1F800000  // System clock /64
#define SYSCTL_RCC2_PWRDN2      0x00002000  // Power-Down PLL.
#define SYSCTL_RCC2_BYPASS2     0x00000800  // Bypass PLL.
#define SYSCTL_RCC2_OSCSRC2_M   0x00000070  // Oscillator Source.
#define SYSCTL_RCC2_OSCSRC2_MO  0x00000000  // Main oscillator (MOSC)
#define SYSCTL_RCC2_OSCSRC2_IO  0x00000010  // Internal oscillator (IOSC)
#define SYSCTL_RCC2_OSCSRC2_IO4 0x00000020  // Internal oscillator / 4
#define SYSCTL_RCC2_OSCSRC2_30  0x00000030  // 30 kHz internal oscillator
#define SYSCTL_RCC2_SYSDIV2_S   23

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_MOSCCTL register.
//
//*****************************************************************************
#define SYSCTL_MOSCCTL_CVAL     0x00000001  // Clock Validation for MOSC.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_RCGC0 register.
//
//*****************************************************************************
#define SYSCTL_RCGC0_CAN0       0x01000000  // CAN0 Clock Gating Control.
#define SYSCTL_RCGC0_PWM        0x00100000  // PWM Clock Gating Control.
#define SYSCTL_RCGC0_ADC        0x00010000  // ADC0 Clock Gating Control.
#define SYSCTL_RCGC0_ADCSPD_M   0x00000300  // ADC Sample Speed.
#define SYSCTL_RCGC0_ADCSPD125K 0x00000000  // 125K samples/second
#define SYSCTL_RCGC0_ADCSPD250K 0x00000100  // 250K samples/second
#define SYSCTL_RCGC0_ADCSPD500K 0x00000200  // 500K samples/second
#define SYSCTL_RCGC0_WDT        0x00000008  // WDT Clock Gating Control.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_RCGC1 register.
//
//*****************************************************************************
#define SYSCTL_RCGC1_TIMER3     0x00080000  // Timer 3 Clock Gating Control.
#define SYSCTL_RCGC1_TIMER2     0x00040000  // Timer 2 Clock Gating Control.
#define SYSCTL_RCGC1_TIMER1     0x00020000  // Timer 1 Clock Gating Control.
#define SYSCTL_RCGC1_TIMER0     0x00010000  // Timer 0 Clock Gating Control.
#define SYSCTL_RCGC1_QEI0       0x00000100  // QEI0 Clock Gating Control.
#define SYSCTL_RCGC1_SSI0       0x00000010  // SSI0 Clock Gating Control.
#define SYSCTL_RCGC1_UART0      0x00000001  // UART0 Clock Gating Control.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_RCGC2 register.
//
//*****************************************************************************
#define SYSCTL_RCGC2_UDMA       0x00002000  // UDMA Clock Gating Control.
#define SYSCTL_RCGC2_GPIOE      0x00000010  // Port E Clock Gating Control.
#define SYSCTL_RCGC2_GPIOD      0x00000008  // Port D Clock Gating Control.
#define SYSCTL_RCGC2_GPIOC      0x00000004  // Port C Clock Gating Control.
#define SYSCTL_RCGC2_GPIOB      0x00000002  // Port B Clock Gating Control.
#define SYSCTL_RCGC2_GPIOA      0x00000001  // Port A Clock Gating Control.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_SCGC0 register.
//
//*****************************************************************************
#define SYSCTL_SCGC0_CAN0       0x01000000  // CAN0 Clock Gating Control.
#define SYSCTL_SCGC0_PWM        0x00100000  // PWM Clock Gating Control.
#define SYSCTL_SCGC0_ADC        0x00010000  // ADC0 Clock Gating Control.
#define SYSCTL_SCGC0_ADCSPD_M   0x00000300  // ADC Sample Speed.
#define SYSCTL_SCGC0_ADCSPD125K 0x00000000  // 125K samples/second
#define SYSCTL_SCGC0_ADCSPD250K 0x00000100  // 250K samples/second
#define SYSCTL_SCGC0_ADCSPD500K 0x00000200  // 500K samples/second
#define SYSCTL_SCGC0_WDT        0x00000008  // WDT Clock Gating Control.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_SCGC1 register.
//
//*****************************************************************************
#define SYSCTL_SCGC1_TIMER3     0x00080000  // Timer 3 Clock Gating Control.
#define SYSCTL_SCGC1_TIMER2     0x00040000  // Timer 2 Clock Gating Control.
#define SYSCTL_SCGC1_TIMER1     0x00020000  // Timer 1 Clock Gating Control.
#define SYSCTL_SCGC1_TIMER0     0x00010000  // Timer 0 Clock Gating Control.
#define SYSCTL_SCGC1_QEI0       0x00000100  // QEI0 Clock Gating Control.
#define SYSCTL_SCGC1_SSI0       0x00000010  // SSI0 Clock Gating Control.
#define SYSCTL_SCGC1_UART0      0x00000001  // UART0 Clock Gating Control.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_SCGC2 register.
//
//*****************************************************************************
#define SYSCTL_SCGC2_UDMA       0x00002000  // UDMA Clock Gating Control.
#define SYSCTL_SCGC2_GPIOE      0x00000010  // Port E Clock Gating Control.
#define SYSCTL_SCGC2_GPIOD      0x00000008  // Port D Clock Gating Control.
#define SYSCTL_SCGC2_GPIOC      0x00000004  // Port C Clock Gating Control.
#define SYSCTL_SCGC2_GPIOB      0x00000002  // Port B Clock Gating Control.
#define SYSCTL_SCGC2_GPIOA      0x00000001  // Port A Clock Gating Control.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_DCGC0 register.
//
//*****************************************************************************
#define SYSCTL_DCGC0_CAN0       0x01000000  // CAN0 Clock Gating Control.
#define SYSCTL_DCGC0_PWM        0x00100000  // PWM Clock Gating Control.
#define SYSCTL_DCGC0_ADC        0x00010000  // ADC0 Clock Gating Control.
#define SYSCTL_DCGC0_ADCSPD_M   0x00000300  // ADC Sample Speed.
#define SYSCTL_DCGC0_ADCSPD125K 0x00000000  // 125K samples/second
#define SYSCTL_DCGC0_ADCSPD250K 0x00000100  // 250K samples/second
#define SYSCTL_DCGC0_ADCSPD500K 0x00000200  // 500K samples/second
#define SYSCTL_DCGC0_WDT        0x00000008  // WDT Clock Gating Control.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_DCGC1 register.
//
//*****************************************************************************
#define SYSCTL_DCGC1_TIMER3     0x00080000  // Timer 3 Clock Gating Control.
#define SYSCTL_DCGC1_TIMER2     0x00040000  // Timer 2 Clock Gating Control.
#define SYSCTL_DCGC1_TIMER1     0x00020000  // Timer 1 Clock Gating Control.
#define SYSCTL_DCGC1_TIMER0     0x00010000  // Timer 0 Clock Gating Control.
#define SYSCTL_DCGC1_QEI0       0x00000100  // QEI0 Clock Gating Control.
#define SYSCTL_DCGC1_SSI0       0x00000010  // SSI0 Clock Gating Control.
#define SYSCTL_DCGC1_UART0      0x00000001  // UART0 Clock Gating Control.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_DCGC2 register.
//
//*****************************************************************************
#define SYSCTL_DCGC2_UDMA       0x00002000  // UDMA Clock Gating Control.
#define SYSCTL_DCGC2_GPIOE      0x00000010  // Port E Clock Gating Control.
#define SYSCTL_DCGC2_GPIOD      0x00000008  // Port D Clock Gating Control.
#define SYSCTL_DCGC2_GPIOC      0x00000004  // Port C Clock Gating Control.
#define SYSCTL_DCGC2_GPIOB      0x00000002  // Port B Clock Gating Control.
#define SYSCTL_DCGC2_GPIOA      0x00000001  // Port A Clock Gating Control.

//*****************************************************************************
//
// The following are defines for the bit fields in the SYSCTL_DSLPCLKCFG
// register.
//
//*****************************************************************************
#define SYSCTL_DSLPCLKCFG_D_M   0x1F800000  // Divider Field Override.
#define SYSCTL_DSLPCLKCFG_O_M   0x00000070  // Clock Source.
#define SYSCTL_DSLPCLKCFG_O_IGN 0x00000000  // NOORIDE
#define SYSCTL_DSLPCLKCFG_O_IO  0x00000010  // IOSC
#define SYSCTL_DSLPCLKCFG_O_30  0x00000030  // 30kHz
#define SYSCTL_DSLPCLKCFG_D_S   23

//*****************************************************************************
//
// The following are defines for the bit fields in the UDMA_O_SRCENDP register.
//
//*****************************************************************************
#define UDMA_SRCENDP_ADDR_M     0xFFFFFFFF  // Source Address End Pointer.
#define UDMA_SRCENDP_ADDR_S     0

//*****************************************************************************
//
// The following are defines for the bit fields in the UDMA_STAT register.
//
//*****************************************************************************
#define UDMA_STAT_DMACHANS_M    0x001F0000  // Available DMA Channels Minus 1.
#define UDMA_STAT_STATE_M       0x000000F0  // Control State Machine State.
#define UDMA_STAT_STATE_IDLE    0x00000000  // Idle
#define UDMA_STAT_STATE_RD_CTRL 0x00000010  // Read Chan Control Data
#define UDMA_STAT_STATE_RD_SRCENDP \
                                0x00000020  // Read Source End Ptr
#define UDMA_STAT_STATE_RD_DSTENDP \
                                0x00000030  // Read Dest End Ptr
#define UDMA_STAT_STATE_RD_SRCDAT \
                                0x00000040  // Read Source Data
#define UDMA_STAT_STATE_WR_DSTDAT \
                                0x00000050  // Write Dest Data
#define UDMA_STAT_STATE_WAIT    0x00000060  // Wait for Req Clear
#define UDMA_STAT_STATE_WR_CTRL 0x00000070  // Write Chan Control Data
#define UDMA_STAT_STATE_STALL   0x00000080  // Stalled
#define UDMA_STAT_STATE_DONE    0x00000090  // Done
#define UDMA_STAT_STATE_UNDEF   0x000000A0  // Undefined
#define UDMA_STAT_MASTEN        0x00000001  // Master Enable.
#define UDMA_STAT_DMACHANS_S    16

//*****************************************************************************
//
// The following are defines for the bit fields in the UDMA_O_DSTENDP register.
//
//*****************************************************************************
#define UDMA_DSTENDP_ADDR_M     0xFFFFFFFF  // Destination Address End Pointer.
#define UDMA_DSTENDP_ADDR_S     0

//*****************************************************************************
//
// The following are defines for the bit fields in the UDMA_CFG register.
//
//*****************************************************************************
#define UDMA_CFG_MASTEN         0x00000001  // Controller Master Enable.

//*****************************************************************************
//
// The following are defines for the bit fields in the UDMA_CTLBASE register.
//
//*****************************************************************************
#define UDMA_CTLBASE_ADDR_M     0xFFFFFC00  // Channel Control Base Address.
#define UDMA_CTLBASE_ADDR_S     10

//*****************************************************************************
//
// The following are defines for the bit fields in the UDMA_O_CHCTL register.
//
//*****************************************************************************
#define UDMA_CHCTL_DSTINC_M     0xC0000000  // Destination Address Increment.
#define UDMA_CHCTL_DSTINC_8     0x00000000  // Byte
#define UDMA_CHCTL_DSTINC_16    0x40000000  // Half-word
#define UDMA_CHCTL_DSTINC_32    0x80000000  // Word
#define UDMA_CHCTL_DSTINC_NONE  0xC0000000  // No increment
#define UDMA_CHCTL_DSTSIZE_M    0x30000000  // Destination Data Size.
#define UDMA_CHCTL_DSTSIZE_8    0x00000000  // Byte
#define UDMA_CHCTL_DSTSIZE_16   0x10000000  // Half-word
#define UDMA_CHCTL_DSTSIZE_32   0x20000000  // Word
#define UDMA_CHCTL_SRCINC_M     0x0C000000  // Source Address Increment.
#define UDMA_CHCTL_SRCINC_8     0x00000000  // Byte
#define UDMA_CHCTL_SRCINC_16    0x04000000  // Half-word
#define UDMA_CHCTL_SRCINC_32    0x08000000  // Word
#define UDMA_CHCTL_SRCINC_NONE  0x0C000000  // No increment
#define UDMA_CHCTL_SRCSIZE_M    0x03000000  // Source Data Size.
#define UDMA_CHCTL_SRCSIZE_8    0x00000000  // Byte
#define UDMA_CHCTL_SRCSIZE_16   0x01000000  // Half-word
#define UDMA_CHCTL_SRCSIZE_32   0x02000000  // Word
#define UDMA_CHCTL_ARBSIZE_M    0x0003C000  // Arbitration Size.
#define UDMA_CHCTL_ARBSIZE_1    0x00000000  // 1 Transfer
#define UDMA_CHCTL_ARBSIZE_2    0x00004000  // 2 Transfers
#define UDMA_CHCTL_ARBSIZE_4    0x00008000  // 4 Transfers
#define UDMA_CHCTL_ARBSIZE_8    0x0000C000  // 8 Transfers
#define UDMA_CHCTL_ARBSIZE_16   0x00010000  // 16 Transfers
#define UDMA_CHCTL_ARBSIZE_32   0x00014000  // 32 Transfers
#define UDMA_CHCTL_ARBSIZE_64   0x00018000  // 64 Transfers
#define UDMA_CHCTL_ARBSIZE_128  0x0001C000  // 128 Transfers
#define UDMA_CHCTL_ARBSIZE_256  0x00020000  // 256 Transfers
#define UDMA_CHCTL_ARBSIZE_512  0x00024000  // 512 Transfers
#define UDMA_CHCTL_ARBSIZE_1024 0x00028000  // 1024 Transfers
#define UDMA_CHCTL_XFERSIZE_M   0x00003FF0  // Transfer Size (minus 1).
#define UDMA_CHCTL_NXTUSEBURST  0x00000008  // Next Useburst.
#define UDMA_CHCTL_XFERMODE_M   0x00000007  // DMA Transfer Mode.
#define UDMA_CHCTL_XFERMODE_STOP \
                                0x00000000  // Stop
#define UDMA_CHCTL_XFERMODE_BASIC \
                                0x00000001  // Basic
#define UDMA_CHCTL_XFERMODE_AUTO \
                                0x00000002  // Auto-Request
#define UDMA_CHCTL_XFERMODE_PINGPONG \
                                0x00000003  // Ping-Pong
#define UDMA_CHCTL_XFERMODE_MEM_SG \
                                0x00000004  // Memory Scatter-Gather
#define UDMA_CHCTL_XFERMODE_MEM_SGA \
                                0x00000005  // Alternate Memory Scatter-Gather
#define UDMA_CHCTL_XFERMODE_PER_SG \
                                0x00000006  // Peripheral Scatter-Gather
#define UDMA_CHCTL_XFERMODE_PER_SGA \
                                0x00000007  // Alternate Peripheral
                                            // Scatter-Gather
#define UDMA_CHCTL_XFERSIZE_S   4

//*****************************************************************************
//
// The following are defines for the bit fields in the UDMA_ALTBASE register.
//
//*****************************************************************************
#define UDMA_ALTBASE_ADDR_M     0xFFFFFFFF  // Alternate Channel Address
                                            // Pointer.
#define UDMA_ALTBASE_ADDR_S     0

//*****************************************************************************
//
// The following are defines for the bit fields in the UDMA_WAITSTAT register.
//
//*****************************************************************************
#define UDMA_WAITSTAT_WAITREQ_M 0xFFFFFFFF  // Channel [n] Wait Status.
#define UDMA_WAITSTAT_WAITREQ_S 0

//*****************************************************************************
//
// The following are defines for the bit fields in the UDMA_SWREQ register.
//
//*****************************************************************************
#define UDMA_SWREQ_M            0xFFFFFFFF  // Channel [n] Software Request.
#define UDMA_SWREQ_S            0

//*****************************************************************************
//
// The following are defines for the bit fields in the UDMA_USEBURSTSET
// register.
//
//*****************************************************************************
#define UDMA_USEBURSTSET_SET_M  0xFFFFFFFF  // Channel [n] Useburst Set.
#define UDMA_USEBURSTSET_SET__0 0x00000000  // No Effect
#define UDMA_USEBURSTSET_SET__1 0x00000001  // Burst Only

//*****************************************************************************
//
// The following are defines for the bit fields in the UDMA_USEBURSTCLR
// register.
//
//*****************************************************************************
#define UDMA_USEBURSTCLR_CLR_M  0xFFFFFFFF  // Channel [n] Useburst Clear.
#define UDMA_USEBURSTCLR_CLR__0 0x00000000  // No Effect
#define UDMA_USEBURSTCLR_CLR__1 0x00000001  // Single and Burst

//*****************************************************************************
//
// The following are defines for the bit fields in the UDMA_REQMASKSET
// register.
//
//*****************************************************************************
#define UDMA_REQMASKSET_SET_M   0xFFFFFFFF  // Channel [n] Request Mask Set.
#define UDMA_REQMASKSET_SET__0  0x00000000  // No Effect
#define UDMA_REQMASKSET_SET__1  0x00000001  // Masked

//*****************************************************************************
//
// The following are defines for the bit fields in the UDMA_REQMASKCLR
// register.
//
//*****************************************************************************
#define UDMA_REQMASKCLR_CLR_M   0xFFFFFFFF  // Channel [n] Request Mask Clear.
#define UDMA_REQMASKCLR_CLR__0  0x00000000  // No Effect
#define UDMA_REQMASKCLR_CLR__1  0x00000001  // Clear Mask

//*****************************************************************************
//
// The following are defines for the bit fields in the UDMA_ENASET register.
//
//*****************************************************************************
#define UDMA_ENASET_SET_M       0xFFFFFFFF  // Channel [n] Enable Set.
#define UDMA_ENASET_SET__0      0x00000000  // Disabled
#define UDMA_ENASET_SET__1      0x00000001  // Enabled
#define UDMA_ENASET_CHENSET_M   0xFFFFFFFF  // Channel [n] Enable Set.
#define UDMA_ENASET_CHENSET__0  0x00000000  // No Effect
#define UDMA_ENASET_CHENSET__1  0x00000001  // Enable

//*****************************************************************************
//
// The following are defines for the bit fields in the UDMA_ENACLR register.
//
//*****************************************************************************
#define UDMA_ENACLR_CLR_M       0xFFFFFFFF  // Clear Channel [n] Enable.
#define UDMA_ENACLR_CLR__0      0x00000000  // No Effect
#define UDMA_ENACLR_CLR__1      0x00000001  // Disable

//*****************************************************************************
//
// The following are defines for the bit fields in the UDMA_ALTSET register.
//
//*****************************************************************************
#define UDMA_ALTSET_SET_M       0xFFFFFFFF  // Channel [n] Alternate Set.
#define UDMA_ALTSET_SET__0      0x00000000  // No Effect
#define UDMA_ALTSET_SET__1      0x00000001  // Alternate

//*****************************************************************************
//
// The following are defines for the bit fields in the UDMA_ALTCLR register.
//
//*****************************************************************************
#define UDMA_ALTCLR_CLR_M       0xFFFFFFFF  // Channel [n] Alternate Clear.
#define UDMA_ALTCLR_CLR__0      0x00000000  // No Effect
#define UDMA_ALTCLR_CLR__1      0x00000001  // Primary

//*****************************************************************************
//
// The following are defines for the bit fields in the UDMA_PRIOSET register.
//
//*****************************************************************************
#define UDMA_PRIOSET_SET_M      0xFFFFFFFF  // Channel [n] Priority Set.
#define UDMA_PRIOSET_SET__0     0x00000000  // No Effect
#define UDMA_PRIOSET_SET__1     0x00000001  // High Priority

//*****************************************************************************
//
// The following are defines for the bit fields in the UDMA_PRIOCLR register.
//
//*****************************************************************************
#define UDMA_PRIOCLR_CLR_M      0xFFFFFFFF  // Channel [n] Priority Clear.
#define UDMA_PRIOCLR_CLR__0     0x00000000  // No Effect
#define UDMA_PRIOCLR_CLR__1     0x00000001  // Default Priority

//*****************************************************************************
//
// The following are defines for the bit fields in the UDMA_ERRCLR register.
//
//*****************************************************************************
#define UDMA_ERRCLR_ERRCLR      0x00000001  // DMA Bus Error Status.

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
// The following are defines for the bit fields in the NVIC_EN1 register.
//
//*****************************************************************************
#define NVIC_EN1_INT59          0x08000000  // Interrupt 59 enable
#define NVIC_EN1_INT58          0x04000000  // Interrupt 58 enable
#define NVIC_EN1_INT57          0x02000000  // Interrupt 57 enable
#define NVIC_EN1_INT56          0x01000000  // Interrupt 56 enable
#define NVIC_EN1_INT55          0x00800000  // Interrupt 55 enable
#define NVIC_EN1_INT54          0x00400000  // Interrupt 54 enable
#define NVIC_EN1_INT53          0x00200000  // Interrupt 53 enable
#define NVIC_EN1_INT52          0x00100000  // Interrupt 52 enable
#define NVIC_EN1_INT51          0x00080000  // Interrupt 51 enable
#define NVIC_EN1_INT50          0x00040000  // Interrupt 50 enable
#define NVIC_EN1_INT49          0x00020000  // Interrupt 49 enable
#define NVIC_EN1_INT48          0x00010000  // Interrupt 48 enable
#define NVIC_EN1_INT47          0x00008000  // Interrupt 47 enable
#define NVIC_EN1_INT46          0x00004000  // Interrupt 46 enable
#define NVIC_EN1_INT45          0x00002000  // Interrupt 45 enable
#define NVIC_EN1_INT44          0x00001000  // Interrupt 44 enable
#define NVIC_EN1_INT43          0x00000800  // Interrupt 43 enable
#define NVIC_EN1_INT42          0x00000400  // Interrupt 42 enable
#define NVIC_EN1_INT41          0x00000200  // Interrupt 41 enable
#define NVIC_EN1_INT40          0x00000100  // Interrupt 40 enable
#define NVIC_EN1_INT39          0x00000080  // Interrupt 39 enable
#define NVIC_EN1_INT38          0x00000040  // Interrupt 38 enable
#define NVIC_EN1_INT37          0x00000020  // Interrupt 37 enable
#define NVIC_EN1_INT36          0x00000010  // Interrupt 36 enable
#define NVIC_EN1_INT35          0x00000008  // Interrupt 35 enable
#define NVIC_EN1_INT34          0x00000004  // Interrupt 34 enable
#define NVIC_EN1_INT33          0x00000002  // Interrupt 33 enable
#define NVIC_EN1_INT32          0x00000001  // Interrupt 32 enable

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
// The following are defines for the bit fields in the NVIC_DIS1 register.
//
//*****************************************************************************
#define NVIC_DIS1_INT59         0x08000000  // Interrupt 59 disable
#define NVIC_DIS1_INT58         0x04000000  // Interrupt 58 disable
#define NVIC_DIS1_INT57         0x02000000  // Interrupt 57 disable
#define NVIC_DIS1_INT56         0x01000000  // Interrupt 56 disable
#define NVIC_DIS1_INT55         0x00800000  // Interrupt 55 disable
#define NVIC_DIS1_INT54         0x00400000  // Interrupt 54 disable
#define NVIC_DIS1_INT53         0x00200000  // Interrupt 53 disable
#define NVIC_DIS1_INT52         0x00100000  // Interrupt 52 disable
#define NVIC_DIS1_INT51         0x00080000  // Interrupt 51 disable
#define NVIC_DIS1_INT50         0x00040000  // Interrupt 50 disable
#define NVIC_DIS1_INT49         0x00020000  // Interrupt 49 disable
#define NVIC_DIS1_INT48         0x00010000  // Interrupt 48 disable
#define NVIC_DIS1_INT47         0x00008000  // Interrupt 47 disable
#define NVIC_DIS1_INT46         0x00004000  // Interrupt 46 disable
#define NVIC_DIS1_INT45         0x00002000  // Interrupt 45 disable
#define NVIC_DIS1_INT44         0x00001000  // Interrupt 44 disable
#define NVIC_DIS1_INT43         0x00000800  // Interrupt 43 disable
#define NVIC_DIS1_INT42         0x00000400  // Interrupt 42 disable
#define NVIC_DIS1_INT41         0x00000200  // Interrupt 41 disable
#define NVIC_DIS1_INT40         0x00000100  // Interrupt 40 disable
#define NVIC_DIS1_INT39         0x00000080  // Interrupt 39 disable
#define NVIC_DIS1_INT38         0x00000040  // Interrupt 38 disable
#define NVIC_DIS1_INT37         0x00000020  // Interrupt 37 disable
#define NVIC_DIS1_INT36         0x00000010  // Interrupt 36 disable
#define NVIC_DIS1_INT35         0x00000008  // Interrupt 35 disable
#define NVIC_DIS1_INT34         0x00000004  // Interrupt 34 disable
#define NVIC_DIS1_INT33         0x00000002  // Interrupt 33 disable
#define NVIC_DIS1_INT32         0x00000001  // Interrupt 32 disable

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
// The following are defines for the bit fields in the NVIC_PEND1 register.
//
//*****************************************************************************
#define NVIC_PEND1_INT59        0x08000000  // Interrupt 59 pend
#define NVIC_PEND1_INT58        0x04000000  // Interrupt 58 pend
#define NVIC_PEND1_INT57        0x02000000  // Interrupt 57 pend
#define NVIC_PEND1_INT56        0x01000000  // Interrupt 56 pend
#define NVIC_PEND1_INT55        0x00800000  // Interrupt 55 pend
#define NVIC_PEND1_INT54        0x00400000  // Interrupt 54 pend
#define NVIC_PEND1_INT53        0x00200000  // Interrupt 53 pend
#define NVIC_PEND1_INT52        0x00100000  // Interrupt 52 pend
#define NVIC_PEND1_INT51        0x00080000  // Interrupt 51 pend
#define NVIC_PEND1_INT50        0x00040000  // Interrupt 50 pend
#define NVIC_PEND1_INT49        0x00020000  // Interrupt 49 pend
#define NVIC_PEND1_INT48        0x00010000  // Interrupt 48 pend
#define NVIC_PEND1_INT47        0x00008000  // Interrupt 47 pend
#define NVIC_PEND1_INT46        0x00004000  // Interrupt 46 pend
#define NVIC_PEND1_INT45        0x00002000  // Interrupt 45 pend
#define NVIC_PEND1_INT44        0x00001000  // Interrupt 44 pend
#define NVIC_PEND1_INT43        0x00000800  // Interrupt 43 pend
#define NVIC_PEND1_INT42        0x00000400  // Interrupt 42 pend
#define NVIC_PEND1_INT41        0x00000200  // Interrupt 41 pend
#define NVIC_PEND1_INT40        0x00000100  // Interrupt 40 pend
#define NVIC_PEND1_INT39        0x00000080  // Interrupt 39 pend
#define NVIC_PEND1_INT38        0x00000040  // Interrupt 38 pend
#define NVIC_PEND1_INT37        0x00000020  // Interrupt 37 pend
#define NVIC_PEND1_INT36        0x00000010  // Interrupt 36 pend
#define NVIC_PEND1_INT35        0x00000008  // Interrupt 35 pend
#define NVIC_PEND1_INT34        0x00000004  // Interrupt 34 pend
#define NVIC_PEND1_INT33        0x00000002  // Interrupt 33 pend
#define NVIC_PEND1_INT32        0x00000001  // Interrupt 32 pend

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
// The following are defines for the bit fields in the NVIC_UNPEND1 register.
//
//*****************************************************************************
#define NVIC_UNPEND1_INT59      0x08000000  // Interrupt 59 unpend
#define NVIC_UNPEND1_INT58      0x04000000  // Interrupt 58 unpend
#define NVIC_UNPEND1_INT57      0x02000000  // Interrupt 57 unpend
#define NVIC_UNPEND1_INT56      0x01000000  // Interrupt 56 unpend
#define NVIC_UNPEND1_INT55      0x00800000  // Interrupt 55 unpend
#define NVIC_UNPEND1_INT54      0x00400000  // Interrupt 54 unpend
#define NVIC_UNPEND1_INT53      0x00200000  // Interrupt 53 unpend
#define NVIC_UNPEND1_INT52      0x00100000  // Interrupt 52 unpend
#define NVIC_UNPEND1_INT51      0x00080000  // Interrupt 51 unpend
#define NVIC_UNPEND1_INT50      0x00040000  // Interrupt 50 unpend
#define NVIC_UNPEND1_INT49      0x00020000  // Interrupt 49 unpend
#define NVIC_UNPEND1_INT48      0x00010000  // Interrupt 48 unpend
#define NVIC_UNPEND1_INT47      0x00008000  // Interrupt 47 unpend
#define NVIC_UNPEND1_INT46      0x00004000  // Interrupt 46 unpend
#define NVIC_UNPEND1_INT45      0x00002000  // Interrupt 45 unpend
#define NVIC_UNPEND1_INT44      0x00001000  // Interrupt 44 unpend
#define NVIC_UNPEND1_INT43      0x00000800  // Interrupt 43 unpend
#define NVIC_UNPEND1_INT42      0x00000400  // Interrupt 42 unpend
#define NVIC_UNPEND1_INT41      0x00000200  // Interrupt 41 unpend
#define NVIC_UNPEND1_INT40      0x00000100  // Interrupt 40 unpend
#define NVIC_UNPEND1_INT39      0x00000080  // Interrupt 39 unpend
#define NVIC_UNPEND1_INT38      0x00000040  // Interrupt 38 unpend
#define NVIC_UNPEND1_INT37      0x00000020  // Interrupt 37 unpend
#define NVIC_UNPEND1_INT36      0x00000010  // Interrupt 36 unpend
#define NVIC_UNPEND1_INT35      0x00000008  // Interrupt 35 unpend
#define NVIC_UNPEND1_INT34      0x00000004  // Interrupt 34 unpend
#define NVIC_UNPEND1_INT33      0x00000002  // Interrupt 33 unpend
#define NVIC_UNPEND1_INT32      0x00000001  // Interrupt 32 unpend

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
// The following are defines for the bit fields in the NVIC_ACTIVE1 register.
//
//*****************************************************************************
#define NVIC_ACTIVE1_INT59      0x08000000  // Interrupt 59 active
#define NVIC_ACTIVE1_INT58      0x04000000  // Interrupt 58 active
#define NVIC_ACTIVE1_INT57      0x02000000  // Interrupt 57 active
#define NVIC_ACTIVE1_INT56      0x01000000  // Interrupt 56 active
#define NVIC_ACTIVE1_INT55      0x00800000  // Interrupt 55 active
#define NVIC_ACTIVE1_INT54      0x00400000  // Interrupt 54 active
#define NVIC_ACTIVE1_INT53      0x00200000  // Interrupt 53 active
#define NVIC_ACTIVE1_INT52      0x00100000  // Interrupt 52 active
#define NVIC_ACTIVE1_INT51      0x00080000  // Interrupt 51 active
#define NVIC_ACTIVE1_INT50      0x00040000  // Interrupt 50 active
#define NVIC_ACTIVE1_INT49      0x00020000  // Interrupt 49 active
#define NVIC_ACTIVE1_INT48      0x00010000  // Interrupt 48 active
#define NVIC_ACTIVE1_INT47      0x00008000  // Interrupt 47 active
#define NVIC_ACTIVE1_INT46      0x00004000  // Interrupt 46 active
#define NVIC_ACTIVE1_INT45      0x00002000  // Interrupt 45 active
#define NVIC_ACTIVE1_INT44      0x00001000  // Interrupt 44 active
#define NVIC_ACTIVE1_INT43      0x00000800  // Interrupt 43 active
#define NVIC_ACTIVE1_INT42      0x00000400  // Interrupt 42 active
#define NVIC_ACTIVE1_INT41      0x00000200  // Interrupt 41 active
#define NVIC_ACTIVE1_INT40      0x00000100  // Interrupt 40 active
#define NVIC_ACTIVE1_INT39      0x00000080  // Interrupt 39 active
#define NVIC_ACTIVE1_INT38      0x00000040  // Interrupt 38 active
#define NVIC_ACTIVE1_INT37      0x00000020  // Interrupt 37 active
#define NVIC_ACTIVE1_INT36      0x00000010  // Interrupt 36 active
#define NVIC_ACTIVE1_INT35      0x00000008  // Interrupt 35 active
#define NVIC_ACTIVE1_INT34      0x00000004  // Interrupt 34 active
#define NVIC_ACTIVE1_INT33      0x00000002  // Interrupt 33 active
#define NVIC_ACTIVE1_INT32      0x00000001  // Interrupt 32 active

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
// The following are defines for the bit fields in the NVIC_PRI8 register.
//
//*****************************************************************************
#define NVIC_PRI8_INT35_M       0xFF000000  // Interrupt 35 priority mask
#define NVIC_PRI8_INT34_M       0x00FF0000  // Interrupt 34 priority mask
#define NVIC_PRI8_INT33_M       0x0000FF00  // Interrupt 33 priority mask
#define NVIC_PRI8_INT32_M       0x000000FF  // Interrupt 32 priority mask
#define NVIC_PRI8_INT35_S       24
#define NVIC_PRI8_INT34_S       16
#define NVIC_PRI8_INT33_S       8
#define NVIC_PRI8_INT32_S       0

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_PRI9 register.
//
//*****************************************************************************
#define NVIC_PRI9_INT39_M       0xFF000000  // Interrupt 39 priority mask
#define NVIC_PRI9_INT38_M       0x00FF0000  // Interrupt 38 priority mask
#define NVIC_PRI9_INT37_M       0x0000FF00  // Interrupt 37 priority mask
#define NVIC_PRI9_INT36_M       0x000000FF  // Interrupt 36 priority mask
#define NVIC_PRI9_INT39_S       24
#define NVIC_PRI9_INT38_S       16
#define NVIC_PRI9_INT37_S       8
#define NVIC_PRI9_INT36_S       0

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_PRI10 register.
//
//*****************************************************************************
#define NVIC_PRI10_INT43_M      0xFF000000  // Interrupt 43 priority mask
#define NVIC_PRI10_INT42_M      0x00FF0000  // Interrupt 42 priority mask
#define NVIC_PRI10_INT41_M      0x0000FF00  // Interrupt 41 priority mask
#define NVIC_PRI10_INT40_M      0x000000FF  // Interrupt 40 priority mask
#define NVIC_PRI10_INT43_S      24
#define NVIC_PRI10_INT42_S      16
#define NVIC_PRI10_INT41_S      8
#define NVIC_PRI10_INT40_S      0

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
// The following are defines for the bit fields in the NVIC_MPU_TYPE register.
//
//*****************************************************************************
#define NVIC_MPU_TYPE_IREGION_M 0x00FF0000  // Number of I regions
#define NVIC_MPU_TYPE_DREGION_M 0x0000FF00  // Number of D regions
#define NVIC_MPU_TYPE_SEPARATE  0x00000001  // Separate or unified MPU
#define NVIC_MPU_TYPE_IREGION_S 16
#define NVIC_MPU_TYPE_DREGION_S 8

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_MPU_CTRL register.
//
//*****************************************************************************
#define NVIC_MPU_CTRL_PRIVDEFEN 0x00000004  // MPU default region in priv mode
#define NVIC_MPU_CTRL_HFNMIENA  0x00000002  // MPU enabled during faults
#define NVIC_MPU_CTRL_ENABLE    0x00000001  // MPU enable

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_MPU_NUMBER
// register.
//
//*****************************************************************************
#define NVIC_MPU_NUMBER_M       0x000000FF  // MPU region to access
#define NVIC_MPU_NUMBER_S       0

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_MPU_BASE register.
//
//*****************************************************************************
#define NVIC_MPU_BASE_ADDR_M    0xFFFFFFE0  // Base address mask
#define NVIC_MPU_BASE_VALID     0x00000010  // Region number valid
#define NVIC_MPU_BASE_REGION_M  0x0000000F  // Region number
#define NVIC_MPU_BASE_ADDR_S    8
#define NVIC_MPU_BASE_REGION_S  0

//*****************************************************************************
//
// The following are defines for the bit fields in the NVIC_MPU_ATTR register.
//
//*****************************************************************************
#define NVIC_MPU_ATTR_M         0xFFFF0000  // Attributes
#define NVIC_MPU_ATTR_AP_NO_NO  0x00000000  // prv: no access, usr: no access
#define NVIC_MPU_ATTR_BUFFRABLE 0x00010000  // Bufferable
#define NVIC_MPU_ATTR_CACHEABLE 0x00020000  // Cacheable
#define NVIC_MPU_ATTR_SHAREABLE 0x00040000  // Shareable
#define NVIC_MPU_ATTR_TEX_M     0x00380000  // Type extension mask
#define NVIC_MPU_ATTR_AP_RW_NO  0x01000000  // prv: rw, usr: none
#define NVIC_MPU_ATTR_AP_RW_RO  0x02000000  // prv: rw, usr: read-only
#define NVIC_MPU_ATTR_AP_RW_RW  0x03000000  // prv: rw, usr: rw
#define NVIC_MPU_ATTR_AP_RO_NO  0x05000000  // prv: ro, usr: none
#define NVIC_MPU_ATTR_AP_RO_RO  0x06000000  // prv: ro, usr: ro
#define NVIC_MPU_ATTR_AP_M      0x07000000  // Access permissions mask
#define NVIC_MPU_ATTR_XN        0x10000000  // Execute disable
#define NVIC_MPU_ATTR_SRD_M     0x0000FF00  // Sub-region disable mask
#define NVIC_MPU_ATTR_SRD_0     0x00000100  // Sub-region 0 disable
#define NVIC_MPU_ATTR_SRD_1     0x00000200  // Sub-region 1 disable
#define NVIC_MPU_ATTR_SRD_2     0x00000400  // Sub-region 2 disable
#define NVIC_MPU_ATTR_SRD_3     0x00000800  // Sub-region 3 disable
#define NVIC_MPU_ATTR_SRD_4     0x00001000  // Sub-region 4 disable
#define NVIC_MPU_ATTR_SRD_5     0x00002000  // Sub-region 5 disable
#define NVIC_MPU_ATTR_SRD_6     0x00004000  // Sub-region 6 disable
#define NVIC_MPU_ATTR_SRD_7     0x00008000  // Sub-region 7 disable
#define NVIC_MPU_ATTR_SIZE_M    0x0000003E  // Region size mask
#define NVIC_MPU_ATTR_SIZE_32B  0x00000008  // Region size 32 bytes
#define NVIC_MPU_ATTR_SIZE_64B  0x0000000A  // Region size 64 bytes
#define NVIC_MPU_ATTR_SIZE_128B 0x0000000C  // Region size 128 bytes
#define NVIC_MPU_ATTR_SIZE_256B 0x0000000E  // Region size 256 bytes
#define NVIC_MPU_ATTR_SIZE_512B 0x00000010  // Region size 512 bytes
#define NVIC_MPU_ATTR_SIZE_1K   0x00000012  // Region size 1 Kbytes
#define NVIC_MPU_ATTR_SIZE_2K   0x00000014  // Region size 2 Kbytes
#define NVIC_MPU_ATTR_SIZE_4K   0x00000016  // Region size 4 Kbytes
#define NVIC_MPU_ATTR_SIZE_8K   0x00000018  // Region size 8 Kbytes
#define NVIC_MPU_ATTR_SIZE_16K  0x0000001A  // Region size 16 Kbytes
#define NVIC_MPU_ATTR_SIZE_32K  0x0000001C  // Region size 32 Kbytes
#define NVIC_MPU_ATTR_SIZE_64K  0x0000001E  // Region size 64 Kbytes
#define NVIC_MPU_ATTR_SIZE_128K 0x00000020  // Region size 128 Kbytes
#define NVIC_MPU_ATTR_SIZE_256K 0x00000022  // Region size 256 Kbytes
#define NVIC_MPU_ATTR_SIZE_512K 0x00000024  // Region size 512 Kbytes
#define NVIC_MPU_ATTR_SIZE_1M   0x00000026  // Region size 1 Mbytes
#define NVIC_MPU_ATTR_SIZE_2M   0x00000028  // Region size 2 Mbytes
#define NVIC_MPU_ATTR_SIZE_4M   0x0000002A  // Region size 4 Mbytes
#define NVIC_MPU_ATTR_SIZE_8M   0x0000002C  // Region size 8 Mbytes
#define NVIC_MPU_ATTR_SIZE_16M  0x0000002E  // Region size 16 Mbytes
#define NVIC_MPU_ATTR_SIZE_32M  0x00000030  // Region size 32 Mbytes
#define NVIC_MPU_ATTR_SIZE_64M  0x00000032  // Region size 64 Mbytes
#define NVIC_MPU_ATTR_SIZE_128M 0x00000034  // Region size 128 Mbytes
#define NVIC_MPU_ATTR_SIZE_256M 0x00000036  // Region size 256 Mbytes
#define NVIC_MPU_ATTR_SIZE_512M 0x00000038  // Region size 512 Mbytes
#define NVIC_MPU_ATTR_SIZE_1G   0x0000003A  // Region size 1 Gbytes
#define NVIC_MPU_ATTR_SIZE_2G   0x0000003C  // Region size 2 Gbytes
#define NVIC_MPU_ATTR_SIZE_4G   0x0000003E  // Region size 4 Gbytes
#define NVIC_MPU_ATTR_ENABLE    0x00000001  // Region enable

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

#endif // __LM3S2678_H__
