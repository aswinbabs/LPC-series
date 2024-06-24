/*----------------------------------------------------------------------------
 *      R T L  -  K e r n e l
 *----------------------------------------------------------------------------
 *      Name:    RTX_CONFIG.H
 *      Purpose: Exported functions of RTX_Config.c
 *      Rev.:    V3.22
 *----------------------------------------------------------------------------
 *      This code is part of the RealView Run-Time Library.
 *      Copyright (c) 2004-2008 KEIL - An ARM Company. All rights reserved.
 *---------------------------------------------------------------------------*/

#ifndef __task
 #define __task
#endif

/*----------------------------------------------------------------------------
 *      Variables and Constants
 *---------------------------------------------------------------------------*/

extern U16 const os_maxtaskrun;
extern U16 const os_stksize;
extern U32 const os_trv;
extern U32 const os_magic_word;
extern U8  const os_flags;

extern U32 const os_stackinfo;
extern U32 const os_rrobin;
extern U32 const os_clockrate;
extern U32 const os_timernum;

extern U32 mp_tcb[];
extern U16 const mp_tcb_size;

extern U64 mp_stk[];
extern U32 const mp_stk_size;

extern U32 const *m_tmr;
extern U16 const mp_tmr_size;

extern void *os_active_TCB[];

/*----------------------------------------------------------------------------
 *      Functions
 *---------------------------------------------------------------------------*/

extern void os_idle_demon   (void) __task;
extern void os_tmr_call     (U16  info);
extern void os_stk_overflow (OS_TID task_id);

/* Definitions */
#define BOX_ALIGN_8                   0x80000000
#define _declare_box(pool,size,cnt)   U32 pool[(((size)+3)/4)*(cnt) + 3]
#define _declare_box8(pool,size,cnt)  U64 pool[(((size)+7)/8)*(cnt) + 2]
#define _init_box8(pool,size,bsize)   _init_box (pool,size,(bsize) | BOX_ALIGN_8)

/*----------------------------------------------------------------------------
 * end of file
 *---------------------------------------------------------------------------*/
