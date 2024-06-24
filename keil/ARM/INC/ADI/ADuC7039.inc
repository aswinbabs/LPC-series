; ===============================================															
; ADuC7039 HEADER FILE REV 1.4															
; ===============================================															
Z_BASE                         EQU       0xFFFF0000
F_BASE                         EQU       0xFFFFF000
MMR_BASE                       EQU       0xFFFF0000
MMR_BASE_LOW                   EQU       0xFFFF0000
MMR_BASE_HIGH                  EQU       0xFFFFF000

; INTERRUPT CONTROLLER

INTBASE                        EQU       0xFFFF0000
IRQSTA                         EQU       0xFFFF0000
IRQSIG                         EQU       0xFFFF0004
IRQEN                          EQU       0xFFFF0008
IRQCLR                         EQU       0xFFFF000C
SWICFG                         EQU       0xFFFF0010
FIQSTA                         EQU       0xFFFF0100
FIQSIG                         EQU       0xFFFF0104
FIQEN                          EQU       0xFFFF0108
FIQCLR                         EQU       0xFFFF010C
Z_IRQSTA                       EQU       IRQSTA    -Z_BASE
Z_IRQSIG                       EQU       IRQSIG    -Z_BASE
Z_IRQEN                        EQU       IRQEN     -Z_BASE
Z_IRQCLR                       EQU       IRQCLR    -Z_BASE
Z_SWICFG                       EQU       SWICFG    -Z_BASE
Z_FIQSTA                       EQU       FIQSTA    -Z_BASE
Z_FIQSIG                       EQU       FIQSIG    -Z_BASE
Z_FIQEN                        EQU       FIQEN     -Z_BASE
Z_FIQCLR                       EQU       FIQCLR    -Z_BASE

T_IRQSTA                       EQU       IRQSTA    -INTBASE   
T_IRQSIG                       EQU       IRQSIG    -INTBASE   
T_IRQEN                        EQU       IRQEN     -INTBASE   
T_IRQCLR                       EQU       IRQCLR    -INTBASE   
T_SWICFG                       EQU       SWICFG    -INTBASE   
T_FIQSTA                       EQU       FIQSTA    -INTBASE   
T_FIQSIG                       EQU       FIQSIG    -INTBASE   
T_FIQEN                        EQU       FIQEN     -INTBASE   
T_FIQCLR                       EQU       FIQCLR    -INTBASE   

IRQSTA_OFFSET                  EQU       0x0000
IRQSIG_OFFSET                  EQU       0x0004
IRQEN_OFFSET                   EQU       0x0008
IRQCLR_OFFSET                  EQU       0x000C
SWICFG_OFFSET                  EQU       0x0010
FIQSTA_OFFSET                  EQU       0x0100
FIQSIG_OFFSET                  EQU       0x0104
FIQEN_OFFSET                   EQU       0x0108
FIQCLR_OFFSET                  EQU       0x010C

; Remap and System Control

REMAPBASE                      EQU       0xFFFF0200
SYSMAP0                        EQU       0xFFFF0220
#if           ALLOW_DEPRECATED_NAMES        
; "SYSMAP" has been deprecated. Use "SYSMAP0" instead.
SYSMAP                         EQU       0xFFFF0220
#endif
RSTSTA                         EQU       0xFFFF0230
RSTCLR                         EQU       0xFFFF0234
SYSCHK                         EQU       0xFFFF0244
Z_SYSMAP0                      EQU       SYSMAP0   -Z_BASE
#if           ALLOW_DEPRECATED_NAMES        
; "Z_SYSMAP" has been deprecated. Use "Z_SYSMAP0" instead.
Z_SYSMAP                       EQU       SYSMAP0   -Z_BASE
#endif
Z_RSTSTA                       EQU       RSTSTA    -Z_BASE
Z_RSTCLR                       EQU       RSTCLR    -Z_BASE
Z_SYSCHK                       EQU       SYSCHK    -Z_BASE

T_SYSMAP0                      EQU       SYSMAP0   -REMAPBASE 
#if           ALLOW_DEPRECATED_NAMES        
; "T_SYSMAP" has been deprecated. Use "T_SYSMAP0" instead.
T_SYSMAP                       EQU       SYSMAP0   -REMAPBASE 
#endif
T_RSTSTA                       EQU       RSTSTA    -REMAPBASE 
T_RSTCLR                       EQU       RSTCLR    -REMAPBASE 
T_SYSCHK                       EQU       SYSCHK    -REMAPBASE 

