/***********************************************************************
 * $Id:: lh79524_timer0_driver.c 27 2007-08-31 19:35:06Z kevinw        $
 *
 * Project: LH79524 timer driver
 *
 * Description:
 *     This file contains driver support for the timer modules on the
 *     LH79524
 *
 ***********************************************************************
 * Software that is described herein is for illustrative purposes only  
 * which provides customers with programming information regarding the  
 * products. This software is supplied "AS IS" without any warranties.  
 * NXP Semiconductors assumes no responsibility or liability for the 
 * use of the software, conveys no license or title under any patent, 
 * copyright, or mask work right to the product. NXP Semiconductors 
 * reserves the right to make changes in the software without 
 * notification. NXP Semiconductors also make no representation or 
 * warranty that such application will be suitable for the specified 
 * use without further testing or modification. 
 **********************************************************************/

#include "lh79524_rcpc.h"
#include "lh79524_timer_driver.h"

/* Jim added for testing */
extern void __init_timer0_int(void);

/* Defines for the ip block base address and driver control object */
#define REGS_T   TIMER0_REGS_T
#define DRIVER_T TIMER_T

/* Forward declarations of private methods */
static void timer0_isr (void);
static void timer0_default_isr (INT_32 devid);
static INT_32 timer0_set_interval(REGS_T* timer_regs, 
                                  UNS_32 usec,
                                  UNS_32 xtal_in);

/* Table of device base addresses */
static UNS_32 driverid[N_TIMER0] = 
{
  /* Timer 0 Base Address */
  TIMER0_BASE
};

/* Instansiations of the driver control object */
static DRIVER_T driver[N_TIMER0];

/* Address of the driver control objects */
static DRIVER_T* pdriver[N_TIMER0] = 
{
  (DRIVER_T*)&driver[0]
};

/* Address of the driver interrupt handlers  */
static void* driver_isr[N_TIMER0] =
{
  (void*)timer0_isr
};

/***********************************************************************
 * 
 * Function: timer0_open
 * 
 * Purpose: 
 *  Initialize the specified timer
 * 
 * Processing: 
 *  Sets up the device control structure for the timer.
 *
 * Parameters: 
 *  ipbase - ipbase is used as the device id
 *  arg    - system XTAL clock
 * 
 * Outputs: 
 *  None
 * 
 * Returns: 
 *  device id or 0
 * 
 * Notes: 
 *  None
 * 
 **********************************************************************/

INT_32 timer0_open (INT_32 ipbase, INT_32 arg)
{
  INT_32    dev_exists = FALSE;
  INT_32    devid      = 0;
  CHAR*     dst        = NULL;
  INT_32    idx        = 0;
  REGS_T*   pregs      = NULL;
  DRIVER_T* pdev       = NULL;      
  
  /* Find the device in the driver table */
  for (devid = 0; devid < NELEMENTS(driverid); devid++)
  {
    /* Do we have a match */
    if (ipbase == driverid[devid])
    {
      /* Found the device */
      dev_exists = TRUE;
      break;
    }
  }
  /* Check to make sure that the device exists */
  if (dev_exists == FALSE)
  {
    return (0);
  }
  
  /* Attach to the base address of the device */
  pdev = (DRIVER_T*)pdriver[devid];
  
  /* Make sure the device is not already opened */
  if (pdev->init == TRUE)
  {
    /* Device has already been opened */
    return (0);
  }
  
  /* Clear the driver control structure */
  dst = (CHAR*)pdev;
  for (idx = 0; idx < sizeof (DRIVER_T); idx++)
  {
    *dst++ = 0;
  }
  
  pdev->cfg.sys_clk = (UNS_32)arg;
  /* Attach to the base address of the selected uart */
  pdev->regs = (void*)driverid[devid];
  pregs      = (REGS_T*)pdev->regs;
  
  /* Mask all interrupts interrupts at the source */
  pregs->int_ctrl = ~TM0_INTCTRL_ALL;
  
  /* Clear the interrupt status register */
  pregs->status = TM0_INTCTRL_ALL;
  
  /* Save the default timer interrupt service routine */
  pdev->irq_hdlr = driver_isr[devid];
  
  /* Mark the device as open */
  pdev->init = TRUE;
  
  /* return device id */
  return ((INT_32)pdev);
}

/***********************************************************************
 * 
 * Function: timer0_close
 * 
 * Purpose: 
 *  Turn the driver off
 * 
 * Processing: 
 *
 * Parameters: 
 *  devid - device id
 * 
 * Outputs: 
 *  None
 * 
 * Returns: 
 *  _NO_ERROR if device is closed successfully.
 *  _ERROR otherwise.
 * 
 * Notes: None
 * 
 **********************************************************************/

