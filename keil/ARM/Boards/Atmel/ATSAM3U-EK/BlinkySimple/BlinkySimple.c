/*----------------------------------------------------------------------------
 * Name:    BlinkySimple.c
 * Purpose: Blinky example for AT91SAM3U with SAM3U-EK board
 * Version: V1.00
 * Note(s):
 *----------------------------------------------------------------------------
 * This file is part of the uVision/ARM development tools.
 * This software may only be used under the terms of a valid, current,
 * end user licence from KEIL for a compatible version of KEIL software
 * development tools. Nothing else gives you the right to use this software.
 *
 * This software is supplied "AS IS" without warranties of any kind.
 *
 * Copyright (c) 2009 Keil - An ARM Company. All rights reserved.
 *----------------------------------------------------------------------------
 * History:
 *          V1.00 Initial Version
 *----------------------------------------------------------------------------*/
                  
#include "AT91SAM3U4.h"                              /* ATSAM3U definitions   */


void wait (unsigned int n) {                         /* wait Function         */
  unsigned int i;

  for (i = 0; i < n; i++);
}

int main (void) {                                    /* Main Program          */

  *AT91C_WDTC_WDMR = AT91C_WDTC_WDDIS;               /* disable watchdog      */

   wait(0x50000); /* wait a while */

  *AT91C_PMC_PCER = 0x00000800;                      /* enable clock for PIOB */  

  *AT91C_PIOB_PER    =  0x01;                        /* Setup Pin PB0 for LED */
  *AT91C_PIOB_OER    =  0x01;
  *AT91C_PIOB_PPUDR  =  0x01;

  while (1) {                                        /* Loop forever          */
    *AT91C_PIOB_CODR = 1;                            /* LED on                */
    wait(0x50000);
    *AT91C_PIOB_SODR = 1;                            /* LED off               */
    wait(0x50000);
  }
}
