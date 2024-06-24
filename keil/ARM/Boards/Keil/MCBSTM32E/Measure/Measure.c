/*----------------------------------------------------------------------------
 *      Name:    MEASURE.C
 *      Purpose: Remote Measurement Recorder
 *      Version: V1.10
 *----------------------------------------------------------------------------
 *      This file is part of the uVision/ARM development tools.
 *      This software may only be used under the terms of a valid, current,
 *      end user licence from KEIL for a compatible version of KEIL software
 *      development tools. Nothing else gives you the right to use it.
 *
 *      Copyright (c) 2005-2007 Keil Software.
 *---------------------------------------------------------------------------*/

#include <stdio.h>                          /* standard I/O .h-file           */
#include <ctype.h>                          /* character functions            */
#include <stm32f10x_lib.h>                  /* STM32F10x Library Definitions  */
#include "STM32_Init.h"                     /* STM32 Initialization           */

#include "measure.h"                        /* global project definition file */
#include "GLCD.h"                                 // GLCD function prototypes


unsigned long TimeTick;                     /* counts 10ms timeTicks          */

/*------------------------------------------------------------------------------
  Additional LCD defines and functions used to draw a bargraph
 *------------------------------------------------------------------------------*/
#define FONT_WIDTH      16
#define FONT_HEIGHT     24
#define DISPLAY_WIDTH  320

void GLCD_DisplayStringPos(unsigned short x, unsigned short y, unsigned char *str) {
  unsigned short yCur = y;   // column0 = 319

  while (*str) {
    GLCD_displayChar(x, yCur, *str++);
    yCur -= FONT_WIDTH;
  }
}
const char menu[] =
   "\n"
   "+***************** REMOTE MEASUREMENT RECORDER *****************+\n"
   "| This program is a simple Measurement Recorder based on the    |\n"
   "| STM32F103 controller. It records the state of GPIOG (Joystick)|\n"
   "| and the voltage on the analog input ADC1 channel14.           |\n"
   "+ command -+ syntax -----+ function ----------------------------+\n"
   "| Read     | R [n]       | read <n> recorded measurements       |\n"
   "| Display  | D           | display current measurement values   |\n"
   "| Time     | T hh:mm:ss  | set time                             |\n"
   "| Interval | I mm:ss.ttt | set interval time                    |\n"
   "| Clear    | C           | clear measurement records            |\n"
   "| Quit     | Q           | quit measurement recording           |\n"
   "| Start    | S           | start measurement recording          |\n"
   "+----------+-------------+--------------------------------------+\n";

struct interval setinterval;                /* interval setting values        */
struct interval interval;                   /* interval counter               */

volatile int measurement_interval = 0;      /* measurement interval over      */
volatile int mdisplay = 0;                  /* measurement display requested  */
volatile int startflag = 0;                 /* start measurement recording    */

struct mrec current;                        /* current measurements           */

#define SCNT 20                             /* number of records              */

struct mrec save_record[SCNT];              /* buffer for measurements        */
int sindex;                                 /* save index                     */
int savefirst;                              /* save first index               */

char ERROR_STR [] = "\n*** ERROR: %s\n";    /* ERROR message string in code   */

#define WRONGINDEX 0xffff                   /* error signal for wrong index   */


/******************************************************************************/
/*               Save current measurements in save_record                     */
/******************************************************************************/
static void save_current_measurements (void) {
  save_record[sindex++] = current;             /* copy current measurements   */
  if (sindex == SCNT) sindex = 0;              /* check bounds of sindex      */
  if (sindex == savefirst)  {                  /* check circular buffer limits*/
    if (++savefirst == SCNT)  savefirst = 0;   /* check bounds of savefirst   */
  }
}