SYSMAP0_OFFSET                 EQU       0x0220
#if           ALLOW_DEPRECATED_NAMES        
; "SYSMAP_OFFSET" has been deprecated. Use "SYSMAP0_OFFSET" instead.
SYSMAP_OFFSET                  EQU       0xFFFF0220
#endif
RSTSTA_OFFSET                  EQU       0x0230
RSTCLR_OFFSET                  EQU       0x0234
SYSCHK_OFFSET                  EQU       0x0244

; 16 bit General Purpose Timer 0

TIMER0BASE                     EQU       0xFFFF0300
T0LD                           EQU       0xFFFF0300
T0VAL                          EQU       0xFFFF0304
T0CON                          EQU       0xFFFF0308
T0CLRI                         EQU       0xFFFF030C
Z_T0LD                         EQU       T0LD      -Z_BASE
Z_T0VAL                        EQU       T0VAL     -Z_BASE
Z_T0CON                        EQU       T0CON     -Z_BASE
Z_T0CLRI                       EQU       T0CLRI    -Z_BASE

T_T0LD                         EQU       T0LD      -TIMER0BASE
T_T0VAL                        EQU       T0VAL     -TIMER0BASE
T_T0CON                        EQU       T0CON     -TIMER0BASE
T_T0CLRI                       EQU       T0CLRI    -TIMER0BASE

T0LD_OFFSET                    EQU       0x0300
T0VAL_OFFSET                   EQU       0x0304
T0CON_OFFSET                   EQU       0x0308
T0CLRI_OFFSET                  EQU       0x030C

; Wake Up Timer

TIMER1BASE                     EQU       0xFFFF0320
T1LD                           EQU       0xFFFF0320
T1VAL                          EQU       0xFFFF0324
T1CON                          EQU       0xFFFF0328
T1CLRI                         EQU       0xFFFF032C
T1CAP                          EQU       0xFFFF0330
Z_T1LD                         EQU       T1LD      -Z_BASE
Z_T1VAL                        EQU       T1VAL     -Z_BASE
Z_T1CON                        EQU       T1CON     -Z_BASE
Z_T1CLRI                       EQU       T1CLRI    -Z_BASE
Z_T1CAP                        EQU       T1CAP     -Z_BASE

T_T1LD                         EQU       T1LD      -TIMER1BASE
T_T1VAL                        EQU       T1VAL     -TIMER1BASE
T_T1CON                        EQU       T1CON     -TIMER1BASE
T_T1CLRI                       EQU       T1CLRI    -TIMER1BASE
T_T1CAP                        EQU       T1CAP     -TIMER1BASE

T1LD_OFFSET                    EQU       0x0320
T1VAL_OFFSET                   EQU       0x0324
T1CON_OFFSET                   EQU       0x0328
T1CLRI_OFFSET                  EQU       0x032C
T1CAP_OFFSET                   EQU       0x0330

; Watchdog

TIMER2BASE                     EQU       0xFFFF0340
T2LD                           EQU       0xFFFF0340
T2VAL                          EQU       0xFFFF0344
T2CON                          EQU       0xFFFF0348
T2CLRI                         EQU       0xFFFF034C
Z_T2LD                         EQU       T2LD      -Z_BASE
Z_T2VAL                        EQU       T2VAL     -Z_BASE
Z_T2CON                        EQU       T2CON     -Z_BASE
Z_T2CLRI                       EQU       T2CLRI    -Z_BASE

T_T2LD                         EQU       T2LD      -TIMER2BASE
T_T2VAL                        EQU       T2VAL     -TIMER2BASE
T_T2CON                        EQU       T2CON     -TIMER2BASE
T_T2CLRI                       EQU       T2CLRI    -TIMER2BASE

T2LD_OFFSET                    EQU       0x0340
T2VAL_OFFSET                   EQU       0x0344
T2CON_OFFSET                   EQU       0x0348
T2CLRI_OFFSET                  EQU       0x034C

; PLL and Oscillator Control

