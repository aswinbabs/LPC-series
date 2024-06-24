/***********************************************************************/
/*  This file is part of the uVision/ARM development tools             */
/*  Copyright KEIL ELEKTRONIK GmbH 2002-2005                           */
/***********************************************************************/
/*                                                                     */
/*  STR91x.h:   Header file for STMicroelectronics STR910 / STR912     */
/*                                                                     */
/***********************************************************************/

#ifndef __STR91X_H
#define __STR91X_H

#define TIM0_BASE       (0x58002000)
#define TIM1_BASE       (0x58003000)
#define TIM2_BASE       (0x58004000)
#define TIM3_BASE       (0x58005000)
#define SCU_BASE        (0x5C002000)
#define ADC_BASE        (0x5C00A000)
#define GPIO4_BASE      (0x5800A000)
#define GPIO5_BASE      (0x5800B000)
#define GPIO6_BASE      (0x5800C000)
#define GPIO7_BASE      (0x5800D000)
#define GPIO8_BASE      (0x5800E000)
#define GPIO9_BASE      (0x5800F000)
#define VIC0_BASE       (0xFFFFF000)
#define VIC1_BASE       (0xFC000000)


#define TIM0_IC1R         ((volatile unsigned long *)(TIM0_BASE+0x000))
#define TIM0_IC2R         ((volatile unsigned long *)(TIM0_BASE+0x004))
#define TIM0_OC1R         ((volatile unsigned long *)(TIM0_BASE+0x008))
#define TIM0_OC2R         ((volatile unsigned long *)(TIM0_BASE+0x00C))
#define TIM0_CNTR         ((volatile unsigned long *)(TIM0_BASE+0x010))
#define TIM0_CR1          ((volatile unsigned long *)(TIM0_BASE+0x014))
#define TIM0_CR2          ((volatile unsigned long *)(TIM0_BASE+0x018))
#define TIM0_SR           ((volatile unsigned long *)(TIM0_BASE+0x01C))

#define TIM1_IC1R         ((volatile unsigned long *)(TIM1_BASE+0x000))
#define TIM1_IC2R         ((volatile unsigned long *)(TIM1_BASE+0x004))
#define TIM1_OC1R         ((volatile unsigned long *)(TIM1_BASE+0x008))
#define TIM1_OC2R         ((volatile unsigned long *)(TIM1_BASE+0x00C))
#define TIM1_CNTR         ((volatile unsigned long *)(TIM1_BASE+0x010))
#define TIM1_CR1          ((volatile unsigned long *)(TIM1_BASE+0x014))
#define TIM1_CR2          ((volatile unsigned long *)(TIM1_BASE+0x018))
#define TIM1_SR           ((volatile unsigned long *)(TIM1_BASE+0x01C))

#define TIM2_IC1R         ((volatile unsigned long *)(TIM2_BASE+0x000))
#define TIM2_IC2R         ((volatile unsigned long *)(TIM2_BASE+0x004))
#define TIM2_OC1R         ((volatile unsigned long *)(TIM2_BASE+0x008))
#define TIM2_OC2R         ((volatile unsigned long *)(TIM2_BASE+0x00C))
#define TIM2_CNTR         ((volatile unsigned long *)(TIM2_BASE+0x010))
#define TIM2_CR1          ((volatile unsigned long *)(TIM2_BASE+0x014))
#define TIM2_CR2          ((volatile unsigned long *)(TIM2_BASE+0x018))
#define TIM2_SR           ((volatile unsigned long *)(TIM2_BASE+0x01C))

#define TIM3_IC1R         ((volatile unsigned long *)(TIM3_BASE+0x000))
#define TIM3_IC2R         ((volatile unsigned long *)(TIM3_BASE+0x004))
#define TIM3_OC1R         ((volatile unsigned long *)(TIM3_BASE+0x008))
#define TIM3_OC2R         ((volatile unsigned long *)(TIM3_BASE+0x00C))
#define TIM3_CNTR         ((volatile unsigned long *)(TIM3_BASE+0x010))
#define TIM3_CR1          ((volatile unsigned long *)(TIM3_BASE+0x014))
#define TIM3_CR2          ((volatile unsigned long *)(TIM3_BASE+0x018))
#define TIM3_SR           ((volatile unsigned long *)(TIM3_BASE+0x01C))

