/******************** (C) COPYRIGHT 2006 STMicroelectronics ********************
* File Name          : main.c
* Author             : MCD Application Team
* Date First Issued  : 03/10/2006
* Description        : Main program body
********************************************************************************
* History:
* 07/17/2006 : V1.0
* 03/10/2006 : V0.1
********************************************************************************
* THE PRESENT SOFTWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
* WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE TIME.
* AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY DIRECT,
* INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING FROM THE
* CONTENT OF SUCH SOFTWARE AND/OR THE USE MADE BY CUSTOMERS OF THE CODING
* INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
*******************************************************************************/
/* Includes ------------------------------------------------------------------*/
#include "75x_lib.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
GPIO_InitTypeDef GPIO_InitStructure;
TIM_InitTypeDef  TIM_InitStructure;
ErrorStatus OSC4MStartUpStatus;

/* Private function prototypes -----------------------------------------------*/
void MRCC_Configuration(void);
void GPIO_Configuration(void);

/* Private functions ---------------------------------------------------------*/
/*******************************************************************************
* Function Name  : main
* Description    : Main program
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void main()
{
  #ifdef DEBUG
    debug();
  #endif
  
  /* MRCC Configuration */
  MRCC_Configuration();
  
  /* GPIO Pins Configuration */
  GPIO_Configuration();
      
/* TIM Configuration in PWM Mode ---------------------------------------------*/ 
  /* CK_TIM = 60 MHz, Prescaler = 1, TIM0_CLK = CK_TIM/(Prescaler + 1) = 30 MHz */
  /* PWM Pulse duration = TIM_Pulse2 * (1/TIM0_CLK) = 546 �s */
  /* PWM Period duration = (TIM_Period + 1) * (1/TIM0_CLK) = 2.18 ms */  
  TIM_InitStructure.TIM_Mode = TIM_Mode_PWM;              
  TIM_InitStructure.TIM_Prescaler = 0x1;                     
  TIM_InitStructure.TIM_ClockSource = TIM_ClockSource_Internal; 
  TIM_InitStructure.TIM_CounterMode = TIM_CounterMode_Up; 
  TIM_InitStructure.TIM_Channel = TIM_Channel_2;   
  TIM_InitStructure.TIM_Period = 0xFFFF;
  TIM_InitStructure.TIM_Pulse2 = 0x3FFF;                                                               
  TIM_InitStructure.TIM_Polarity2 = TIM_Polarity2_High;         
  
  TIM_Init(TIM0, &TIM_InitStructure);
  
  /* Enable TIM0 counter */
  TIM_Cmd(TIM0, ENABLE);

  while(1);
}
  
/*******************************************************************************
* Function Name  : MRCC_Configuration
* Description    : Configures the different system clocks.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void MRCC_Configuration(void)
{
  /* MRCC system reset(for debug purpose) */
  MRCC_DeInit();

  /* Wait for OSC4M start-up */
  OSC4MStartUpStatus = MRCC_WaitForOSC4MStartUp();

  if(OSC4MStartUpStatus == SUCCESS)
  {
    /* Set HCLK to 60 MHz */
    MRCC_HCLKConfig(MRCC_CKSYS_Div1);

    /* Set CKTIM to 60 MHz */
    MRCC_CKTIMConfig(MRCC_HCLK_Div1);

    /* Set PCLK to 30 MHz */
    MRCC_PCLKConfig(MRCC_CKTIM_Div2);

    /* Enable Flash burst mode */
    CFG_FLASHBurstConfig(CFG_FLASHBurst_Enable);

    /* Set CKSYS to 60 MHz */
    MRCC_CKSYSConfig(MRCC_CKSYS_OSC4MPLL, MRCC_PLL_Mul_15);
  }

  /* GPIO pins optimized for 3V3 operation */
  MRCC_IOVoltageRangeConfig(MRCC_IOVoltageRange_3V3); 

  /* Enable TIM0 and GPIO clocks */
  MRCC_PeripheralClockConfig(MRCC_Peripheral_TIM0 | MRCC_Peripheral_GPIO, ENABLE);
}

/*******************************************************************************
* Function Name  : GPIO_Configuration
* Description    : Configures the used GPIO ports.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void GPIO_Configuration(void)
{
  GPIO_InitTypeDef GPIO_InitStructure;

  /* TIM0_OC2 pin configuration */
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;              
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0;
  GPIO_Init(GPIO1, &GPIO_InitStructure);
}

/******************* (C) COPYRIGHT 2006 STMicroelectronics *****END OF FILE****/

