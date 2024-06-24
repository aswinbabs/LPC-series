/******************** (C) COPYRIGHT 2006 STMicroelectronics ********************
* File Name          : 75x_conf.h
* Author             : MCD Application Team
* Date First Issued  : 03/10/2006 : V0.1
* Description        : Library configuration file.
********************************************************************************
* History:
* 03/10/2006 : V0.1
********************************************************************************
* THE PRESENT SOFTWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
* WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE TIME.
* AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY DIRECT,
* INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING FROM THE
* CONTENT OF SUCH SOFTWARE AND/OR THE USE MADE BY CUSTOMERS OF THE CODING
* INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __75x_CONF_H
#define __75x_CONF_H

/* Includes ------------------------------------------------------------------*/
/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Comment the line below to compile the library in release mode */
#define DEBUG

/************************************* FLASH **********************************/
//#define _FLASH

/************************************* SMI ************************************/
#define _SMI

/************************************* CFG ************************************/
#define _CFG

/************************************* MRCC ************************************/
#define _MRCC

/************************************* ADC ************************************/
#define _ADC

/************************************* TB *************************************/
#define _TB

/************************************* TIM ************************************/
#define _TIM
#define _TIM0
#define _TIM1
#define _TIM2

/************************************* PWM ************************************/
#define _PWM

/************************************* WDG ************************************/
#define _WDG

/************************************* SSP ************************************/
//#define _SSP
//#define _SSP0
//#define _SSP1

/************************************* CAN ************************************/
//#define _CAN

/************************************* I2C ************************************/
//#define _I2C

/************************************* UART ***********************************/
#define _UART
#define _UART0
#define _UART1
#define _UART2

/************************************* GPIO ***********************************/
#define _GPIO
#define _GPIO0
#define _GPIO1
#define _GPIO2
#define _GPIOREMAP

/************************************* DMA ************************************/
#define _DMA

/************************************* RTC ************************************/
#define _RTC

/************************************* EXTIT **********************************/
#define _EXTIT

/************************************* EIC ************************************/
#define _EIC

/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

#endif /* __75x_CONF_H */

/******************* (C) COPYRIGHT 2006 STMicroelectronics *****END OF FILE****/