#define SCU_PRR0          ((volatile unsigned long *)(SCU_BASE+0x01C))
#define SCU_PRR1          ((volatile unsigned long *)(SCU_BASE+0x020))
#define SCU_GPIOANA       ((volatile unsigned long *)(SCU_BASE+0x0BC))

#define SCU_GPIOOUT0      ((volatile unsigned long *)(SCU_BASE+0x044))
#define SCU_GPIOIN0       ((volatile unsigned long *)(SCU_BASE+0x064))

#define SCU_GPIOOUT4      ((volatile unsigned long *)(SCU_BASE+0x054))
#define SCU_GPIOIN4       ((volatile unsigned long *)(SCU_BASE+0x074))
#define SCU_GPIOTYPE4     ((volatile unsigned long *)(SCU_BASE+0x094))
#define GPIO4_DIR         ((volatile unsigned char *)(GPIO4_BASE+0x400))

#define SCU_GPIOOUT5      ((volatile unsigned long *)(SCU_BASE+0x058))
#define GPIO5_DIR         ((volatile unsigned char *)(GPIO5_BASE+0x400))
#define GPIO5_LED         ((volatile unsigned char *)(GPIO5_BASE+0x3FC))
  
#define SCU_GPIOOUT6      ((volatile unsigned long *)(SCU_BASE+0x05C))
#define GPIO6_DIR         ((volatile unsigned char *)(GPIO6_BASE+0x400))
#define GPIO6_LED         ((volatile unsigned char *)(GPIO6_BASE+0x3FC))

#define SCU_GPIOOUT7      ((volatile unsigned long *)(SCU_BASE+0x060))
#define GPIO7_DIR         ((volatile unsigned char *)(GPIO7_BASE+0x400))
#define GPIO7_LED         ((volatile unsigned char *)(GPIO7_BASE+0x3FC))

#define GPIO8_DIR         ((volatile unsigned char *)(GPIO8_BASE+0x400))
#define GPIO8_LCD_DATA    ((volatile unsigned char *)(GPIO8_BASE+0x3FC))

#define GPIO9_DIR         ((volatile unsigned char *)(GPIO9_BASE+0x400))
#define GPIO9_LED         ((volatile unsigned char *)(GPIO9_BASE+0x03C))
#define GPIO9_LCD_E       ((volatile unsigned char *)(GPIO9_BASE+0x004))
#define GPIO9_LCD_RW      ((volatile unsigned char *)(GPIO9_BASE+0x008))
#define GPIO9_LCD_RS      ((volatile unsigned char *)(GPIO9_BASE+0x010))
#define GPIO9_LCD_CTRL    ((volatile unsigned char *)(GPIO9_BASE+0x01C))

#define ADC_CR            ((volatile unsigned long *)(ADC_BASE+0x000))
#define ADC_CCR           ((volatile unsigned long *)(ADC_BASE+0x004))
#define ADC_DR0           ((volatile unsigned long *)(ADC_BASE+0x014))
#define ADC_DR6           ((volatile unsigned long *)(ADC_BASE+0x02C))

