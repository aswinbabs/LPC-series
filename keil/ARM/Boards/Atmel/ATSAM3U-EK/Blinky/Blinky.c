/******************************************************************************/
/* BLINKY.C: LED Flasher                                                      */
/******************************************************************************/
/* This file is part of the uVision/ARM development tools.                    */
/* Copyright (c) 2009 Keil Software. All rights reserved.                     */
/* This software may only be used under the terms of a valid, current,        */
/* end user licence from KEIL for a compatible version of KEIL software       */
/* development tools. Nothing else gives you the right to use this software.  */
/******************************************************************************/
                  
#include <SAM3U.H>                      /* ATSAM3U definitions                */

#define LED_NUM     2                   /* Number of user LEDs                */

const unsigned long led_mask[] = { 1<<0, 1<<1 };
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

  SystemInit();
  SysTick_Config(SystemFrequency/1000 - 1); /* Generate interrupt each 1 ms   */

  *AT91C_PIOB_PER    =  0x03;           /* Setup Pins PB0..PB1 for LEDs       */
  *AT91C_PIOB_OER    =  0x03;
  *AT91C_PIOB_PPUDR  =  0x03;
  *AT91C_PIOB_OWER   =  0x03;
  *AT91C_PIOB_ABSR  &= ~0x03;

  for (;;) {                            /* Loop forever                       */
    /* Calculate 'num': 0,1,...,LED_NUM-1,LED_NUM-1,...,1,0,0,...             */
    num += dir;
    if (num == LED_NUM) { dir = -1; num =  LED_NUM-1; } 
    else if   (num < 0) { dir =  1; num =  0;         }

    *AT91C_PIOB_CODR = led_mask[num];
    Delay(500);                         /* Delay 500ms                        */
    *AT91C_PIOB_SODR = led_mask[num];
    Delay(500);                         /* Delay 500ms                        */
  }
}
