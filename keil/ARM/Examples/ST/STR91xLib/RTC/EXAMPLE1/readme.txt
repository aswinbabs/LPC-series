/******************** (C) COPYRIGHT 2007 STMicroelectronics **********************
* File Name          : Readme.txt
* Author             : MCD Application Team
* Version            : V2.0
* Date               : 12/07/2007
* Description        : Description of the RTC example 1
**********************************************************************************
 THE PRESENT SOFTWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS WITH
 CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE TIME.
 AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY DIRECT, INDIRECT
 OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING FROM THE CONTENT
 OF SUCH SOFTWARE AND/OR THE USE MADE BY CUSTOMERS OF THE CODING INFORMATION
 CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
**********************************************************************************

Example description
===================

This example configures the RTC time,date and alarm.

When the alarm occurs (5 seconds from configured time), led on GPIO9.2 will start to toggle.

Directory contents
==================
91x_conf.h Library Configuration file
main.c      Main program
91x_it.c    Interrupt handlers
91x_it.h    Interrupt handlers header file
readme.txt  This file

How to use it
=============
In order to make the program work, you must do the following :
- Create a project and setup all your tool chain�s start-up files
- Compile the directory content files and required Library files:
  + 91x_lib.c
  + 91x_rtc.c
  + 91x_scu.c
  + 91x_vic.c
  + 91x_gpio.c
  + 91x_fmi.c
- Link all compiled files & load program into the Flash.
- Run the example

/******************** (C) COPYRIGHT 2007 STMicroelectronics **********************