#define VIC0_IRQStatus    ((volatile unsigned long *)(VIC0_BASE+0x000))
#define VIC0_FIQStatus    ((volatile unsigned long *)(VIC0_BASE+0x004))
#define VIC0_RawIntr      ((volatile unsigned long *)(VIC0_BASE+0x008))
#define VIC0_IntSelect    ((volatile unsigned long *)(VIC0_BASE+0x00C))
#define VIC0_IntEnable    ((volatile unsigned long *)(VIC0_BASE+0x010))
#define VIC0_IntEnClear   ((volatile unsigned long *)(VIC0_BASE+0x014))
#define VIC0_SoftInt      ((volatile unsigned long *)(VIC0_BASE+0x018))
#define VIC0_SoftIntClear ((volatile unsigned long *)(VIC0_BASE+0x01C))
#define VIC0_Protection   ((volatile unsigned long *)(VIC0_BASE+0x020))
#define VIC0_CurrVectAddr ((volatile unsigned long *)(VIC0_BASE+0x030))
#define VIC0_DefVectAddr  ((volatile unsigned long *)(VIC0_BASE+0x034))
#define VIC0_VectAddr0    ((volatile unsigned long *)(VIC0_BASE+0x100))
#define VIC0_VectAddr1    ((volatile unsigned long *)(VIC0_BASE+0x104))
#define VIC0_VectAddr2    ((volatile unsigned long *)(VIC0_BASE+0x108))
#define VIC0_VectAddr3    ((volatile unsigned long *)(VIC0_BASE+0x10C))
#define VIC0_VectAddr4    ((volatile unsigned long *)(VIC0_BASE+0x110))
#define VIC0_VectAddr5    ((volatile unsigned long *)(VIC0_BASE+0x114))
#define VIC0_VectAddr6    ((volatile unsigned long *)(VIC0_BASE+0x118))
#define VIC0_VectAddr7    ((volatile unsigned long *)(VIC0_BASE+0x11C))
#define VIC0_VectAddr8    ((volatile unsigned long *)(VIC0_BASE+0x120))
#define VIC0_VectAddr9    ((volatile unsigned long *)(VIC0_BASE+0x124))
#define VIC0_VectAddr10   ((volatile unsigned long *)(VIC0_BASE+0x128))
#define VIC0_VectAddr11   ((volatile unsigned long *)(VIC0_BASE+0x12C))
#define VIC0_VectAddr12   ((volatile unsigned long *)(VIC0_BASE+0x130))
#define VIC0_VectAddr13   ((volatile unsigned long *)(VIC0_BASE+0x134))
#define VIC0_VectAddr14   ((volatile unsigned long *)(VIC0_BASE+0x138))
#define VIC0_VectAddr15   ((volatile unsigned long *)(VIC0_BASE+0x13C))
#define VIC0_VectCntl0    ((volatile unsigned long *)(VIC0_BASE+0x200))
#define VIC0_VectCntl1    ((volatile unsigned long *)(VIC0_BASE+0x204))
#define VIC0_VectCntl2    ((volatile unsigned long *)(VIC0_BASE+0x208))
#define VIC0_VectCntl3    ((volatile unsigned long *)(VIC0_BASE+0x20C))
#define VIC0_VectCntl4    ((volatile unsigned long *)(VIC0_BASE+0x210))
#define VIC0_VectCntl5    ((volatile unsigned long *)(VIC0_BASE+0x214))
#define VIC0_VectCntl6    ((volatile unsigned long *)(VIC0_BASE+0x218))
#define VIC0_VectCntl7    ((volatile unsigned long *)(VIC0_BASE+0x21C))
#define VIC0_VectCntl8    ((volatile unsigned long *)(VIC0_BASE+0x220))
#define VIC0_VectCntl9    ((volatile unsigned long *)(VIC0_BASE+0x224))
#define VIC0_VectCntl10   ((volatile unsigned long *)(VIC0_BASE+0x228))
#define VIC0_VectCntl11   ((volatile unsigned long *)(VIC0_BASE+0x22C))
#define VIC0_VectCntl12   ((volatile unsigned long *)(VIC0_BASE+0x230))
#define VIC0_VectCntl13   ((volatile unsigned long *)(VIC0_BASE+0x234))
#define VIC0_VectCntl14   ((volatile unsigned long *)(VIC0_BASE+0x238))
#define VIC0_VectCntl15   ((volatile unsigned long *)(VIC0_BASE+0x23C))