PLLBASE                        EQU       0xFFFF0400
PLLSTA                         EQU       0xFFFF0400
POWKEY0                        EQU       0xFFFF0404
POWCON                         EQU       0xFFFF0408
POWKEY1                        EQU       0xFFFF040C
PLLKEY0                        EQU       0xFFFF0410
PLLCON                         EQU       0xFFFF0414
PLLKEY1                        EQU       0xFFFF0418
OSC0CON                        EQU       0xFFFF0440
#if           ALLOW_DEPRECATED_NAMES        
; "OSCCON" has been deprecated. Use "OSC0CON" instead.
OSCCON                         EQU       0xFFFF0440
#endif
OSC0STA                        EQU       0xFFFF0444
#if           ALLOW_DEPRECATED_NAMES        
; "OSCSTA" has been deprecated. Use "OSC0STA" instead.
OSCSTA                         EQU       0xFFFF0444
#endif
OSC0VAL0                       EQU       0xFFFF0448
#if           ALLOW_DEPRECATED_NAMES        
; "OSCVAL0" has been deprecated. Use "OSC0VAL0" instead.
OSCVAL0                        EQU       0xFFFF0448
#endif
OSC0VAL1                       EQU       0xFFFF044C
#if           ALLOW_DEPRECATED_NAMES        
; "OSCVAL1" has been deprecated. Use "OSC0VAL1" instead.
OSCVAL1                        EQU       0xFFFF044C
#endif
LOCCON                         EQU       0xFFFF0480
LOCUSR0                        EQU       0xFFFF0484
LOCUSR1                        EQU       0xFFFF0488
LOCMAX                         EQU       0xFFFF048C
LOCMIN                         EQU       0xFFFF0490
LOCSTA                         EQU       0xFFFF0494
LOCVAL0                        EQU       0xFFFF0498
LOCVAL1                        EQU       0xFFFF049C
LOCKEY                         EQU       0xFFFF04A0
Z_PLLSTA                       EQU       PLLSTA    -Z_BASE
Z_POWKEY0                      EQU       POWKEY0   -Z_BASE
Z_POWCON                       EQU       POWCON    -Z_BASE
Z_POWKEY1                      EQU       POWKEY1   -Z_BASE
Z_PLLKEY0                      EQU       PLLKEY0   -Z_BASE
Z_PLLCON                       EQU       PLLCON    -Z_BASE
Z_PLLKEY1                      EQU       PLLKEY1   -Z_BASE
Z_OSC0CON                      EQU       OSC0CON   -Z_BASE
#if           ALLOW_DEPRECATED_NAMES        
; "Z_OSCCON" has been deprecated. Use "Z_OSC0CON" instead.
Z_OSCCON                       EQU       OSC0CON   -Z_BASE
#endif
Z_OSC0STA                      EQU       OSC0STA   -Z_BASE
#if           ALLOW_DEPRECATED_NAMES        
; "Z_OSCSTA" has been deprecated. Use "Z_OSC0STA" instead.
Z_OSCSTA                       EQU       OSC0STA   -Z_BASE
#endif
Z_OSC0VAL0                     EQU       OSC0VAL0  -Z_BASE
#if           ALLOW_DEPRECATED_NAMES        
; "Z_OSCVAL0" has been deprecated. Use "Z_OSC0VAL0" instead.
Z_OSCVAL0                      EQU       OSC0VAL0  -Z_BASE
#endif
Z_OSC0VAL1                     EQU       OSC0VAL1  -Z_BASE
#if           ALLOW_DEPRECATED_NAMES        
; "Z_OSCVAL1" has been deprecated. Use "Z_OSC0VAL1" instead.
Z_OSCVAL1                      EQU       OSC0VAL1  -Z_BASE
#endif
Z_LOCCON                       EQU       LOCCON    -Z_BASE
Z_LOCUSR0                      EQU       LOCUSR0   -Z_BASE
Z_LOCUSR1                      EQU       LOCUSR1   -Z_BASE
Z_LOCMAX                       EQU       LOCMAX    -Z_BASE
Z_LOCMIN                       EQU       LOCMIN    -Z_BASE
Z_LOCSTA                       EQU       LOCSTA    -Z_BASE
Z_LOCVAL0                      EQU       LOCVAL0   -Z_BASE
Z_LOCVAL1                      EQU       LOCVAL1   -Z_BASE
Z_LOCKEY                       EQU       LOCKEY    -Z_BASE

