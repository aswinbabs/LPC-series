/*----------------------------------------------------------------------------
 *      Name:    MOUSE.H
 *      Purpose: USB Mouse Demo Definitions
 *      Version: V1.10
 *----------------------------------------------------------------------------
 *      This file is part of the uVision/ARM development tools.
 *      This software may only be used under the terms of a valid, current,
 *      end user licence from KEIL for a compatible version of KEIL software
 *      development tools. Nothing else gives you the right to use it.
 *
 *      Copyright (c) 2005-2007 Keil Software.
 *---------------------------------------------------------------------------*/

/* Mouse Variables */
extern BYTE MouseInReport[4];

/* Mouse Functions */
extern void GetMouseInReport (void);