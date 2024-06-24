/*----------------------------------------------------------------------------
 * Name:    demo.c
 * Purpose: USB HID Demo
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

#include "demo.h"


U8 InReport;                                /* HID Input Report */
                                            /*   Bit0..1: Buttons */
                                            /*   Bit2..7: Reserved */

U8 OutReport;                               /* HID Out Report */
                                            /*   Bit0..1: LEDs */
                                            /*   Bit2..7: Reserved */


/*
 *  Get HID Input Report -> InReport
 */

void GetInReport (void) {
  U32 key;

  key = AT91C_BASE_PIOA->PIO_PDSR;                     /* Read Pin Data */
  InReport = 0x00;
  if ((key & AT91C_PIO_PA18) == 0) InReport |= 0x01;   /* Check if PB-LEFT  is pressed */
  if ((key & AT91C_PIO_PA19) == 0) InReport |= 0x02;   /* Check if PB-RIGHT is pressed */
}


/*
 *  Set HID Output Report <- OutReport
 */

void SetOutReport (void) {

  if (OutReport & 0x01)
    AT91C_BASE_PIOB->PIO_CODR = AT91C_PIO_PB0;         /* Turn LED#1 On  */
  else
    AT91C_BASE_PIOB->PIO_SODR = AT91C_PIO_PB0;         /* Turn LED#1 Off */

  if (OutReport & 0x02)
    AT91C_BASE_PIOB->PIO_CODR = AT91C_PIO_PB1;         /* Turn LED#2 On  */
  else 
    AT91C_BASE_PIOB->PIO_SODR = AT91C_PIO_PB1;         /* Turn LED#3 Off */
}


/* Main Program */

int main (void) {

  SystemInit();                                        /* System setup */

  /* Enable Clock for PIO */
  AT91C_BASE_PMC->PMC_PCER = (1 << AT91C_ID_PIOA);     /* Push Buttons */
  AT91C_BASE_PMC->PMC_PCER = (1 << AT91C_ID_PIOB);     /* LEDs         */

  AT91C_BASE_PIOA->PIO_IDR  = 
  AT91C_BASE_PIOA->PIO_ODR  = 
  AT91C_BASE_PIOA->PIO_PER  = (AT91C_PIO_PA19 | AT91C_PIO_PA18); /* Setup Pins PA18..PA19 for Buttons */

  AT91C_BASE_PIOB->PIO_IDR  = 
  AT91C_BASE_PIOB->PIO_OER  =
  AT91C_BASE_PIOB->PIO_PER  = (AT91C_PIO_PB1  | AT91C_PIO_PB0 ); /* Setup Pins PB0..PB1 for LEDs      */
  AT91C_BASE_PIOB->PIO_SODR = (AT91C_PIO_PB1  | AT91C_PIO_PB0 ); /* Turn LEDs Off                     */

  USB_Init();                                          /* USB Initialization */
  USB_Connect(__TRUE);                                 /* USB Connect        */

  while (1);                                           /* Loop forever       */
}
