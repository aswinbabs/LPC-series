/*----------------------------------------------------------------------------
 *      R T L  -  K e r n e l
 *----------------------------------------------------------------------------
 *      Name:    RTX_CONFIG.C
 *      Purpose: Configuration of RTX Kernel for NXP LPC3180
 *      Rev.:    V3.40
 *----------------------------------------------------------------------------
 *      This code is part of the RealView Run-Time Library.
 *      Copyright (c) 2004-2008 KEIL - An ARM Company. All rights reserved.
 *---------------------------------------------------------------------------*/

#include <RTL.h>
#include <LPC318x.H>                     /* LPC3180 definitions              */

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
 #define OS_TASKCNT     6
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
//   <o>RTX Kernel timer <0=> High Speed Timer
//   <i> Define the ARM timer used as a system tick timer.
//   <i> Default: High Speed Timer
#ifndef OS_TIMER
 #define OS_TIMER       0
#endif

//   <o>Timer clock value [Hz] <1-1000000000>
//   <i> Set the timer clock value for selected timer.
//   <i> Default: 13000000  (PERIPH_CLK = 13 MHz)
#ifndef OS_CLOCK
 #define OS_CLOCK       13000000
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

#if   (OS_TIMER == 0)                                   /* HST              */
 #define OS_TIM_        (1 << 5)                        /*  Interrupt Mask  */
 #define OS_PRES_       13                              /*  Prescaller Value*/
 #define OS_TRV         ((U32)(((double)OS_CLOCK/OS_PRES_*(double)OS_TICK)/1E6)-1)
 #define OS_TVAL        (HSTIM_COUNTER)                 /*  Timer Value     */
 #define OS_TOVF        (HSTIM_INT & (1 << 1))          /*  Overflow Flag   */
 #define OS_TFIRQ()     HSTIM_MCTRL  |=  (1 << 1);      /*  Force Interrupt */
 #define OS_TIACK()     HSTIM_INT     =  0x06;          /*  Interrupt Ack   */ \
                        MIC_RSR       =  OS_TIM_;     
 #define OS_TINIT()     TIMCLK_CTRL   =  1 << 1;        /*  Initialization  */ \
                        HSTIM_MATCH1  =  0;                                    \
                        HSTIM_MATCH2  =  OS_TRV;                               \
                        HSTIM_PMATCH  =  OS_PRES_ - 1;                         \
                        HSTIM_PCOUNT  =  0;                                    \
                        HSTIM_COUNTER =  0;                                    \
                        HSTIM_INT     =  (1 << 2) | (1 << 1);                  \
                        HSTIM_MCTRL   =  (1 << 7) | (1 << 6);                  \
                        HSTIM_CTRL    =  (1 << 0);                             \
                        MIC_APR      |=  OS_TIM_;                              \
                        MIC_ATR      &= ~OS_TIM_;                              \
                        MIC_ITR      &= ~OS_TIM_;                              \
                        MIC_ER       |=  OS_TIM_;
#else
 #error OS_TIMER invalid
#endif

#define OS_IACK()       ;                               /* Interrupt Ack    */

#define OS_LOCK()       MIC_ER       &= ~OS_TIM_;       /* Lock             */
#define OS_UNLOCK()     MIC_ER       |=  OS_TIM_;       /* Unlock           */

/* WARNING: Using IDLE mode might cause you troubles while debugging. */
#define _idle_()        ;


/*----------------------------------------------------------------------------
 *      Global Functions
 *---------------------------------------------------------------------------*/

extern void os_clock_interrupt (void);
extern void os_def_interrupt   (void) __irq;

/*--------------------------- IRQ_Handler -----------------------------------*/

/* User Interrupt Functions
extern __irq void IRQx (void);                 // User IRQx Function
extern __irq void IRQy (void);                 // User IRQy Function

#define mIRQx       (1 <<  7)                  // User IRQx Mask
#define mIRQy       (1 << 10)                  // User IRQy Mask
*/

__asm void IRQ_Handler_RTX (void) {
   /* Common IRQ Handler */
        PRESERVE8
        ARM

        STMDB   SP!,{R0}                       ; Save R0
        LDR     R0,=__cpp((U32)&MIC_SR)        ; Load MIC_SR Address
        LDR     R0,[R0]                        ; Load MIC_SR Value

        TST     R0,#OS_TIM_                    ; Check High Speed Timer Flag
        LDMNEIA SP!,{R0}                       ; Restore R0
        LDRNE   PC,=__cpp(os_clock_interrupt)  ; OS Clock IRQ Function

//      TST     R0,#mIRQx                      ; Check IRQx Flag
//      LDMNEIA SP!,{R0}                       ; Restore R0
//      LDRNE   PC,=__cpp(IRQx)                ; IRQx Function

//      TST     R0,#mIRQy                      ; Check IRQy Flag
//      LDMNEIA SP!,{R0}                       ; Restore R0
//      LDRNE   PC,=__cpp(IRQy)                ; IRQy Function

        LDMIA   SP!,{R0}                       ; Restore R0
        LDR     PC,=__cpp(os_def_interrupt)    ; OS Default IRQ Function
}


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

void os_def_interrupt (void) __irq  {
   /* Default Interrupt Function: may be called when timer ISR is disabled */
   OS_IACK();
}

#include <RTX_lib.c>

/*----------------------------------------------------------------------------
 * end of file
 *---------------------------------------------------------------------------*/
