/******************** (C) COPYRIGHT 2007 STMicroelectronics ********************
* File Name          : 91x_conf.h
* Author             : MCD Application Team
* Version            : V2.0
* Date               : 12/07/2007
* Description        : Library configuration
********************************************************************************
* THE PRESENT SOFTWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS WITH
* CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE TIME. AS
* A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY DIRECT, INDIRECT
* OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING FROM THE CONTENT
* OF SUCH SOFTWARE AND/OR THE USE MADE BY CUSTOMERS OF THE CODING INFORMATION
* CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
*******************************************************************************/


#ifndef __91x_CONF_H
#define __91x_CONF_H

/* To work in buffered mode just Uncomment the following line */
//#define Buffered

/*Uncomment the line below to compile the library in DEBUG mode */
//#define DEBUG    1  

/*Uncomment the following line to boot from Bank0*/
#define Boot_Bank_0   

/*Uncomment the following line to boot from Bank1*/
//#define Boot_Bank_1  

/*Uncomment the following line if the Flash size is 256KB or 512KB*/
#define Flash_512KB_256KB

/*Uncomment the following line if the Flash size is 1MB or 2MB */
//#define Flash_2MB_1MB 

/************************* AHBAPB *************************/
//#define _AHBAPB
//#define _AHBAPB0
//#define _AHBAPB1
/************************* VIC *************************/
#define _VIC
#define _VIC0
#define _VIC1
/************************* DMA *************************/
//#define _DMA
//#define _DMA_Channel0
//#define _DMA_Channel1
//#define _DMA_Channel2
//#define _DMA_Channel3
//#define _DMA_Channel4
//#define _DMA_Channel5
//#define _DMA_Channel6
//#define _DMA_Channel7

/************************* EMI *************************/
//#define _EMI
//#define _EMI_Bank0
//#define _EMI_Bank1
//#define _EMI_Bank2
//#define _EMI_Bank3
/************************* FMI *************************/
#define _FMI
/************************* WIU *************************/
//#define _WIU
/************************* TIM *************************/
#define _TIM
#define _TIM0
#define _TIM1
#define _TIM2
#define _TIM3
/************************* GPIO ************************/
#define _GPIO
#define _GPIO0
#define _GPIO1
#define _GPIO2
#define _GPIO3
#define _GPIO4
#define _GPIO5
#define _GPIO6
#define _GPIO7
#define _GPIO8
#define _GPIO9
/************************* RTC *************************/
//#define _RTC
/************************* SCU *************************/
#define _SCU
/************************* MC **************************/
//#define _MC
/************************* UART ************************/
//#define _UART
//#define _UART0
//#define _UART1
//#define _UART2
/************************* SSP *************************/
//#define _SSP
//#define _SSP0
//#define _SSP1
/************************* CAN *************************/
//#define _CAN
/************************* ADC *************************/
//#define _ADC
/************************* WDG *************************/
//#define _WDG
/************************* I2C *************************/
//#define _I2C
//#define _I2C0
//#define _I2C1

/************************ ENET *************************/
//#define _ENET


/*---------------------------- _Main_Crystal frequency value (KHz)------------*/

#ifndef _Main_Crystal
#define _Main_Crystal 25000
#endif
/*------------------------------------------------------------------------------*/


#endif /* __91x_CONF_H */

/******************* (C) COPYRIGHT 2007 STMicroelectronics *****END OF FILE****/