STATUS timer0_close (INT_32 devid)
{
  STATUS    status = _NO_ERROR;
  INT_32    idx    = 0;
  CHAR*     dst    = NULL;
  DRIVER_T* pdev   = NULL;
  
  /* Sanity check */
  if (devid == 0)
  {
    /* device not opened or non-valid file handle */
    return (_ERROR);
  }
  
  /* Bind to the device control structure */
  pdev = (DRIVER_T*)devid;
  
  /* Make sure the device is already opened */
  if (pdev->init == FALSE)
  {
    return (_ERROR);
  }
  
  /* Stop the timer */
  (void) timer0_ioctl (devid, TIMER_STOP, 0);
  
  /* Clear the counter */
  (void) timer0_ioctl (devid, TIMER_CLEAR_CNT, 0);
  
  /* Disable all interrupts */
  (void) timer0_ioctl (devid, TIMER_DISABLE_INT, TM0_INTCTRL_ALL);
  
  /* Invalidate the device */
  pdev->init = FALSE;
  
  /* Clear the serial driver control structure */
  dst = (CHAR*)pdev;
  for (idx = 0; idx < sizeof (DRIVER_T); idx++)
  {
    *dst++ = 0;
  }
  
  /* Done */
  return (status);
}

/***********************************************************************
 * 
 * Function: timer0_read
 * 
 * Purpose: 
 *  Read the specified timer data.
 * 
 * Processing: 
 *
 * Parameters: 
 *  devid      - device id 
 *  buffer     - data buffer
 *  max_bytes  - maximum number of bytes to read
 * 
 * Outputs: 
 *  None
 * 
 * Returns: 
 *  n_bytes - the actual number of bytes read 
 *  
 * Notes: 
 *  Not supported with this driver
 * 
 **********************************************************************/

INT_32 timer0_read (INT_32 devid, 
                    CHAR*  buffer, 
                    INT_32 max_bytes)
{
  INT_32 n_bytes = 0;
  /* Not supported with this driver */
  return (n_bytes);
}

/***********************************************************************
 * 
 * Function: timer0_write
 * 
 * Purpose: 
 *  Write data to the timer.
 * 
 * Processing: 
 *
 * Parameters: 
 *  devid   - device id 
 *  buffer  - data buffer 
 *  n_bytes - number of bytes to write.
 * 
 * Outputs: 
 *  None
 * 
 * Returns: 
 *  actual_bytes - number of bytes written.
 * 
 * Notes: 
 *  Not supported with this driver
 * 
 **********************************************************************/

INT_32 timer0_write (INT_32 devid, 
                     CHAR*  buffer, 
                     INT_32 n_bytes)
{
  UNS_32 actual_bytes = 0;
  /* Not supported with this driver */
  return (actual_bytes);
}

/***********************************************************************
 * 
 * Function: timer0_ioctl
 * 
 * Purpose: 
 *  handle timert control requests.
 * 
 * Processing: Set/resets designated state in the device.
 *  
 *
 * Parameters:
 *  devid - device id
 *  cmd   - request to process
 *  arg   - generic argument 
 * 
 * Outputs: 
 *  None
 * 
 * Returns: 
 *  _NO_ERROR if device controlled successfully.
 *  _ERROR otherwise.
 * 
 * Notes: 
 *  None
 * 
 **********************************************************************/

