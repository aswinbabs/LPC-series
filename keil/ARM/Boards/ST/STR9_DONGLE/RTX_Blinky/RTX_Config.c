/*----------------------------------------------------------------------------
 *      R T L  -  K e r n e l
 *----------------------------------------------------------------------------
 *      Name:    RTX_CONFIG.C
 *      Purpose: Configuration of RTX Kernel for ST STR91x
 *      Rev.:    V3.40
 *----------------------------------------------------------------------------
 *      This code is part of the RealView Run-Time Library.
 *      Copyright (c) 2004-2008 KEIL - An ARM Company. All rights reserved.
 *---------------------------------------------------------------------------*/

#include <RTL.h>
#include <91x_lib.H>

/*----------------------------------------------------------------------------
 *      RTX User configuration part BEGIN
 *---------------------------------------------------------------------------*/

//-------- <<< Use Configuration Wizard in Context Menu >>> -----------------
//
// <h>Task Definitions
// ===================
//
//   <o>Number of concurrent running tasks <0-250>
//   <i> Define max. number of tasks that will run at the same time.
//   <i> Default: 6
#ifndef OS_TASKCNT
 #define OS_TASKCNT     7
#endif

//   <o>Number of tasks with user-provided stack <0-250>
//   <i> Define the number of tasks that will use a bigger stack.
//   <i> The memory space for the stack is provided by the user.
//   <i> Default: 0
#ifndef OS_PRIVCNT
 #define OS_PRIVCNT     0
#endif

//   <o>Task stack size [bytes] <20-4096:8><#/4>
//   <i> Set the stack size for tasks which is assigned by the system.
//   <i> Default: 200
#ifndef OS_STKSIZE
 #define OS_STKSIZE     50
#endif

// <q>Check for the stack overflow
// ===============================
// <i> Include the stack checking code for a stack overflow.
// <i> Note that additional code reduces the Kernel performance.
#ifndef OS_STKCHECK
 #define OS_STKCHECK    1
#endif

//   <o>Number of user timers <0-250>
//   <i> Define max. number of user timers that will run at the same time.
//   <i> Default: 0  (User timers disabled)
#ifndef OS_TIMERCNT
 #define OS_TIMERCNT    0
#endif

// </h>
// <h>System Timer Configuration
// =============================
//   <o>RTX Kernel timer <0=> Timer 0 <1=> Timer 1 <2=> Timer 2 <3=> Timer 3
//   <i> Define the ARM timer used as a system tick timer.
//   <i> Default: Timer 0
#ifndef OS_TIMER
 #define OS_TIMER       0
#endif

//   <o>Timer clock value [Hz] <1-1000000000>
//   <i> Set the timer clock value for selected timer.
//   <i> Default: 32000000  (32MHz MCLK)
#ifndef OS_CLOCK
 #define OS_CLOCK       48000000
#endif

//   <o>Timer tick value [us] <1-1000000>
//   <i> Set the timer tick value for selected timer.
//   <i> Default: 10000  (10ms)
#ifndef OS_TICK
 #define OS_TICK        10000
#endif

// </h>
// <e>Round-Robin Task switching
// =============================
// <i> Enable Round-Robin Task switching.
#ifndef OS_ROBIN
 #define OS_ROBIN       1
#endif

//   <o>Round-Robin Timeout [ticks] <1-1000>
//   <i> Define how long a task will execute before a task switch.
//   <i> Default: 5
#ifndef OS_ROBINTOUT
 #define OS_ROBINTOUT   5
#endif

// </e>

//------------- <<< end of configuration section >>> -----------------------

// Standard library system mutexes
// ===============================
//  Define max. number system mutexes that are used to protect 
//  the arm standard runtime library. For microlib they are not used.
#ifndef OS_MUTEXCNT
 #define OS_MUTEXCNT    8
#endif

/*----------------------------------------------------------------------------
 *      RTX User configuration part END
 *---------------------------------------------------------------------------*/

#if   (OS_TIMER == 0)                                   /* Timer 0          */
 #define OS_TID_        4                               /*  Timer ID        */
 #define TIMx           TIM0
