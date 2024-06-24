/******************************************************************************/
/* BLINKY.C: LED Flasher                                                      */
/******************************************************************************/
/* This file is part of the uVision/ARM development tools.                    */
/* Copyright (c) 2008 Keil Software. All rights reserved.                     */
/* This software may only be used under the terms of a valid, current,        */
/* end user licence from KEIL for a compatible version of KEIL software       */
/* development tools. Nothing else gives you the right to use this software.  */
/******************************************************************************/
                  
#include "LPC17xx.H"                    /* LPC17xx definitions                */

#define LED_NUM     8                   /* Number of user LEDs                */

const unsigned long led_mask[] = { 1<<28, 1<<29, 1UL<<31, 1<<2, 1<<3, 1<<4, 1<<5, 1<<6 };
volatile unsigned long SysTickCnt;      /* SysTick Counter                    */

void SysTick_Handler (void) {           /* SysTick Interrupt Handler (1ms)    */
  SysTickCnt++;
}

void Delay (unsigned long tick) {       /* Delay Function                     */
  unsigned long systickcnt;

  systickcnt = SysTickCnt;
  while ((SysTickCnt - systickcnt) < tick);
}

int main (void) {                       /* Main Program                       */
  int num = -1; 
  int dir =  1;
  LPC_GPIO_TypeDef *gpio;

  SystemInit();
  SysTick_Config(SystemFrequency/1000 - 1); /* Generate interrupt each 1 ms   */

  LPC_GPIO1->FIODIR = 0xB0000000;       /* LEDs on PORT1 defined as Output    */
  LPC_GPIO2->FIODIR = 0x0000007C;       /* LEDs on PORT2 defined as Output    */

  for (;;) {                            /* Loop forever                       */
    /* Calculate 'num': 0,1,...,LED_NUM-1,LED_NUM-1,...,1,0,0,...             */
    num += dir;
    if (num == LED_NUM) { dir = -1; num =  LED_NUM-1; } 
    else if   (num < 0) { dir =  1; num =  0;         }

    if (num < 3) gpio = LPC_GPIO1;
    else         gpio = LPC_GPIO2;

    gpio->FIOPIN |=  led_mask[num];
    Delay(500);                         /* Delay 500ms                        */
    gpio->FIOPIN &= ~led_mask[num];
    Delay(500);                         /* Delay 500ms                        */
  }
}
