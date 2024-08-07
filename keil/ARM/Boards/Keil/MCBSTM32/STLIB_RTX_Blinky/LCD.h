/******************************************************************************/
/* LCD.h Text LCD function prototypes                                         */
/******************************************************************************/
/* This file is part of the uVision/ARM development tools.                    */
/* Copyright (c) 2005-2008 Keil Software. All rights reserved.                */
/* This software may only be used under the terms of a valid, current,        */
/* end user licence from KEIL for a compatible version of KEIL software       */
/* development tools. Nothing else gives you the right to use this software.  */
/******************************************************************************/


extern void lcd_init     (void);
extern void lcd_clear    (void);
extern void lcd_putchar  (char c);
extern void set_cursor   (int column, int line);
extern void lcd_print    (char *string);
extern void lcd_bargraph (int pos_x, int pos_y, int value);

/******************************************************************************/