/******************************************************************************/
/*               Initialises the Analog/Digital converter                     */
/*               PA1 (ADC Channel1) is used as analog input                   */
/*               use DMA Channel1 for ADC1 (see DMA request mapping)          */
/******************************************************************************/
void adc_Init (void) {

//  GPIOC->CRL &= ~0x000F0000;                    /* set PIN4 as analog input (see stm32_Init.c) */

  RCC->AHBENR |= (1<<0);                       /* enable periperal clock for DMA       */

  DMA1_Channel1->CMAR  = (unsigned long) current.analog; /* set chn1 memory address     */
  DMA1_Channel1->CPAR  = (unsigned long)&(ADC1->DR);     /* set chn1 peripheral address */
  DMA1_Channel1->CNDTR = 1;                    /* transmit 1 words                     */
  DMA1_Channel1->CCR   = 0x00002520;           /* configure DMA channel 1              */
                                               /* circular mode,                       */
                                               /* memory & peripheral size 16bit       */
                                               /* channel priotity high                */
  DMA1_Channel1->CCR  |= (1 << 0);             /* enable DMA Channe1                   */

  RCC->APB2ENR |= (1<<9);                      /* enable periperal clock for ADC1      */

  ADC1->SQR1  = 0x00000000;                    /* three conversions                    */
  ADC1->SQR3  = (14<< 0);                      /* set order to chn14                   */
  ADC1->SMPR1 = ( 5<<12);                      /* set sample time (55,5 cycles)        */ 

  ADC1->CR1   =  0x00000100;                   /* use independant mode, SCAN mode      */
  ADC1->CR2   =  0x000E0103;                   /* data align right, cont. conversion   */
                                               /* EXTSEL = SWSTART                     */ 
                                               /* enable ADC, DMA mode                 */
  ADC1->CR2  |=  0x00500000;                   /* start SW conversion                  */

}



/******************************************************************************/
/*                Timer Counter 3 interrupt service function                  */
/*                executes each 1ms @ 8 MHz Crystal Clock                     */
/******************************************************************************/
void TIM3_IRQHandler (void) {

  if (TIM3->SR & (1<<0)) {                     /* UIF interrupt ?             */
    if (measurement_interval)  {               /* measurement done ?          */
      save_current_measurements ();            /* yes -> save measurements    */
      measurement_interval = 0;                /* Save measurements done      */
    }
                                               /* check if interval is over   */
    if (interval.min  == 0 &&
        interval.sec  == 0 &&
        interval.msec == 0     )  {
      interval = setinterval;                  /* set interval time again     */
      measurement_interval = startflag;        /* determine measurement flag  */
    }
    else  {                                    /* update interval time        */
      if (interval.msec-- == 0)  {             /* calculate millisecond       */
        interval.msec = 999;
        if (interval.sec-- == 0)  {            /* calculate second            */
          interval.sec = 59;
          interval.min--;                      /* calculate minute            */
        }
      }
    }
                                               /* update current time         */
    if (++current.time.msec == 1000)  {        /* update millisecond cnt      */
      current.time.msec = 0;

      if (++current.time.sec == 60)  {         /* update second counter       */
        current.time.sec = 0;

        if (++current.time.min == 60)  {       /* update minute counter       */
          current.time.min = 0;

          if (++current.time.hour == 24)  {    /* update hour counter         */
            current.time.hour = 0;
          }
        }
      }
    }	/* end of if( ++current.time.msec... */

    if (current.time.msec == 0) {
      GPIOB->BSRR = (1<<8);                    /* Turn LED#1 On               */
    }
    if (current.time.msec == 100) {
      GPIOB->BRR  = (1<<8);                    /* Turn LED#1 Off              */
    }
  
    if (measurement_interval || mdisplay)  {   /* process measurement         */
      current.gpio = GPIOG->IDR;               /* Joystick (right,left,up,sel)*/

      /* converted values a transmitted via DMA */
//      current.analog[0] = ADC1->DR & 0x0FFF;   /* AD value (12 bit)           */

      mdisplay = 0;                            /* mdisplay = 0 for ready sig. */
    }

    TIM3->SR &= ~(1<<0);                       /* clear UIF flag              */
  }

}


