/*----------------------------------------------------------------------------
 * Name:    memory.c
 * Purpose: USB Memory Storage Demo
 * Version: V1.20
 *----------------------------------------------------------------------------
 * This file is part of the uVision/ARM development tools.
 * This software may only be used under the terms of a valid, current,
 * end user licence from KEIL for a compatible version of KEIL software
 * development tools. Nothing else gives you the right to use this software.
 *
 * This software is supplied "AS IS" without warranties of any kind.
 *
 * Copyright (c) 2009 Keil - An ARM Company. All rights reserved.
 *----------------------------------------------------------------------------*/

#include <SAM3U.H>                     /* ATSAM3U definitions                 */

#include "type.h"

#include "usb.h"
#include "usbcfg.h"
#include "usbhw.h"
#include "mscuser.h"

#include "memory.h"




extern U8 Memory[MSC_MemorySize];                      /* MSC Memory in RAM */


/*------------------------------------------------------------------------------
  Switch on LEDs
 *------------------------------------------------------------------------------*/
void LED_On (unsigned int value) {

  AT91C_BASE_PIOB->PIO_CODR = (value);                 /* Turn On  LED */
}


/*------------------------------------------------------------------------------
  Switch off LEDs
 *------------------------------------------------------------------------------*/
void LED_Off (unsigned int value) {

  AT91C_BASE_PIOB->PIO_SODR = (value);                 /* Turn Off LED */
}


/*------------------------------------------------------------------------------
  Main Program
 *------------------------------------------------------------------------------*/
int main (void) {
  U32 n;

  SystemInit();                                        /* System setup            */

  for (n = 0; n < MSC_ImageSize; n++) {                /* Copy Initial Disk Image */
    Memory[n] = DiskImage[n];                          /*   from Flash to RAM     */
  }

  /* Enable Clock for PIO */
  AT91C_BASE_PMC->PMC_PCER = (1 << AT91C_ID_PIOB);     /* enable clock for LEDs   */

  AT91C_BASE_PIOB->PIO_IDR  = 
  AT91C_BASE_PIOB->PIO_OER  =
  AT91C_BASE_PIOB->PIO_PER  = (AT91C_PIO_PB1  | AT91C_PIO_PB0 ); /* Setup Pins PB0..PB1 for LEDs */
  AT91C_BASE_PIOB->PIO_SODR = (AT91C_PIO_PB1  | AT91C_PIO_PB0 ); /* Turn LEDs Off                */

  USB_Init();                                          /* USB Initialization      */
  USB_Connect(__TRUE);                                 /* USB Connect             */

  while (1);                                           /* Loop forever            */
}
