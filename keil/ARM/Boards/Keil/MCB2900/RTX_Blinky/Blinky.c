/*----------------------------------------------------------------------------
 *      R T L   K e r n e l   E x a m p l e
 *----------------------------------------------------------------------------
 *      Name:    BLINKY.C
 *      Purpose: RTX example program
 *      Rev.:    V3.40
 *----------------------------------------------------------------------------
 *      This code is part of the RealView Run-Time Library.
 *      Copyright (c) 2004-2008 KEIL - An ARM Company. All rights reserved.
 *---------------------------------------------------------------------------*/

#include <RTL.h>
#include <LPC29xx.H>                    /* LPC29xx definitions               */
#include "LCD.h"

OS_TID t_phaseA;                        /* assigned task id of task: phase_a */
OS_TID t_phaseB;                        /* assigned task id of task: phase_b */
OS_TID t_phaseC;                        /* assigned task id of task: phase_c */
OS_TID t_phaseD;                        /* assigned task id of task: phase_d */
OS_TID t_clock;                         /* assigned task id of task: clock   */
OS_TID t_lcd;                           /* assigned task id of task: lcd     */

enum LED_ENUM {OFF, ON};

#define LED_0       (1 << 24)
#define LED_1       (1 << 25)
#define LED_2       (1 << 26)
#define LED_3       (1 << 27)
#define LED_4       (1 << 28)
#define LED_5       (1 << 29)

#define LED_DIR_OUT GPIO1_DR |=  LED_0 | LED_1 | LED_2 | LED_3 | LED_4 | LED_5;
#define LED_A(x)    ((x) ? (GPIO1_OR |= LED_0) : (GPIO1_OR &= ~LED_0));
#define LED_B(x)    ((x) ? (GPIO1_OR |= LED_1) : (GPIO1_OR &= ~LED_1));
#define LED_C(x)    ((x) ? (GPIO1_OR |= LED_2) : (GPIO1_OR &= ~LED_2));
#define LED_D(x)    ((x) ? (GPIO1_OR |= LED_3) : (GPIO1_OR &= ~LED_3));
#define LED_CLK(x)  ((x) ? (GPIO1_OR |= LED_5) : (GPIO1_OR &= ~LED_5));


/*----------------------------------------------------------------------------
 *        Function 'signal_func' called from multiple tasks
 *---------------------------------------------------------------------------*/
void signal_func (OS_TID task)  {
  os_evt_set (0x0100, t_clock);          /* send event signal to clock task  */
  os_dly_wait (50);                      /* delay 50 clock ticks             */
  os_evt_set (0x0100, t_clock);          /* send event signal to clock task  */
  os_dly_wait (50);                      /* delay 50 clock ticks             */
  os_evt_set (0x0001, task);             /* send event to task 'task'        */
  os_dly_wait (50);                      /* delay 50 clock ticks             */
}

/*----------------------------------------------------------------------------
 *        Task 1 'phaseA': Phase A output
 *---------------------------------------------------------------------------*/
__task void phaseA (void) {
  for (;;) {
    os_evt_wait_and (0x0001, 0xffff);    /* wait for an event flag 0x0001    */
    LED_A(ON)
    signal_func (t_phaseB);              /* call common signal function      */
    LED_A(OFF)
  }
}

/*----------------------------------------------------------------------------
 *        Task 2 'phaseB': Phase B output
 *---------------------------------------------------------------------------*/
__task void phaseB (void) {
  for (;;) {
    os_evt_wait_and (0x0001, 0xffff);    /* wait for an event flag 0x0001    */
    LED_B(ON)
    signal_func (t_phaseC);              /* call common signal function      */
    LED_B(OFF)
  }
}

/*----------------------------------------------------------------------------
 *        Task 3 'phaseC': Phase C output
 *---------------------------------------------------------------------------*/
__task void phaseC (void) {
  for (;;) {
    os_evt_wait_and (0x0001, 0xffff);    /* wait for an event flag 0x0001    */
    LED_C(ON)
    signal_func (t_phaseD);              /* call common signal function      */
    LED_C(OFF)
  }
}

/*----------------------------------------------------------------------------
 *        Task 4 'phaseD': Phase D output
 *---------------------------------------------------------------------------*/
__task void phaseD (void) {
  for (;;) {
    os_evt_wait_and (0x0001, 0xffff);    /* wait for an event flag 0x0001    */
    LED_D(ON)
    signal_func (t_phaseA);              /* call common signal function      */
    LED_D(OFF)
  }
}

/*----------------------------------------------------------------------------
 *        Task 5 'clock': Signal Clock
 *---------------------------------------------------------------------------*/
__task void clock (void) {
  for (;;) {
    os_evt_wait_and (0x0100, 0xffff);    /* wait for an event flag 0x0100    */
    LED_CLK(ON)
    os_dly_wait (8);                     /* delay 8 clock ticks              */
    LED_CLK(OFF)
  }
}

/*----------------------------------------------------------------------------
 *        Task 6 'lcd': LCD Control task
 *---------------------------------------------------------------------------*/
__task void lcd (void) {
  U32 i;

  LCD_init ();                           /* Initialize LCD display module    */
  LCD_cur_off ();
  for (;;) {
    LCD_cls ();
    LCD_print (0, 0, "    RL-ARM      ");
    LCD_print (0, 1, " Kernel example ");
    os_dly_wait (200);
    LCD_print (0, 1, "  www.keil.com  ");
    os_dly_wait (400);
    LCD_cls ();
    LCD_print (0, 0, "      KEIL      ");
    LCD_print (0, 1, " An ARM Company ");
    os_dly_wait (400);
    for (i = 0; i <= 100; i++) {
      LCD_bargraph (0, 1, 8, i);
      LCD_bargraph (8, 1, 8, i);
      os_dly_wait (5);
    }
    os_dly_wait (50);
  }
}

/*----------------------------------------------------------------------------
 *        Task 7 'init': Initialize
 *---------------------------------------------------------------------------*/
__task void init (void) {

  LED_DIR_OUT                            /* Define LED pins as Outputs       */

  t_phaseA = os_tsk_create (phaseA, 0);  /* start task phaseA                */
  t_phaseB = os_tsk_create (phaseB, 0);  /* start task phaseB                */
  t_phaseC = os_tsk_create (phaseC, 0);  /* start task phaseC                */
  t_phaseD = os_tsk_create (phaseD, 0);  /* start task phaseD                */
  t_clock  = os_tsk_create (clock, 0);   /* start task clock                 */
  t_lcd    = os_tsk_create (lcd, 0);     /* start task lcd                   */
  os_evt_set (0x0001, t_phaseA);         /* send signal event to task phaseA */
  os_tsk_delete_self ();
}

/*----------------------------------------------------------------------------
 *        Main: Initialize and start RTX Kernel
 *---------------------------------------------------------------------------*/

int main (void) {

  os_sys_init (init);                    /* Initialize RTX and start init    */
}

/*----------------------------------------------------------------------------
 * end of file
 *---------------------------------------------------------------------------*/