/******************************************************************************/
/*                       Calculate first Read Index                           */
/******************************************************************************/
static int read_index (char *buffer) {
  int index = 0;
  int args;

  if (setinterval.min == 0     &&              /* check if setinterval is     */
      setinterval.sec == 0     &&              /* below 1 second and          */
      setinterval.msec < 999   &&              /* measurements are collected  */
      startflag                   )  {
    printf (ERROR_STR, "QUIT MEASUREMENTS BEFORE READ");
    return (WRONGINDEX);                       /* no display on the fly if    */
  }                                            /* interval time < 1 second    */
  args = sscanf (buffer, "%d", &index);        /* scan input for read count   */
  if (args == 0  ||  index == 0  || args == EOF)  index = SCNT-1;
  index = sindex - index;                      /* calculate first read index  */
  if (index < 0) index += SCNT;                /* from read count             */
  return (index);
}


/******************************************************************************/
/*                         Clear Measurement Records                          */
/******************************************************************************/
static void clear_records (void) {
  int idx;                                     /* index for loop              */

  startflag = 0;                               /* stop measurement collecting */
  sindex = savefirst = 0;                      /* reset circular buffer index */
  for (idx = 0; idx != SCNT; idx++)  {         /* mark all records unused     */
    save_record[idx].time.hour = 0xff;         /* unused flag: hour = 0xff    */
  }
}

/******************************************************************************/
/*                         Update LCD Display                                 */
/******************************************************************************/
void updLCD (unsigned char state) {
  char sDisplay[20];                           /* buffer used for sprintf()   */

  switch (state) {
    case 0:
      GLCD_setTextColor(Blue);
      GLCD_displayStringLn(Line6, "GPIOG: ");
      GLCD_displayStringLn(Line7, "ADC1.14: ");
      GLCD_displayStringLn(Line8, "Time: ");
      break;

    case 1:
      GLCD_setTextColor(Red);
      sprintf(sDisplay, "%02X", (int)current.gpio);
      GLCD_DisplayStringPos(Line6, DISPLAY_WIDTH-8*FONT_WIDTH, (unsigned char *)sDisplay);
      sprintf(sDisplay, "%4.2fV", (float)current.analog[0] * 3.3 / 0xFFF);
      GLCD_DisplayStringPos(Line7, DISPLAY_WIDTH-9*FONT_WIDTH, (unsigned char *)sDisplay);
      sprintf(sDisplay, "%02d:%02d:%02d.%03d", current.time.hour, current.time.min, current.time.sec, current.time.msec);
      GLCD_DisplayStringPos(Line8, DISPLAY_WIDTH-6*FONT_WIDTH, (unsigned char *)sDisplay);

      GLCD_setTextColor(Green);
    
      if (current.gpio & (1<<14))                                    /* evaluate  "Left" Key */
        GLCD_displayChar(Line6, DISPLAY_WIDTH-17*FONT_WIDTH, 0x80+8); /* key released         */
      else
        GLCD_displayChar(Line6, DISPLAY_WIDTH-17*FONT_WIDTH, 0x80+9); /* key pressed          */

      if (current.gpio & (1<<13))                                    /* evaluate "Right" Key */
        GLCD_displayChar(Line6, DISPLAY_WIDTH-19*FONT_WIDTH, 0x80+10);
      else
        GLCD_displayChar(Line6, DISPLAY_WIDTH-19*FONT_WIDTH, 0x80+11);

      if (current.gpio & (1<<15))                                    /* evaluate    "Up" Key */
        GLCD_displayChar(Line5, DISPLAY_WIDTH-18*FONT_WIDTH, 0x80+4);
      else
        GLCD_displayChar(Line5, DISPLAY_WIDTH-18*FONT_WIDTH, 0x80+5);

      if (current.gpio & (1<<7))                                     /* evaluate   "Sel" Key */
        GLCD_displayChar(Line6, DISPLAY_WIDTH-18*FONT_WIDTH, 0x80+0);
      else
        GLCD_displayChar(Line6, DISPLAY_WIDTH-18*FONT_WIDTH, 0x80+1);
      
      break;

    case 2:
      GLCD_setTextColor(White);
      GLCD_clearLn(Line5);
      GLCD_clearLn(Line6);
      GLCD_clearLn(Line7);
      GLCD_clearLn(Line8);
      GLCD_clearLn(Line9);
      break;
  }

}

