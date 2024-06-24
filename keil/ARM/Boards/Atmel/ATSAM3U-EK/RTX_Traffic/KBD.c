/*----------------------------------------------------------------------------
 * Name:    KBD.c
 * Purpose: AT91SAM3U-EK low level PushButton functions
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
 * Copyright (c) 2008 Keil - An ARM Company. All rights reserved.
 *----------------------------------------------------------------------------
 * History:
 *          V1.00 Initial Version
 *----------------------------------------------------------------------------*/

#include <SAM3U.H>                      /* ATSAM3U definitions                */
#include "KBD.h"


/*----------------------------------------------------------------------------
  initialize LED Pins
 *----------------------------------------------------------------------------*/
void KBD_init (void) {

  *AT91C_PMC_PCER |= (1UL << AT91C_ID_PIOA);            /* enable clock for PIOA             */  

  *AT91C_PIOA_IDR  = 
  *AT91C_PIOA_ODR  = 
  *AT91C_PIOA_PER  = (AT91C_PIO_PA19 | AT91C_PIO_PA18); /* Setup Pins PA18..PA19 for Buttons */

}


/*----------------------------------------------------------------------------
  Get Push Button Values value
 *----------------------------------------------------------------------------*/
uint32_t KBD_get  (void) {
  uint32_t kbd_val;

  kbd_val = (*AT91C_PIOA_PDSR >> 18) & KBD_MASK;       /* 0 = pressed, 1 = released */
  return (kbd_val);
}

