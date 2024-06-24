/*----------------------------------------------------------------------------
 * Name:    CanDemo.c
 * Purpose: CAN example for LPC23xx with MCB2300
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

#include <stdint.h>                             /* Include standard types */
#include <LPC23xx.H>                            /* LPC17xx definitions */
#include "CAN.h"                                /* LPC1766 CAN adaption layer */
#include "LCD.h"                                /* LCD function prototypes */
#include "LED.h"                                /* LED function prototypes */
#include "ADC.h"                                /* ADC function prototypes */
#ifdef RT_AGENT
#include "RT_Agent.h"                           /* Real-Time Agent definitions */
#endif

unsigned int val_Tx = 0, val_Rx = 0;            /* Globals used for display */

char hex_chars[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};


/*----------------------------------------------------------------------------
  insert a delay time.
 *----------------------------------------------------------------------------*/
void delay(unsigned int nCount)	{

  for(; nCount != 0; nCount--);
}


/*------------------------------------------------------------------------------
  convert one byte to string in hexadecimal notation
 *------------------------------------------------------------------------------*/
void Hex_Str (unsigned char hex, char *str) {
  *str++ = '0';
  *str++ = 'x';
  *str++ = hex_chars[hex >>  4];
  *str++ = hex_chars[hex & 0xF];
}

/*------------------------------------------------------------------------------
  Initialises the Analog/Digital converter
 *------------------------------------------------------------------------------*/
void adc_Init (void) {

  ADC_init();                                     /* initialise ADC */
}

/*------------------------------------------------------------------------------
  read a converted value from the Analog/Digital converter
 *------------------------------------------------------------------------------*/
unsigned char adc_Get (void) {
  unsigned char val;

  ADC_startCnv();                                 /* start A/D conversion */
  val = (ADC_getCnv() & 0xFF);                    /* Scale value to 8 bits */
  ADC_stopCnv();                                  /* stop A/D conversion */
	
  return (val);
}

/*----------------------------------------------------------------------------
  display transmit and receieve values
 *---------------------------------------------------------------------------*/
void val_display (void) {
  static char disp_buf[] = "Tx:    , Rx:    ";    /* display string */

  Hex_Str(val_Tx, &disp_buf[ 3]);                 /* display Tx and Rx values to LCD disp */
  Hex_Str(val_Rx, &disp_buf[12]);
  set_cursor (0, 1);
  lcd_print  ((char *)disp_buf);                  /* print string to LCD */
  LED_out (val_Rx);                               /* display RX val on LEDs */

  delay (1000000);                                /* Wait wait a while */
}


/*----------------------------------------------------------------------------
  initialize CAN interface
 *----------------------------------------------------------------------------*/
void can_Init (void) {

  CAN_setup (1);                                  /* setup CAN Controller #1 */
  CAN_setup (2);                                  /* setup CAN Controller #2 */
  CAN_wrFilter (1, 33, STANDARD_FORMAT);          /* Enable reception of messages */

  CAN_start (1);                                  /* start CAN Controller #2 */
  CAN_start (2);                                  /* start CAN Controller #2 */

  CAN_waitReady (1);                              /* wait til tx mbx is empty */
  CAN_waitReady (2);                              /* wait til tx mbx is empty */
}



/*----------------------------------------------------------------------------
  MAIN function
 *----------------------------------------------------------------------------*/
int main (void)  {
  int i;

#ifdef RT_AGENT
  RTA_Init();                                     /* Initialize Real-Time Agent  */
#endif
  PINSEL10 = 0;                                   /* Disable ETM interface, enable LEDs  */

  adc_Init ();                                    /* initialise A/D converter */
  LED_init ();                                    /* Initialize the LEDs */
  can_Init ();                                    /* initialise CAN interface */

  lcd_init();                                     /* Initialize the LCD */
  lcd_clear();                                    /* Clear the LCD */

  lcd_print ("MCB2300 CAN Demo");                 /* Display string on LCD display */
  set_cursor (0, 1);                              /* Set cursor position on LCD display */
  lcd_print ("  www.keil.com  ");
  delay (0x10000);                                /* Wait wait a while */

  CAN_TxMsg[1].id = 33;                           /* initialise message to send */
  for (i = 0; i < 8; i++) CAN_TxMsg[0].data[i] = 0;
  CAN_TxMsg[1].len = 1;
  CAN_TxMsg[1].format = STANDARD_FORMAT;
  CAN_TxMsg[1].type = DATA_FRAME;

  while (1) {
    val_Tx = adc_Get ();                          /* TX value changes in any case */
    if (CAN_TxRdy[1]) {                           /* tx message on CAN Controller #2 */
      CAN_TxRdy[1] = 0;

      CAN_TxMsg[1].data[0] = val_Tx;             /* data[0] field = ADC value */
      CAN_wrMsg (2, &CAN_TxMsg[1]);               /* transmit message */
    }

    delay (10000);                                /* Wait a while to receive the message */

    if (CAN_RxRdy[0]) {                           /* rc message on CAN Controller #1 */
      CAN_RxRdy[0] = 0;

      val_Rx = CAN_RxMsg[0].data[0];
    }

    val_display ();                               /* display TX and RX values */

  }
}