T_PLLSTA                       EQU       PLLSTA    -PLLBASE   
T_POWKEY0                      EQU       POWKEY0   -PLLBASE   
T_POWCON                       EQU       POWCON    -PLLBASE   
T_POWKEY1                      EQU       POWKEY1   -PLLBASE   
T_PLLKEY0                      EQU       PLLKEY0   -PLLBASE   
T_PLLCON                       EQU       PLLCON    -PLLBASE   
T_PLLKEY1                      EQU       PLLKEY1   -PLLBASE   
T_OSC0CON                      EQU       OSC0CON   -PLLBASE   
#if           ALLOW_DEPRECATED_NAMES        
; "T_OSCCON" has been deprecated. Use "T_OSC0CON" instead.
T_OSCCON                       EQU       OSC0CON   -PLLBASE   
#endif
T_OSC0STA                      EQU       OSC0STA   -PLLBASE   
#if           ALLOW_DEPRECATED_NAMES        
; "T_OSCSTA" has been deprecated. Use "T_OSC0STA" instead.
T_OSCSTA                       EQU       OSC0STA   -PLLBASE   
#endif
T_OSC0VAL0                     EQU       OSC0VAL0  -PLLBASE   
#if           ALLOW_DEPRECATED_NAMES        
; "T_OSCVAL0" has been deprecated. Use "T_OSC0VAL0" instead.
T_OSCVAL0                      EQU       OSC0VAL0  -PLLBASE   
#endif
T_OSC0VAL1                     EQU       OSC0VAL1  -PLLBASE   
#if           ALLOW_DEPRECATED_NAMES        
; "T_OSCVAL1" has been deprecated. Use "T_OSC0VAL1" instead.
T_OSCVAL1                      EQU       OSC0VAL1  -PLLBASE   
#endif
T_LOCCON                       EQU       LOCCON    -PLLBASE   
T_LOCUSR0                      EQU       LOCUSR0   -PLLBASE   
T_LOCUSR1                      EQU       LOCUSR1   -PLLBASE   
T_LOCMAX                       EQU       LOCMAX    -PLLBASE   
T_LOCMIN                       EQU       LOCMIN    -PLLBASE   
T_LOCSTA                       EQU       LOCSTA    -PLLBASE   
T_LOCVAL0                      EQU       LOCVAL0   -PLLBASE   
T_LOCVAL1                      EQU       LOCVAL1   -PLLBASE   
T_LOCKEY                       EQU       LOCKEY    -PLLBASE   

PLLSTA_OFFSET                  EQU       0x0400
POWKEY0_OFFSET                 EQU       0x0404
POWCON_OFFSET                  EQU       0x0408
POWKEY1_OFFSET                 EQU       0x040C
PLLKEY0_OFFSET                 EQU       0x0410
PLLCON_OFFSET                  EQU       0x0414
PLLKEY1_OFFSET                 EQU       0x0418
OSC0CON_OFFSET                 EQU       0x0440
#if           ALLOW_DEPRECATED_NAMES        
; "OSCCON_OFFSET" has been deprecated. Use "OSC0CON_OFFSET" instead.
OSCCON_OFFSET                  EQU       0xFFFF0440
#endif
OSC0STA_OFFSET                 EQU       0x0444
#if           ALLOW_DEPRECATED_NAMES        
; "OSCSTA_OFFSET" has been deprecated. Use "OSC0STA_OFFSET" instead.
OSCSTA_OFFSET                  EQU       0xFFFF0444
#endif
OSC0VAL0_OFFSET                EQU       0x0448
#if           ALLOW_DEPRECATED_NAMES        
; "OSCVAL0_OFFSET" has been deprecated. Use "OSC0VAL0_OFFSET" instead.
OSCVAL0_OFFSET                 EQU       0xFFFF0448
#endif
OSC0VAL1_OFFSET                EQU       0x044C
#if           ALLOW_DEPRECATED_NAMES        
; "OSCVAL1_OFFSET" has been deprecated. Use "OSC0VAL1_OFFSET" instead.
OSCVAL1_OFFSET                 EQU       0xFFFF044C
#endif
LOCCON_OFFSET                  EQU       0x0480
LOCUSR0_OFFSET                 EQU       0x0484
LOCUSR1_OFFSET                 EQU       0x0488
LOCMAX_OFFSET                  EQU       0x048C
LOCMIN_OFFSET                  EQU       0x0490
LOCSTA_OFFSET                  EQU       0x0494
LOCVAL0_OFFSET                 EQU       0x0498
LOCVAL1_OFFSET                 EQU       0x049C
LOCKEY_OFFSET                  EQU       0x04A0



