/*----------------------------------------------------------------------------
 *      Name:    MEMORY.C
 *      Purpose: USB Mass Storage Demo
 *      Version: V1.10
 *----------------------------------------------------------------------------
 *      This file is part of the uVision/ARM development tools.
 *      Copyright (c) 2005-2006 Keil Software. All rights reserved.
 *      This software may only be used under the terms of a valid, current,
 *      end user licence from KEIL for a compatible version of KEIL software
 *      development tools. Nothing else gives you the right to use it.
 *---------------------------------------------------------------------------*/

#include <AT91SAM7A3.H>                     /* AT91SAM7A3 definitions */

#include "..\..\Board.h"

#include "type.h"

#include "usb.h"
#include "usbcfg.h"
#include "usbhw.h"
#include "usbcore.h"
#include "mscuser.h"

#include "memory.h"


AT91S_PIO * pPIOA = AT91C_BASE_PIOA;        /* Global Pointer to PIOA */

extern BYTE Memory[MSC_MemorySize];         /* MSC Memory in RAM */


/* Main Program */

int main (void) {
  DWORD n;

  *AT91C_PMC_PCER = (1 << AT91C_ID_PIOA);   /* Enable Clock for PIOA */

  pPIOA->PIO_PER  = LED_MASK;               /* Enable PIO for LED's  */
  pPIOA->PIO_OER  = LED_MASK;               /* LED's are Outputs     */
  pPIOA->PIO_SODR = LED_MASK;               /* Turn Off LED's ("1")  */

  for (n = 0; n < MSC_ImageSize; n++) {     /* Copy Initial Disk Image */
    Memory[n] = DiskImage[n];               /*   from Flash to RAM     */
  }

  USB_Init();                               /* USB Initialization */
  USB_Connect(TRUE);                        /* USB Connect */

  while (1);                                /* Loop forever */
}