STATUS timer0_ioctl (INT_32 devid, 
                     INT_32 cmd, 
                     INT_32 arg)
{
  UNS_32    temp   = 0; 
  INT_32    status = _NO_ERROR; 
  REGS_T*   pregs  = NULL;
  DRIVER_T* pdev   = NULL;
  
  /* Sanity check */
  if (devid == 0)
  {
    /* Null pointer */
    return (0);
  }
  
  /* Attach to the base address of the driver */
  pdev = (DRIVER_T*)devid;
  
  /* Make sure the device is already opened */
  if (pdev->init == FALSE)
  {
    return (_ERROR);
  }
  
  /* Attach to the base address of the selected timer */
  pregs = (REGS_T*)pdev->regs;
  
  /* Service the users request */
  switch (cmd)
  {
    /* Start a timer */  
  case TIMER_START:
    /* Get the current contents on the register */
    temp = pregs->ctrl;
    /* Set the CS bit B[1] = 1 */
    temp |= _SBF(1,1);
    /* Update the register */
    pregs->ctrl = temp;
    break;
    /* Stop a timer */
  case TIMER_STOP:
    /* Get the current contents on the register */
    temp = pregs->ctrl;
    /* Clear the CS bit B[1] = 0 */
    temp &= ~_SBF(1,1);
    /* Update the register */
    pregs->ctrl = temp;
    break;
    /* Clear a counter */
  case TIMER_CLEAR_CNT:
    /* Get the current contents on the register */
    temp = pregs->ctrl;
    /* Set the CCL bit B[0] = 1 */
    temp |= _SBF(0,1);
    /* Update the register */
    pregs->ctrl = temp;
    break;
    /* Set the clock rate */
  case TIMER_SET_CLK_RATE:
    {
      UNS_32 running = 0;
      /* Get the current state */
      temp = pregs->ctrl;
      /* Save the current counter state (start/stop) */
      running = temp & _SBF(1,1);
      /* First stop the counter */
      /* Clear the CS bit B[1] = 0 */
      temp &= ~_SBF(1,1);
      /* Update the register */
      pregs->ctrl = temp;
      /* Set the new time base */
      temp = pregs->ctrl;
      /* Clear the current count clock bit field B[4:2] */
      temp &= ~_SBF(2,7); 
      /* Set up the new clock rate - set B[4:2] */
      temp |= _SBF(2,arg);
      /* Update the config structure */
      pdev->cfg.clock_rate = _SBF(2,arg);
      /* Restore the intial timer state (start/stop) */
      pregs->ctrl = (temp | running);
    }
    break;
    /* Set the clock rate */
  case TIMER_GET_CLK_RATE:
    /* Sanity check */
    if ((void*)arg == NULL)
    {
      status = _ERROR;
      break;
    }
    /* Return the driver interrupt service routine */
    *(INT_32*)arg = pdev->cfg.clock_rate;
    break;
    /* Enable PWM mode */
  case TIMER_SET_PWM_MODE:
    /* Get the current contents on the register */
    temp = pregs->cmp_cap_ctrl;
    /* Clear the CMP1 and CMP0 fields B[13:12] and B[11:10] */
    temp &= ~(_SBF(12,3) | _SBF(10,3));
    temp |= _SBF(15,1) |  /* PWM bit set B[15] = 1 */
      _SBF(14,1)    |  /* TC bit set  B[14] = 1 */       
      _SBF(12,2)    |  /* CMP1 B[13:12] = 10    */
      _SBF(10,1);      /* CMP0 B[11:10] = 01    */
    /* Update the register */
    pregs->cmp_cap_ctrl = temp;
    /* EJA - hack need to fix  */
#define TIMER_MUX_REG (0xFFFE500C)
    /* Set up the pin muxing */
    *(volatile long*)TIMER_MUX_REG = 0;
    *(volatile long*)TIMER_MUX_REG |= _SBF(1,2);
    break;
    /* Enable free running counter mode */
  case TIMER_SET_CNT_MODE:
    /* Get the current contents on the register */
    temp = pregs->cmp_cap_ctrl;
    /* Clear the CMP1 and CMP0 fields B[13:12] and B[11:10] */
    temp &= ~(_SBF(12,3) | _SBF(10,3));
    temp |= _SBF(15,0) |  /* PWM bit set B[15] = 0 */
      _SBF(14,0);      /* TC bit set  B[14] = 0 */       
    /* Update the register */
    pregs->cmp_cap_ctrl = temp;
    break;
    /* Enable Periodic counter mode */
  case TIMER_SET_PERIODIC_MODE:
    timer0_set_interval(pregs, (UNS_32)arg, pdev->cfg.sys_clk);
    break;
    /* Mask interrupts at the source */ 
  case TIMER_DISABLE_INT:   
    /* Get the current state */
    temp = pregs->int_ctrl;
    /* Mask off the interrupt */
    temp &= ~arg;
    /* Update the interrupt control register */
    pregs->int_ctrl = temp;
    break;
    /* Unmask interrupts at the source */ 
  case TIMER_ENABLE_INT: 
    /* Get the current state */
    temp = pregs->int_ctrl;
    /* UnMask the interrupt */
    temp |= arg;
    /* Update the interrupt control register */
    pregs->int_ctrl = temp;
    /* Update the driver control object */
    pdev->imask = temp;
    break;
    /* Return pointer to device isr */
  case TIMER_GET_ISR:
    /* Sanity check */
    if ((void*)arg == NULL)
    {
      status = _ERROR;
      break;
    }
    /* Return the driver interrupt service routine */
    *(INT_32**)arg = (void*)pdev->irq_hdlr;
    break;
    /* Bind a callback method to be used by the timer isr */
  case TIMER_SET_CALLBACK:
    /* Save the interrupt callback method */
    pdev->callback = (PFI)arg;
    break;
    /* Set the timer status register */
  case TIMER_SET_STATUS:
    pregs->status = arg;
    break;
    /* Get the timer status register */
  case TIMER_GET_STATUS:
    /* Sanity check */
    if ((void*)arg == NULL)
    {
      status = _ERROR;
    }
    *(INT_32*)arg = pregs->status;
    break;
    /* Set the timer status register */
  case TIMER_SET_COUNT:
    pregs->cnt = arg;
    break;
    /* Get the timer status register */
  case TIMER_GET_COUNT:
    if ((void*)arg == NULL)
    {
      status = _ERROR;
    }
    *(INT_32*)arg = pregs->cnt;
    break;
    /* Set the timer status register */
  case TIMER_SET_CMP0:
    pregs->cmp0 = arg;
    break;
    /* Get the timer status register */
  case TIMER_GET_CMP0:
    if ((void*)arg == NULL)
    {
      status = _ERROR;
    }
    *(INT_32*)arg = pregs->cmp0;
    break;
    /* Set the timer status register */
  case TIMER_SET_CMP1:
    pregs->cmp1 = arg;
    break;
    /* Get the timer status register */
  case TIMER_GET_CMP1:
    if ((void*)arg == NULL)
    {
      status = _ERROR;
    }
    *(INT_32*)arg = pregs->cmp1;
    break;
    /* Set the timer status register */
  case TIMER_SET_CAP0:
    pregs->cap0 = arg;
    break;
    /* Get the timer status register */
  case TIMER_GET_CAP0:
    if ((void*)arg == NULL)
    {
      status = _ERROR;
    }
    *(INT_32*)arg = pregs->cap0;
    break;
    /* Set the timer status register */
  case TIMER_SET_CAP1:
    pregs->cap1 = arg;
    break;
    /* Get the timer status register */
  case TIMER_GET_CAP1:
    if ((void*)arg == NULL)
    {
      status = _ERROR;
    }
    *(INT_32*)arg = pregs->cap1;
    break;
    /* Set the timer compare and capture control register */
  case TIMER0_SET_CMP_CAP_CTRL:
    pregs->cmp_cap_ctrl = arg;
    break;
    /* Get the timer compare and capture control register */
  case TIMER0_GET_CMP_CAP_CTRL:
    if ((void*)arg == NULL)
    {
      status = _ERROR;
    }
    *(INT_32*)arg = pregs->cmp_cap_ctrl;
    break;
    /* Set the timer capture2 register */
  case TIMER0_SET_CAP2:
    break;
    /* Get the timer capture2 register */
  case TIMER0_GET_CAP2:
    if ((void*)arg == NULL)
    {
      status = _ERROR;
    }
    *(INT_32*)arg = pregs->cap2;
    break;
    /* Set the timer capture3 register */
  case TIMER0_SET_CAP3:
    pregs->cap3 = arg;
    break;
    /* Get the timer capture3 register */
  case TIMER0_GET_CAP3:
    if ((void*)arg == NULL)
    {
      status = _ERROR;
    }
    *(INT_32*)arg = pregs->cap3;
    break;
    /* Set the timer capture4 register */
  case TIMER0_SET_CAP4:
    pregs->cap4 = arg;
    break;
    /* Get the timer capture4 register */
  case TIMER0_GET_CAP4:
    if ((void*)arg == NULL)
    {
      status = _ERROR;
    }
    *(INT_32*)arg = pregs->cap4;
    break;
  default:
    status = _ERROR;
    break;
  }
  /* Return the io control status */
  return (status);
}

