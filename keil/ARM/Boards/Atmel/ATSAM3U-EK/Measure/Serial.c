/*----------------------------------------------------------------------------
 * Name:    Serial.c
 * Purpose: AT91SAM3U-EK Low level serial functions
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

#include <SAM3U.H>                                   /* ATSAM3U definitions   */
#include "Serial.h"

/* Following definitions can be used to select the used communication interface:

  _DBGU_     - DBGU interface  used
  _USART1_   - COM1 interface  used  (default)   */
//#define _DBGU_

/* Clock Definitions */
#define BAUD(b) ((SystemFrequency + 8*b)/(16*b))

/*----------------------------------------------------------------------------
  Initialize UART pins, Baudrate  (currently only DBGU is used)
 *----------------------------------------------------------------------------*/
void SER_init (void) {
#ifdef _DBGU_
  AT91C_BASE_PMC->PMC_PCER = ((1UL << AT91C_ID_PIOA) |   /* enable PIOA clock */
                              (1UL << AT91C_ID_DBGU)  ); /* enable DBGU clock */  

  /* Configure DBGU for 115200 baud. */
  AT91C_BASE_PIOA->PIO_IDR    =
  AT91C_BASE_PIOA->PIO_PPUDR  =
  AT91C_BASE_PIOA->PIO_PDR    =  (AT91C_PA11_DRXD | AT91C_PA12_DTXD);
  AT91C_BASE_PIOA->PIO_ABSR  &= ~(AT91C_PA11_DRXD | AT91C_PA12_DTXD);

  AT91C_BASE_DBGU->DBGU_CR    = AT91C_US_RSTRX   | AT91C_US_RSTTX;
  AT91C_BASE_DBGU->DBGU_IDR   = 0xFFFFFFFF;
  AT91C_BASE_DBGU->DBGU_BRGR  = BAUD(115200);
  AT91C_BASE_DBGU->DBGU_MR    = AT91C_US_PAR_NONE;
  AT91C_BASE_DBGU->DBGU_PTCR  = AT91C_PDC_RXTDIS | AT91C_PDC_TXTDIS;
  AT91C_BASE_DBGU->DBGU_CR    = AT91C_US_RXEN    | AT91C_US_TXEN;
#else
  AT91C_BASE_PMC->PMC_PCER = ((1UL << AT91C_ID_PIOA) |   /* enable PIOA   clock */
                              (1UL << AT91C_ID_US1 )  ); /* enable USART1 clock */  

  /* Configure DBGU for 115200 baud. */
  AT91C_BASE_PIOA->PIO_IDR    =
  AT91C_BASE_PIOA->PIO_PPUDR  =
  AT91C_BASE_PIOA->PIO_PDR    =  (AT91C_PA21_RXD1 | AT91C_PA20_TXD1);
  AT91C_BASE_PIOA->PIO_ABSR  &= ~(AT91C_PA21_RXD1 | AT91C_PA20_TXD1);

  AT91C_BASE_US1->US_CR    = AT91C_US_RSTRX   | AT91C_US_RSTTX;
  AT91C_BASE_US1->US_IDR   = 0xFFFFFFFF;
  AT91C_BASE_US1->US_BRGR  = BAUD(115200);
  AT91C_BASE_US1->US_MR    = AT91C_US_USMODE_NORMAL |
                             AT91C_US_CLKS_CLOCK    |
                             AT91C_US_CHRL_8_BITS   |
                             AT91C_US_PAR_NONE      |
                             AT91C_US_NBSTOP_1_BIT  |
                             AT91C_US_CHMODE_NORMAL;
  AT91C_BASE_US1->US_PTCR  = AT91C_PDC_RXTDIS | AT91C_PDC_TXTDIS;
  AT91C_BASE_US1->US_CR    = AT91C_US_RXEN    | AT91C_US_TXEN;
#endif
}


/*----------------------------------------------------------------------------
  check if character is ready at serial port
 *----------------------------------------------------------------------------*/
int SER_charReady (void) {               /* character is ready at serial port */
#ifdef _DBGU_
  return (AT91C_BASE_DBGU->DBGU_CSR & AT91C_US_RXRDY);
#else
  return (AT91C_BASE_US1->US_CSR & AT91C_US_RXRDY);
#endif
}

/*----------------------------------------------------------------------------
  Write character to Serial Port
 *----------------------------------------------------------------------------*/
int SER_putChar (int c) {
#ifdef _DBGU_
   while (!(AT91C_BASE_DBGU->DBGU_CSR & AT91C_US_TXRDY));
   AT91C_BASE_DBGU->DBGU_THR = c;
#else
   while (!(AT91C_BASE_US1->US_CSR & AT91C_US_TXRDY));
   AT91C_BASE_US1->US_THR = c;
#endif
   return (c);
}


/*----------------------------------------------------------------------------
  Read character from Serial Port   (blocking read)
 *----------------------------------------------------------------------------*/
int SER_getChar (void) {
#ifdef _DBGU_
  while (!(AT91C_BASE_DBGU->DBGU_CSR & AT91C_US_RXRDY));
  return (AT91C_BASE_DBGU->DBGU_RHR);
#else
  while (!(AT91C_BASE_US1->US_CSR & AT91C_US_RXRDY));
  return (AT91C_BASE_US1->US_RHR);
#endif
}


/*----------------------------------------------------------------------------
  Read character from Serial Port   (non blocking read)
 *----------------------------------------------------------------------------*/
int SER_getChar_nb (void) {
#ifdef _DBGU_
  if (AT91C_BASE_DBGU->DBGU_CSR & AT91C_US_RXRDY)
    return (AT91C_BASE_DBGU->DBGU_RHR);
#else
  if (AT91C_BASE_US1->US_CSR & AT91C_US_RXRDY)
    return (AT91C_BASE_US1->US_RHR);
#endif
  else
    return 0;
}


/*----------------------------------------------------------------------------
  Write character to Serial Port
 *----------------------------------------------------------------------------*/
void SER_putString (unsigned char *s) {

  while (*s != 0) {
   SER_putChar(*s++);
  }
}
