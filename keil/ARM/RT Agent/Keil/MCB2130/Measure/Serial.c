/******************************************************************************/
/* SERIAL.C: Low Level Serial Routines                                        */
/******************************************************************************/
/* This file is part of the uVision/ARM development tools.                    */
/* Copyright (c) 2005-2006 Keil Software. All rights reserved.                */
/* This software may only be used under the terms of a valid, current,        */
/* end user licence from KEIL for a compatible version of KEIL software       */
/* development tools. Nothing else gives you the right to use this software.  */
/******************************************************************************/

#include <LPC21xx.H>                     /* LPC21xx definitions               */

void init_serial (void)  {               /* Initialize Serial Interface       */
  PINSEL0 = 0x00050000;                  /* Enable RxD1 and TxD1              */
  U1LCR = 0x83;                          /* 8 bits, no Parity, 1 Stop bit     */
  U1DLL = 0x86;                          /* 9600 Baud Rate @ 60MHz VPB Clock  */
  U1DLM = 0x01;
  U1LCR = 0x03;                          /* DLAB = 0                          */
}


int sendchar (int ch)  {                 /* Write character to Serial Port    */
  if (ch == '\n')  {
    while (!(U1LSR & 0x20));
    U1THR = '\r';
  }
  while (!(U1LSR & 0x20));
  return (U1THR = ch);
}


int getkey (void)  {                     /* Read character from Serial Port   */
  int ch;

  while (!(U1LSR & 0x01));
  ch = U1RBR;
  if (ch == '\r') ch = '\n';
  return (ch);
}