/************************************************************************
*
* Function: timer0_isr
*
* Purpose: 
*  Services the interrupt for a timer0.
*
* Processing:
*     
* Parameters: 
*  None
*
* Outputs: 
*  None
*
* Returns: 
*  None
*
* Notes: 
*  None
*
************************************************************************/

void timer0_isr (void)
{
  /* Call the default handler */
  timer0_default_isr ((INT_32)pdriver[0]);
}

/************************************************************************
*
* Function: timer0_default_handler
*
* Purpose: 
*  Services the interrupt for a timer0.
*
* Processing:
*     
* Parameters: 
*  None
*
* Outputs: 
*  None
*
* Returns: 
*  None
*
* Notes: 
*  None
*
************************************************************************/

static void timer0_default_isr (INT_32 devid)
{
  REGS_T*   pregs = NULL;
  DRIVER_T* pdev  = NULL; 
  
  /* Attach to the base address of the driver */
  pdev = (DRIVER_T*)devid;
  
  /* Attach to the base address of the selected timer */
  pregs = (REGS_T*)pdev->regs;
  
  /* Stop the timer */
  (void) timer0_ioctl (devid, TIMER_STOP, 0);
  
  /* Clear the timer */
  (void) timer0_ioctl (devid, TIMER_CLEAR_CNT, 0);
  
  /* Check if the counter has expired */
  if (pdev->callback != NULL)
  {
    /* Execute the callback method */
    (*(PFI)pdev->callback) ();
  }
  
  /* Clear the interrupt at the source */
  pregs->status = pdev->imask;
  
  /* Start the timer */
  (void) timer0_ioctl (devid, TIMER_START, 0);
}

