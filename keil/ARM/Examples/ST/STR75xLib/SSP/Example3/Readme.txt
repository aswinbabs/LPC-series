/******************** (C) COPYRIGHT 2006 STMicroelectronics ********************
* File Name          : Readme.txt
* Author             : MCD Application Team
* Date First Issued  : 03/10/2006
* Description        : Description of the SSP Example3.
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

Example description
===================
This example provides a description of how to set a communication between the two
SSPs and performs a transfer from Master to Slave in Motorola frame format and how
change Master to slave and Slave to Master without need of any hardware changes.
SSP0 is configured as Master in Motorola frame format with 16bits data size 
to communicate with the Slave SSP1 configured in motorola frame format with the
same data size as SSP0. The clock set to the master is equal to 2.5MHz. 
The NSS pin is managed by software. 
In the first part, the Master send the SSP0_Buffer_Tx to be received by the Slave.
Then data read by the SSP1 peripheral and stored in the SSP1_Buffer_Rx is compared
with the expected values of transmitted buffer. The result of this comparison is 
stored in the "TransferStatus1" variable.
After the first transfer, the SSP0 receive FIFO have to be cleared by reading its 
eight data.
In the second part, SSP0 become the Slave and SSP1 the Master which is done by 
software without any hardware changes. The Master SSP1 send the SSP1_Buffer_Tx 
to be received by the Slave. 
The data read by the SSP0 peripheral and stored in the SSP0_Buffer_Rx is compared 
with the expected values of transmitted buffer. The result of this comparison is 
stored in the "TransferStatus2" variable.   


Directory contents
==================
75x_conf.h  Library Configuration file
75x_it.c    Interrupt handlers
main.c      Main program


Hardware environment
====================
Connect both SSP0 and SSP1 pins as following:
 - Connect SSP0_SCLK(P0.05) to SSP1_SCLK(P0.16).
 - Connect SSP0_MISO(P0.06) to SSP1_MISO(P0.17).
 - Connect SSP0_MOSI(P0.07) to SSP1_MOSI(P0.18).
 

How to use it
=============
In order to make the program work, you must do the following :
- Create a project and setup all your toolchain's start-up files
- Compile the directory content files and required Library files :
  + 75x_lib.c
  + 75x_ssp.c
  + 75x_gpio.c
  + 75x_mrcc.c
  
- Link all compiled files and load your image into either RAM or Flash
- Run the example


******************* (C) COPYRIGHT 2006 STMicroelectronics *****END OF FILE******