; ADC interface registers

ADCBASE                        EQU       0xFFFF0500
ADCSTA                         EQU       0xFFFF0500
ADCMSKI                        EQU       0xFFFF0504
ADCMDE                         EQU       0xFFFF0508
ADC0CON                        EQU       0xFFFF050C
ADC1CON                        EQU       0xFFFF0510
ADCFLT                         EQU       0xFFFF0518
ADCCFG                         EQU       0xFFFF051C
ADC0DAT                        EQU       0xFFFF0520
ADC1DAT                        EQU       0xFFFF0524
ADC0OF                         EQU       0xFFFF0530
ADC1OF                         EQU       0xFFFF0534
ADC2OF                         EQU       0xFFFF0538
ADC0GN                         EQU       0xFFFF053C
ADC1GN                         EQU       0xFFFF0540
ADC2GN                         EQU       0xFFFF0544
ADC0RCL                        EQU       0xFFFF0548
ADC0RCV                        EQU       0xFFFF054C
ADC0TH                         EQU       0xFFFF0550
ADC0ACC                        EQU       0xFFFF055C
Z_ADCSTA                       EQU       ADCSTA    -Z_BASE
Z_ADCMSKI                      EQU       ADCMSKI   -Z_BASE
Z_ADCMDE                       EQU       ADCMDE    -Z_BASE
Z_ADC0CON                      EQU       ADC0CON   -Z_BASE
Z_ADC1CON                      EQU       ADC1CON   -Z_BASE
Z_ADCFLT                       EQU       ADCFLT    -Z_BASE
Z_ADCCFG                       EQU       ADCCFG    -Z_BASE
Z_ADC0DAT                      EQU       ADC0DAT   -Z_BASE
Z_ADC1DAT                      EQU       ADC1DAT   -Z_BASE
Z_ADC0OF                       EQU       ADC0OF    -Z_BASE
Z_ADC1OF                       EQU       ADC1OF    -Z_BASE
Z_ADC2OF                       EQU       ADC2OF    -Z_BASE
Z_ADC0GN                       EQU       ADC0GN    -Z_BASE
Z_ADC1GN                       EQU       ADC1GN    -Z_BASE
Z_ADC2GN                       EQU       ADC2GN    -Z_BASE
Z_ADC0RCL                      EQU       ADC0RCL   -Z_BASE
Z_ADC0RCV                      EQU       ADC0RCV   -Z_BASE
Z_ADC0TH                       EQU       ADC0TH    -Z_BASE
Z_ADC0ACC                      EQU       ADC0ACC   -Z_BASE

T_ADCSTA                       EQU       ADCSTA    -ADCBASE   
T_ADCMSKI                      EQU       ADCMSKI   -ADCBASE   
T_ADCMDE                       EQU       ADCMDE    -ADCBASE   
T_ADC0CON                      EQU       ADC0CON   -ADCBASE   
T_ADC1CON                      EQU       ADC1CON   -ADCBASE   
T_ADCFLT                       EQU       ADCFLT    -ADCBASE   
T_ADCCFG                       EQU       ADCCFG    -ADCBASE   
T_ADC0DAT                      EQU       ADC0DAT   -ADCBASE   
T_ADC1DAT                      EQU       ADC1DAT   -ADCBASE   
T_ADC0OF                       EQU       ADC0OF    -ADCBASE   
T_ADC1OF                       EQU       ADC1OF    -ADCBASE   
T_ADC2OF                       EQU       ADC2OF    -ADCBASE   
T_ADC0GN                       EQU       ADC0GN    -ADCBASE   
T_ADC1GN                       EQU       ADC1GN    -ADCBASE   
T_ADC2GN                       EQU       ADC2GN    -ADCBASE   
T_ADC0RCL                      EQU       ADC0RCL   -ADCBASE   
T_ADC0RCV                      EQU       ADC0RCV   -ADCBASE   
T_ADC0TH                       EQU       ADC0TH    -ADCBASE   
T_ADC0ACC                      EQU       ADC0ACC   -ADCBASE   

