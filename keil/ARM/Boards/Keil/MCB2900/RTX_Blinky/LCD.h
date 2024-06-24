/*----------------------------------------------------------------------------
 *      R T L   K e r n e l   E x a m p l e
 *----------------------------------------------------------------------------
 *      Name:    LCD.H
 *      Purpose: LCD module 2x16 driver function definitions
 *      Rev.:    V3.20
 *----------------------------------------------------------------------------
 *      This code is part of the RealView Run-Time Library.
 *      Copyright (c) 2004-2008 KEIL - An ARM Company. All rights reserved.
 *---------------------------------------------------------------------------*/


extern void LCD_init (void);
extern void LCD_gotoxy (unsigned char x, unsigned char y);
extern void LCD_cls (void);
extern void LCD_cur_off (void);
extern void LCD_putc (unsigned char c);
extern void LCD_print (unsigned char x, unsigned char y, unsigned char *string);
extern void LCD_bargraph (unsigned char x, unsigned char y, unsigned char size, unsigned char val);

/*----------------------------------------------------------------------------
 * end of file
 *---------------------------------------------------------------------------*/