/*********************************************************************** 
 * 
 * Function: timer_set_interval 
 * 
 * Purpose: 
 *  Initialize the specified timer as an interval timer that clears 
 *  itself after the specified interval 
 * 
 * Processing: 
 *  Set the TC bit of the ctrl register and set CMP1 and the prescaler
 *  bits in the control register to values appropriate to the timer 
 *  interval. Find these values by trying every prescaler and CMP1 
 *  combination and determining which gives the smallest difference
 *  from the requested interval. Return _ERROR if the clock source 
 *  cannot generate a periodic time base.
 * 
 * Parameters: 
 *  timer:      either TIMER0, TIMER1 or TIMER2 
 *              (see LH79524_timer_driver.h) 
 *  usec:       the requested interval in microseconds 
  *  xtal_in:    On board oscillator clock 
* 
 * Outputs: None. 
 * 
 * Returns: 
 *  the actual timer interval in microseconds that can be obtained with 
 *  the specified clock source or _ERROR if usec is out of range
 * 
 * Notes: 
 *  If the interval is too short, the function will set the interval 
 *  to the minimum available. If the interval is too long, the 
 *  interval will be set to the maximum. Users of this function should 
 *  check the return code to make sure the interval is close enough 
 *  to the requested interval. 
 * 
 **********************************************************************/ 
static INT_32 timer0_set_interval(REGS_T* timer_regs, 
                                  UNS_32 usec,
                                  UNS_32 xtal_in)
{
  INT_32 counts, new_counts;
  UNS_32 new_usec, best_usec, hclk;
  UNS_32 prescale_index, best_prescale_index;
  UNS_32 max_interval, min_interval;
  INT_32 delta, best_delta;
  
  hclk = RCPC_GET_HCLK(xtal_in);
  max_interval = (UNS_32)(((UNS_64)_BIT(16) * 
    (UNS_64)USECS_PER_SEC) / 
    ((UNS_64)hclk / (UNS_64)128));
  if (usec > max_interval)
    usec = max_interval;
  min_interval = 2 * USECS_PER_SEC / hclk;
  if (usec < min_interval)
    usec = min_interval;
  
  best_delta = usec;
  
  /* minimize the error in timing the interval */
  for (best_prescale_index = 0, prescale_index = 0, best_usec = 0; 
  prescale_index < TM0_CTRL_CTCLK;
  prescale_index++)
  {
    new_counts = (UNS_32)((UNS_64)usec * 
      (UNS_64)(hclk / (1 << (prescale_index + 1))) /
      (UNS_64)USECS_PER_SEC) - 1;
    
    if (new_counts <= 0)
      new_counts = 1;
    
    new_counts &= _BITMASK(16); /* cmp1 register 16 bits.*/
    new_usec = USECS_PER_SEC / (hclk / 
      (_BIT(prescale_index + 1) * new_counts));
    delta = usec - new_usec;
    if (delta < 0)
      delta = -delta;
    if (delta <= best_delta) /* use <= to maximize prescale*/
    {                
      best_delta = delta;
      best_prescale_index = prescale_index;
      best_usec = new_usec;
      counts = new_counts;
    }
  } /* end for*/
  
  /* counts and best_prescale_index are initialized */
  timer_regs->cmp1 =  counts;
  timer_regs->ctrl &= ~TM0_CTRL_SEL(TM0_CTRL_CTCLK);
  timer_regs->ctrl |= TM0_CTRL_SEL(best_prescale_index);
  timer_regs->cmp_cap_ctrl  = TM0_CMPCAP_TC;
  return usec;
}