ADCSTA_OFFSET                  EQU       0x0500
ADCMSKI_OFFSET                 EQU       0x0504
ADCMDE_OFFSET                  EQU       0x0508
ADC0CON_OFFSET                 EQU       0x050C
ADC1CON_OFFSET                 EQU       0x0510
ADCFLT_OFFSET                  EQU       0x0518
ADCCFG_OFFSET                  EQU       0x051C
ADC0DAT_OFFSET                 EQU       0x0520
ADC1DAT_OFFSET                 EQU       0x0524
ADC0OF_OFFSET                  EQU       0x0530
ADC1OF_OFFSET                  EQU       0x0534
ADC2OF_OFFSET                  EQU       0x0538
ADC0GN_OFFSET                  EQU       0x053C
ADC1GN_OFFSET                  EQU       0x0540
ADC2GN_OFFSET                  EQU       0x0544
ADC0RCL_OFFSET                 EQU       0x0548
ADC0RCV_OFFSET                 EQU       0x054C
ADC0TH_OFFSET                  EQU       0x0550
ADC0ACC_OFFSET                 EQU       0x055C

; LIN Hardware SYNC Registers.

LINBASE                        EQU       0xFFFF0700
LINCON                         EQU       0xFFFF0700
LINCS                          EQU       0xFFFF0704
LINBR                          EQU       0xFFFF0708
LINBK                          EQU       0xFFFF070C
LINSTA                         EQU       0xFFFF0710
LINDAT                         EQU       0xFFFF0714
LINLOW                         EQU       0xFFFF0718
LINWU                          EQU       0xFFFF071C
Z_LINCON                       EQU       LINCON    -Z_BASE
Z_LINCS                        EQU       LINCS     -Z_BASE
Z_LINBR                        EQU       LINBR     -Z_BASE
Z_LINBK                        EQU       LINBK     -Z_BASE
Z_LINSTA                       EQU       LINSTA    -Z_BASE
Z_LINDAT                       EQU       LINDAT    -Z_BASE
Z_LINLOW                       EQU       LINLOW    -Z_BASE
Z_LINWU                        EQU       LINWU     -Z_BASE

T_LINCON                       EQU       LINCON    -LINBASE   
T_LINCS                        EQU       LINCS     -LINBASE   
T_LINBR                        EQU       LINBR     -LINBASE   
T_LINBK                        EQU       LINBK     -LINBASE   
T_LINSTA                       EQU       LINSTA    -LINBASE   
T_LINDAT                       EQU       LINDAT    -LINBASE   
T_LINLOW                       EQU       LINLOW    -LINBASE   
T_LINWU                        EQU       LINWU     -LINBASE   

LINCON_OFFSET                  EQU       0x0700
LINCS_OFFSET                   EQU       0x0704
LINBR_OFFSET                   EQU       0x0708
LINBK_OFFSET                   EQU       0x070C
LINSTA_OFFSET                  EQU       0x0710
LINDAT_OFFSET                  EQU       0x0714
LINLOW_OFFSET                  EQU       0x0718
LINWU_OFFSET                   EQU       0x071C

; High Voltage Interface.

HVBASE                         EQU       0xFFFF0800
HVCON                          EQU       0xFFFF0804
HVDAT                          EQU       0xFFFF080C
Z_HVCON                        EQU       HVCON     -Z_BASE
Z_HVDAT                        EQU       HVDAT     -Z_BASE

T_HVCON                        EQU       HVCON     -HVBASE    
T_HVDAT                        EQU       HVDAT     -HVBASE    

HVCON_OFFSET                   EQU       0x0804
HVDAT_OFFSET                   EQU       0x080C

; Serial Port Interface Peripheral

SPIBASE                        EQU       0xFFFF0A00
SPISTA                         EQU       0xFFFF0A00
SPIRX                          EQU       0xFFFF0A04
SPITX                          EQU       0xFFFF0A08
SPIDIV                         EQU       0xFFFF0A0C
SPICON                         EQU       0xFFFF0A10
Z_SPISTA                       EQU       SPISTA    -Z_BASE
Z_SPIRX                        EQU       SPIRX     -Z_BASE
Z_SPITX                        EQU       SPITX     -Z_BASE
Z_SPIDIV                       EQU       SPIDIV    -Z_BASE
Z_SPICON                       EQU       SPICON    -Z_BASE