#define VIC1_IRQStatus    ((volatile unsigned long *)(VIC1_BASE+0x000))
#define VIC1_FIQStatus    ((volatile unsigned long *)(VIC1_BASE+0x004))
#define VIC1_RawIntr      ((volatile unsigned long *)(VIC1_BASE+0x008))
#define VIC1_IntSelect    ((volatile unsigned long *)(VIC1_BASE+0x00C))
#define VIC1_IntEnable    ((volatile unsigned long *)(VIC1_BASE+0x010))
#define VIC1_IntEnClear   ((volatile unsigned long *)(VIC1_BASE+0x014))
#define VIC1_SoftInt      ((volatile unsigned long *)(VIC1_BASE+0x018))
#define VIC1_SoftIntClear ((volatile unsigned long *)(VIC1_BASE+0x01C))
#define VIC1_Protection   ((volatile unsigned long *)(VIC1_BASE+0x020))
#define VIC1_CurrVectAddr ((volatile unsigned long *)(VIC1_BASE+0x030))
#define VIC1_DefVectAddr  ((volatile unsigned long *)(VIC1_BASE+0x034))
#define VIC1_VectAddr0    ((volatile unsigned long *)(VIC1_BASE+0x100))
#define VIC1_VectAddr1    ((volatile unsigned long *)(VIC1_BASE+0x104))
#define VIC1_VectAddr2    ((volatile unsigned long *)(VIC1_BASE+0x108))
#define VIC1_VectAddr3    ((volatile unsigned long *)(VIC1_BASE+0x10C))
#define VIC1_VectAddr4    ((volatile unsigned long *)(VIC1_BASE+0x110))
#define VIC1_VectAddr5    ((volatile unsigned long *)(VIC1_BASE+0x114))
#define VIC1_VectAddr6    ((volatile unsigned long *)(VIC1_BASE+0x118))
#define VIC1_VectAddr7    ((volatile unsigned long *)(VIC1_BASE+0x11C))
#define VIC1_VectAddr8    ((volatile unsigned long *)(VIC1_BASE+0x120))
#define VIC1_VectAddr9    ((volatile unsigned long *)(VIC1_BASE+0x124))
#define VIC1_VectAddr10   ((volatile unsigned long *)(VIC1_BASE+0x128))
#define VIC1_VectAddr11   ((volatile unsigned long *)(VIC1_BASE+0x12C))
#define VIC1_VectAddr12   ((volatile unsigned long *)(VIC1_BASE+0x130))
#define VIC1_VectAddr13   ((volatile unsigned long *)(VIC1_BASE+0x134))
#define VIC1_VectAddr14   ((volatile unsigned long *)(VIC1_BASE+0x138))
#define VIC1_VectAddr15   ((volatile unsigned long *)(VIC1_BASE+0x13C))
#define VIC1_VectCntl0    ((volatile unsigned long *)(VIC1_BASE+0x200))
#define VIC1_VectCntl1    ((volatile unsigned long *)(VIC1_BASE+0x204))
#define VIC1_VectCntl2    ((volatile unsigned long *)(VIC1_BASE+0x208))
#define VIC1_VectCntl3    ((volatile unsigned long *)(VIC1_BASE+0x20C))
#define VIC1_VectCntl4    ((volatile unsigned long *)(VIC1_BASE+0x210))
#define VIC1_VectCntl5    ((volatile unsigned long *)(VIC1_BASE+0x214))
#define VIC1_VectCntl6    ((volatile unsigned long *)(VIC1_BASE+0x218))
#define VIC1_VectCntl7    ((volatile unsigned long *)(VIC1_BASE+0x21C))
#define VIC1_VectCntl8    ((volatile unsigned long *)(VIC1_BASE+0x220))
#define VIC1_VectCntl9    ((volatile unsigned long *)(VIC1_BASE+0x224))
#define VIC1_VectCntl10   ((volatile unsigned long *)(VIC1_BASE+0x228))
#define VIC1_VectCntl11   ((volatile unsigned long *)(VIC1_BASE+0x22C))
#define VIC1_VectCntl12   ((volatile unsigned long *)(VIC1_BASE+0x230))
#define VIC1_VectCntl13   ((volatile unsigned long *)(VIC1_BASE+0x234))
#define VIC1_VectCntl14   ((volatile unsigned long *)(VIC1_BASE+0x238))
#define VIC1_VectCntl15   ((volatile unsigned long *)(VIC1_BASE+0x23C))


#endif  // __STR91X_H