/******************************************************************************/
/*                         Clear LCD Display  (lines 3..9)                    */
/******************************************************************************/
void clrLCD (void) {
}


/******************************************************************************/
/***************************      MAIN PROGRAM      ***************************/
/******************************************************************************/
int main (void)  {                             /* main entry for program      */
  char cmdbuf [15];                            /* command input buffer        */
  int i;                                       /* index for command buffer    */
  int idx;                                     /* index for circular buffer   */

  /*--------------------------------------------------------------------------*/
  stm32_Init ();                               /* STM32 setup                 */
  adc_Init();                                  /* initialise A/D converter    */

  GLCD_init();                                 /* Initialize the GLCD         */
  GLCD_clear(White);                           /* Clear the GLCD              */

  GLCD_setBackColor(Blue);                     /* Set the Back Color          */
  GLCD_setTextColor(White);                    /* Set the Text Color          */
  GLCD_displayStringLn(Line0, "   MCBSTM32E Demo   ");
  GLCD_displayStringLn(Line1, "      Measure       ");
  GLCD_displayStringLn(Line2, "    www.keil.com    ");
  GLCD_setBackColor(White);                    /* Set the Back Color          */
  GLCD_setTextColor(Blue);                     /* Set the Text Color          */

  clear_records ();                            /* initialize circular buffer  */
  printf ( menu );                             /* display command menu        */

  while (1)  {                                 /* loop forever                */
    printf ("\nCommand: ");
    getline (&cmdbuf[0], sizeof (cmdbuf));     /* input command line          */

    for (i = 0; cmdbuf[i] != 0; i++)  {        /* convert to upper characters */
      cmdbuf[i] = toupper(cmdbuf[i]);
    }

    for (i = 0; cmdbuf[i] == ' '; i++);        /* skip blanks                 */

    switch (cmdbuf[i])  {                      /* proceed to command function */

      case 'R':                                /* Read circular Buffer        */
        if ((idx = read_index (&cmdbuf[i+1])) == WRONGINDEX)  break;
        while (idx != sindex)  {               /* check end of table          */
          if (USART2->SR & 0x0020)  {          /* check serial interface      */
            if (getkey() == 0x1B) break;       /* for escape character        */
          }
          if (save_record[idx].time.hour != 0xff)  {
            measure_display (save_record[idx]);      /* display record        */
            printf ("\n");
          }
          if (++idx == SCNT) idx = 0;          /* next circular buffer entry  */
        }
        break;

      case 'T':                                /* Enter Current Time          */
        set_time (&cmdbuf[i+1]);
        break;

      case 'I':                                /* Enter Interval Time         */
        set_interval (&cmdbuf[i+1]);
        break;

      case 'D':                                /* Display Command             */
        printf ("\nDisplay current Measurements: (ESC to abort)\n");
        updLCD (0);                            /* display initial Text        */
        do  {
          while (!(USART2->SR & 0x0020))  {    /* check serial interface      */
            mdisplay = 1;                      /* request measurement         */
            while (mdisplay);                  /* wait for measurement        */
            measure_display (current);         /* display values              */
            updLCD (1);                        /* update display              */
          }
        } while (getkey () != 0x1B);           /* escape terminates command   */
        printf ("\n\n");
        updLCD (2);                            /* cleser used display lines   */
        break;

      case 'S':                                /* Start Command               */
        printf ("\nStart Measurement Recording\n");
        startflag = 1;
        break;

      case 'Q':                                /* Quit Command                */
        printf ("\nQuit Measurement Recording\n");
        startflag = 0;
        break;

      case 'C':                                /* Clear Command               */
        printf ("\nClear Measurement Records\n");
        clear_records ();
        break;

      default:                                 /* Error Handling              */
        printf (ERROR_STR, "UNKNOWN COMMAND");
        printf (menu);                         /* display command menu        */
        break;
    }
  }
}