#elif (OS_TIMER == 1)                                   /* Timer 1          */
 #define OS_TID_        5                               /*  Timer ID        */
 #define TIMx           TIM1
#elif (OS_TIMER == 2)                                   /* Timer 2          */
 #define OS_TID_        6                               /*  Timer ID        */
 #define TIMx           TIM2
#elif (OS_TIMER == 3)                                   /* Timer 3          */
 #define OS_TID_        7                               /*  Timer ID        */
 #define TIMx           TIM3
#else
 #error OS_TIMER invalid
#endif

#define OS_TIM_         (1 << OS_TID_)                  /*  Interrupt Mask  */
#define OS_TRV          ((U16)(((double)OS_CLOCK*(double)OS_TICK)/1E8)-5)
#define OS_TVAL         ((TIMx->CNTR + 4) & 0xFFFF)     /*  Timer Value     */
#define OS_TOVF          (TIMx->SR & TIM_FLAG_OC2)      /*  Overflow Flag   */
#define OS_TFIRQ()      VIC0->SWINTR  = OS_TIM_;        /*  Force Interrupt */
#define OS_TIACK()      VIC0->SWINTCR = OS_TIM_;        /*  Interrupt Ack   */ \
                        TIMx->SR    = ~TIM_FLAG_OC2;                           \
                        VIC0->VAR   = 0;
#define OS_TINIT()      TIMx->OC2R  =  OS_TRV;           /* Initialization  */ \
                        TIMx->CR2   =  TIM_FLAG_OC2 | (100 - 1);               \
                        TIMx->CR1   =  TIM_PWM | 0x8000;                       \
                        VIC0->DVAR     = (U32)os_def_interrupt;                \
                        VIC0->VAiR[15] = (U32)os_clock_interrupt;              \
                        VIC0->INTSR   &= ~OS_TIM_;                             \
                        VIC0->VCiR[15] = 0x20 | OS_TID_;

#define OS_IACK()       VIC1->VAR = 0;                  /* Interrupt Ack    */ \
                        VIC0->VAR = 0;

#define OS_LOCK()       VIC0->INTECR = OS_TIM_;         /* Task Lock        */
#define OS_UNLOCK()     VIC0->INTER  = OS_TIM_;         /* Task Unlock      */

/* WARNING: Using IDLE mode might cause you troubles while debugging. */
#define _idle_()        SCU->PWRMNG |= 1;


/*----------------------------------------------------------------------------
 *      Global Functions
 *---------------------------------------------------------------------------*/

/*--------------------------- os_idle_demon ---------------------------------*/

__task void os_idle_demon (void) {
   /* The idle demon is a system task, running when no other task is ready */
   /* to run. The 'os_xxx' function calls are not allowed from this task.  */

   for (;;) {
   /* HERE: include optional user code to be executed when no task runs.*/
   }
}


/*--------------------------- os_tmr_call -----------------------------------*/

void os_tmr_call (U16 info) {
   /* This function is called when the user timer has expired. Parameter   */
   /* 'info' holds the value, defined when the timer was created.          */

   /* HERE: include optional user code to be executed on timeout. */
}


/*--------------------------- os_stk_overflow -------------------------------*/

void os_stk_overflow (OS_TID task_id) {
   /* This function is called when a stack overflow is detected. Parameter */
   /* 'task_id' holds the id of this task. You can use 'RTX Kernel' dialog,*/
   /* page 'Active Tasks' to check, which task needs a bigger stack.       */

   /* HERE: include optional code to be executed on stack overflow. */
   for (;;);
}


/*----------------------------------------------------------------------------
 *      RTX Configuration Functions
 *---------------------------------------------------------------------------*/

static void os_def_interrupt (void) __irq  {
   /* Default Interrupt Function: may be called when timer ISR is disabled */
   OS_IACK();
}

#include <RTX_lib.c>

/*----------------------------------------------------------------------------
 * end of file
 *---------------------------------------------------------------------------*/

