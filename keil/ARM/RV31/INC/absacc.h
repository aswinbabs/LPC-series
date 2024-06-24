/* absacc.h: header file that allows absolute variable location at C level */
/* Copyright 2006-2007 ARM Limited. All rights reserved.                        */
/* version 1.00 */


#ifndef __at
#define __at(_addr) __attribute__ ((at(_addr)))

#endif