T_SPISTA                       EQU       SPISTA    -SPIBASE   
T_SPIRX                        EQU       SPIRX     -SPIBASE   
T_SPITX                        EQU       SPITX     -SPIBASE   
T_SPIDIV                       EQU       SPIDIV    -SPIBASE   
T_SPICON                       EQU       SPICON    -SPIBASE   

SPISTA_OFFSET                  EQU       0x0A00
SPIRX_OFFSET                   EQU       0x0A04
SPITX_OFFSET                   EQU       0x0A08
SPIDIV_OFFSET                  EQU       0x0A0C
SPICON_OFFSET                  EQU       0x0A10

; GPIO + Serial Port Mux (AHB bus)

GPIOBASE                       EQU       0xFFFF0D00
GPCON                          EQU       0xFFFF0D00
GPDAT                          EQU       0xFFFF0D10
GPSET                          EQU       0xFFFF0D14
GPCLR                          EQU       0xFFFF0D18
Z_GPCON                        EQU       GPCON     -Z_BASE
Z_GPDAT                        EQU       GPDAT     -Z_BASE
Z_GPSET                        EQU       GPSET     -Z_BASE
Z_GPCLR                        EQU       GPCLR     -Z_BASE

T_GPCON                        EQU       GPCON     -GPIOBASE  
T_GPDAT                        EQU       GPDAT     -GPIOBASE  
T_GPSET                        EQU       GPSET     -GPIOBASE  
T_GPCLR                        EQU       GPCLR     -GPIOBASE  

GPCON_OFFSET                   EQU       0x0D00
GPDAT_OFFSET                   EQU       0x0D10
GPSET_OFFSET                   EQU       0x0D14
GPCLR_OFFSET                   EQU       0x0D18

; Flash Control Interface 64Kbytes (AHB bus)

FLASHBASE                      EQU       0xFFFF0E00
FEESTA                         EQU       0xFFFF0E00
FEEMOD                         EQU       0xFFFF0E04
FEECON                         EQU       0xFFFF0E08
FEEDAT                         EQU       0xFFFF0E0C
FEEADR                         EQU       0xFFFF0E10
FEESIG                         EQU       0xFFFF0E18
FEEPRO                         EQU       0xFFFF0E1C
FEEHID                         EQU       0xFFFF0E20
Z_FEESTA                       EQU       FEESTA    -Z_BASE
Z_FEEMOD                       EQU       FEEMOD    -Z_BASE
Z_FEECON                       EQU       FEECON    -Z_BASE
Z_FEEDAT                       EQU       FEEDAT    -Z_BASE
Z_FEEADR                       EQU       FEEADR    -Z_BASE
Z_FEESIG                       EQU       FEESIG    -Z_BASE
Z_FEEPRO                       EQU       FEEPRO    -Z_BASE
Z_FEEHID                       EQU       FEEHID    -Z_BASE

T_FEESTA                       EQU       FEESTA    -FLASHBASE 
T_FEEMOD                       EQU       FEEMOD    -FLASHBASE 
T_FEECON                       EQU       FEECON    -FLASHBASE 
T_FEEDAT                       EQU       FEEDAT    -FLASHBASE 
T_FEEADR                       EQU       FEEADR    -FLASHBASE 
T_FEESIG                       EQU       FEESIG    -FLASHBASE 
T_FEEPRO                       EQU       FEEPRO    -FLASHBASE 
T_FEEHID                       EQU       FEEHID    -FLASHBASE 

FEESTA_OFFSET                  EQU       0x0E00
FEEMOD_OFFSET                  EQU       0x0E04
FEECON_OFFSET                  EQU       0x0E08
FEEDAT_OFFSET                  EQU       0x0E0C
FEEADR_OFFSET                  EQU       0x0E10
FEESIG_OFFSET                  EQU       0x0E18
FEEPRO_OFFSET                  EQU       0x0E1C
FEEHID_OFFSET                  EQU       0x0E20