; ===============================================												
; ADuC7030 HEADER FILE REV 1.4																		
; ===============================================												
Z_BASE                         EQU       0xFFFF0000
F_BASE                         EQU       0xFFFFF000
MMR_BASE                       EQU       0xFFFF0000
MMR_BASE_LOW                   EQU       0xFFFF0000
MMR_BASE_HIGH                  EQU       0xFFFFF000

; Interrupt Controller

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
RSTSTA                         EQU       0xFFFF0230
RSTCLR                         EQU       0xFFFF0234
SYSSER0                        EQU       0xFFFF0238
SYSSER1                        EQU       0xFFFF023C
SYSCHK                         EQU       0xFFFF0240
Z_SYSMAP0                      EQU       SYSMAP0   -Z_BASE
Z_RSTSTA                       EQU       RSTSTA    -Z_BASE
Z_RSTCLR                       EQU       RSTCLR    -Z_BASE
Z_SYSSER0                      EQU       SYSSER0   -Z_BASE
Z_SYSSER1                      EQU       SYSSER1   -Z_BASE
Z_SYSCHK                       EQU       SYSCHK    -Z_BASE

T_SYSMAP0                      EQU       SYSMAP0   -REMAPBASE 
T_RSTSTA                       EQU       RSTSTA    -REMAPBASE 
T_RSTCLR                       EQU       RSTCLR    -REMAPBASE 
T_SYSSER0                      EQU       SYSSER0   -REMAPBASE 
T_SYSSER1                      EQU       SYSSER1   -REMAPBASE 
T_SYSCHK                       EQU       SYSCHK    -REMAPBASE 

SYSMAP0_OFFSET                 EQU       0x0220
RSTSTA_OFFSET                  EQU       0x0230
RSTCLR_OFFSET                  EQU       0x0234
SYSSER0_OFFSET                 EQU       0x0238
SYSSER1_OFFSET                 EQU       0x023C
SYSCHK_OFFSET                  EQU       0x0240

; 48bit General Purpose Timer 0

TIMER0BASE                     EQU       0xFFFF0300
T0LD                           EQU       0xFFFF0300
T0VAL0                         EQU       0xFFFF0304
T0VAL1                         EQU       0xFFFF0308
T0CON                          EQU       0xFFFF030C
T0CLRI                         EQU       0xFFFF0310
T0CAP                          EQU       0xFFFF0314
Z_T0LD                         EQU       T0LD      -Z_BASE
Z_T0VAL0                       EQU       T0VAL0    -Z_BASE
Z_T0VAL1                       EQU       T0VAL1    -Z_BASE
Z_T0CON                        EQU       T0CON     -Z_BASE
Z_T0CLRI                       EQU       T0CLRI    -Z_BASE
Z_T0CAP                        EQU       T0CAP     -Z_BASE

T_T0LD                         EQU       T0LD      -TIMER0BASE
T_T0VAL0                       EQU       T0VAL0    -TIMER0BASE
T_T0VAL1                       EQU       T0VAL1    -TIMER0BASE
T_T0CON                        EQU       T0CON     -TIMER0BASE
T_T0CLRI                       EQU       T0CLRI    -TIMER0BASE
T_T0CAP                        EQU       T0CAP     -TIMER0BASE

T0LD_OFFSET                    EQU       0x0300
T0VAL0_OFFSET                  EQU       0x0304
T0VAL1_OFFSET                  EQU       0x0308
T0CON_OFFSET                   EQU       0x030C
T0CLRI_OFFSET                  EQU       0x0310
T0CAP_OFFSET                   EQU       0x0314

; General Purpose Timer 1

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

; Wake Up Timer

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

; Watchdog Timer

TIMER3BASE                     EQU       0xFFFF0360
T3LD                           EQU       0xFFFF0360
T3VAL                          EQU       0xFFFF0364
T3CON                          EQU       0xFFFF0368
T3CLRI                         EQU       0xFFFF036C
Z_T3LD                         EQU       T3LD      -Z_BASE
Z_T3VAL                        EQU       T3VAL     -Z_BASE
Z_T3CON                        EQU       T3CON     -Z_BASE
Z_T3CLRI                       EQU       T3CLRI    -Z_BASE

T_T3LD                         EQU       T3LD      -TIMER3BASE
T_T3VAL                        EQU       T3VAL     -TIMER3BASE
T_T3CON                        EQU       T3CON     -TIMER3BASE
T_T3CLRI                       EQU       T3CLRI    -TIMER3BASE

T3LD_OFFSET                    EQU       0x0360
T3VAL_OFFSET                   EQU       0x0364
T3CON_OFFSET                   EQU       0x0368
T3CLRI_OFFSET                  EQU       0x036C

; STI TIMER

TIMER4BASE                     EQU       0xFFFF0380
T4LD                           EQU       0xFFFF0380
T4VAL                          EQU       0xFFFF0384
T4CON                          EQU       0xFFFF0388
T4CLRI                         EQU       0xFFFF038C
T4CAP                          EQU       0xFFFF0390
Z_T4LD                         EQU       T4LD      -Z_BASE
Z_T4VAL                        EQU       T4VAL     -Z_BASE
Z_T4CON                        EQU       T4CON     -Z_BASE
Z_T4CLRI                       EQU       T4CLRI    -Z_BASE
Z_T4CAP                        EQU       T4CAP     -Z_BASE

T_T4LD                         EQU       T4LD      -TIMER4BASE
T_T4VAL                        EQU       T4VAL     -TIMER4BASE
T_T4CON                        EQU       T4CON     -TIMER4BASE
T_T4CLRI                       EQU       T4CLRI    -TIMER4BASE
T_T4CAP                        EQU       T4CAP     -TIMER4BASE

T4LD_OFFSET                    EQU       0x0380
T4VAL_OFFSET                   EQU       0x0384
T4CON_OFFSET                   EQU       0x0388
T4CLRI_OFFSET                  EQU       0x038C
T4CAP_OFFSET                   EQU       0x0390

; PLL and Oscillator Control

PLLBASE                        EQU       0xFFFF0400
PLLSTA                         EQU       0xFFFF0400
POWKEY0                        EQU       0xFFFF0404
POWCON                         EQU       0xFFFF0408
POWKEY1                        EQU       0xFFFF040C
PLLKEY0                        EQU       0xFFFF0410
PLLCON                         EQU       0xFFFF0414
PLLKEY1                        EQU       0xFFFF0418
OSC0TRM                        EQU       0xFFFF042C
OSC0CON                        EQU       0xFFFF0440
OSC0STA                        EQU       0xFFFF0444
OSC0VAL0                       EQU       0xFFFF0448
OSC0VAL1                       EQU       0xFFFF044C
Z_PLLSTA                       EQU       PLLSTA    -Z_BASE
Z_POWKEY0                      EQU       POWKEY0   -Z_BASE
Z_POWCON                       EQU       POWCON    -Z_BASE
Z_POWKEY1                      EQU       POWKEY1   -Z_BASE
Z_PLLKEY0                      EQU       PLLKEY0   -Z_BASE
Z_PLLCON                       EQU       PLLCON    -Z_BASE
Z_PLLKEY1                      EQU       PLLKEY1   -Z_BASE
Z_OSC0TRM                      EQU       OSC0TRM   -Z_BASE
Z_OSC0CON                      EQU       OSC0CON   -Z_BASE
Z_OSC0STA                      EQU       OSC0STA   -Z_BASE
Z_OSC0VAL0                     EQU       OSC0VAL0  -Z_BASE
Z_OSC0VAL1                     EQU       OSC0VAL1  -Z_BASE

T_PLLSTA                       EQU       PLLSTA    -PLLBASE   
T_POWKEY0                      EQU       POWKEY0   -PLLBASE   
T_POWCON                       EQU       POWCON    -PLLBASE   
T_POWKEY1                      EQU       POWKEY1   -PLLBASE   
T_PLLKEY0                      EQU       PLLKEY0   -PLLBASE   
T_PLLCON                       EQU       PLLCON    -PLLBASE   
T_PLLKEY1                      EQU       PLLKEY1   -PLLBASE   
T_OSC0TRM                      EQU       OSC0TRM   -PLLBASE   
T_OSC0CON                      EQU       OSC0CON   -PLLBASE   
T_OSC0STA                      EQU       OSC0STA   -PLLBASE   
T_OSC0VAL0                     EQU       OSC0VAL0  -PLLBASE   
T_OSC0VAL1                     EQU       OSC0VAL1  -PLLBASE   

PLLSTA_OFFSET                  EQU       0x0400
POWKEY0_OFFSET                 EQU       0x0404
POWCON_OFFSET                  EQU       0x0408
POWKEY1_OFFSET                 EQU       0x040C
PLLKEY0_OFFSET                 EQU       0x0410
PLLCON_OFFSET                  EQU       0x0414
PLLKEY1_OFFSET                 EQU       0x0418
OSC0TRM_OFFSET                 EQU       0x042C
OSC0CON_OFFSET                 EQU       0x0440
OSC0STA_OFFSET                 EQU       0x0444
OSC0VAL0_OFFSET                EQU       0x0448
OSC0VAL1_OFFSET                EQU       0x044C





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
ADC2DAT                        EQU       0xFFFF0528
ADC0OF                         EQU       0xFFFF0530
ADC1OF                         EQU       0xFFFF0534
ADC2OF                         EQU       0xFFFF0538
ADC0GN                         EQU       0xFFFF053C
ADC1GN                         EQU       0xFFFF0540
ADC2GN                         EQU       0xFFFF0544
ADC0RCL                        EQU       0xFFFF0548
ADC0RCV                        EQU       0xFFFF054C
ADC0TH                         EQU       0xFFFF0550
ADC0TCL                        EQU       0xFFFF0554
ADC0THV                        EQU       0xFFFF0558
ADC0ACC                        EQU       0xFFFF055C
ADCREF                         EQU       0xFFFF057C
Z_ADCSTA                       EQU       ADCSTA    -Z_BASE
Z_ADCMSKI                      EQU       ADCMSKI   -Z_BASE
Z_ADCMDE                       EQU       ADCMDE    -Z_BASE
Z_ADC0CON                      EQU       ADC0CON   -Z_BASE
Z_ADC1CON                      EQU       ADC1CON   -Z_BASE
Z_ADCFLT                       EQU       ADCFLT    -Z_BASE
Z_ADCCFG                       EQU       ADCCFG    -Z_BASE
Z_ADC0DAT                      EQU       ADC0DAT   -Z_BASE
Z_ADC1DAT                      EQU       ADC1DAT   -Z_BASE
Z_ADC2DAT                      EQU       ADC2DAT   -Z_BASE
Z_ADC0OF                       EQU       ADC0OF    -Z_BASE
Z_ADC1OF                       EQU       ADC1OF    -Z_BASE
Z_ADC2OF                       EQU       ADC2OF    -Z_BASE
Z_ADC0GN                       EQU       ADC0GN    -Z_BASE
Z_ADC1GN                       EQU       ADC1GN    -Z_BASE
Z_ADC2GN                       EQU       ADC2GN    -Z_BASE
Z_ADC0RCL                      EQU       ADC0RCL   -Z_BASE
Z_ADC0RCV                      EQU       ADC0RCV   -Z_BASE
Z_ADC0TH                       EQU       ADC0TH    -Z_BASE
Z_ADC0TCL                      EQU       ADC0TCL   -Z_BASE
Z_ADC0THV                      EQU       ADC0THV   -Z_BASE
Z_ADC0ACC                      EQU       ADC0ACC   -Z_BASE
Z_ADCREF                       EQU       ADCREF    -Z_BASE

T_ADCSTA                       EQU       ADCSTA    -ADCBASE   
T_ADCMSKI                      EQU       ADCMSKI   -ADCBASE   
T_ADCMDE                       EQU       ADCMDE    -ADCBASE   
T_ADC0CON                      EQU       ADC0CON   -ADCBASE   
T_ADC1CON                      EQU       ADC1CON   -ADCBASE   
T_ADCFLT                       EQU       ADCFLT    -ADCBASE   
T_ADCCFG                       EQU       ADCCFG    -ADCBASE   
T_ADC0DAT                      EQU       ADC0DAT   -ADCBASE   
T_ADC1DAT                      EQU       ADC1DAT   -ADCBASE   
T_ADC2DAT                      EQU       ADC2DAT   -ADCBASE   
T_ADC0OF                       EQU       ADC0OF    -ADCBASE   
T_ADC1OF                       EQU       ADC1OF    -ADCBASE   
T_ADC2OF                       EQU       ADC2OF    -ADCBASE   
T_ADC0GN                       EQU       ADC0GN    -ADCBASE   
T_ADC1GN                       EQU       ADC1GN    -ADCBASE   
T_ADC2GN                       EQU       ADC2GN    -ADCBASE   
T_ADC0RCL                      EQU       ADC0RCL   -ADCBASE   
T_ADC0RCV                      EQU       ADC0RCV   -ADCBASE   
T_ADC0TH                       EQU       ADC0TH    -ADCBASE   
T_ADC0TCL                      EQU       ADC0TCL   -ADCBASE   
T_ADC0THV                      EQU       ADC0THV   -ADCBASE   
T_ADC0ACC                      EQU       ADC0ACC   -ADCBASE   
T_ADCREF                       EQU       ADCREF    -ADCBASE   

ADCSTA_OFFSET                  EQU       0x0500
ADCMSKI_OFFSET                 EQU       0x0504
ADCMDE_OFFSET                  EQU       0x0508
ADC0CON_OFFSET                 EQU       0x050C
ADC1CON_OFFSET                 EQU       0x0510
ADCFLT_OFFSET                  EQU       0x0518
ADCCFG_OFFSET                  EQU       0x051C
ADC0DAT_OFFSET                 EQU       0x0520
ADC1DAT_OFFSET                 EQU       0x0524
ADC2DAT_OFFSET                 EQU       0x0528
ADC0OF_OFFSET                  EQU       0x0530
ADC1OF_OFFSET                  EQU       0x0534
ADC2OF_OFFSET                  EQU       0x0538
ADC0GN_OFFSET                  EQU       0x053C
ADC1GN_OFFSET                  EQU       0x0540
ADC2GN_OFFSET                  EQU       0x0544
ADC0RCL_OFFSET                 EQU       0x0548
ADC0RCV_OFFSET                 EQU       0x054C
ADC0TH_OFFSET                  EQU       0x0550
ADC0TCL_OFFSET                 EQU       0x0554
ADC0THV_OFFSET                 EQU       0x0558
ADC0ACC_OFFSET                 EQU       0x055C
ADCREF_OFFSET                  EQU       0x057C

; 450 Compatible UART core registers

UARTBASE                       EQU       0xFFFF0700
COMTX                          EQU       0xFFFF0700
COMRX                          EQU       0xFFFF0700
COMDIV0                        EQU       0xFFFF0700
COMIEN0                        EQU       0xFFFF0704
COMDIV1                        EQU       0xFFFF0704
COMIID0                        EQU       0xFFFF0708
COMCON0                        EQU       0xFFFF070C
COMCON1                        EQU       0xFFFF0710
COMSTA0                        EQU       0xFFFF0714
COMDIV2                        EQU       0xFFFF072C
Z_COMTX                        EQU       COMTX     -Z_BASE
Z_COMRX                        EQU       COMRX     -Z_BASE
Z_COMDIV0                      EQU       COMDIV0   -Z_BASE
Z_COMIEN0                      EQU       COMIEN0   -Z_BASE
Z_COMDIV1                      EQU       COMDIV1   -Z_BASE
Z_COMIID0                      EQU       COMIID0   -Z_BASE
Z_COMCON0                      EQU       COMCON0   -Z_BASE
Z_COMCON1                      EQU       COMCON1   -Z_BASE
Z_COMSTA0                      EQU       COMSTA0   -Z_BASE
Z_COMDIV2                      EQU       COMDIV2   -Z_BASE

T_COMTX                        EQU       COMTX     -UARTBASE  
T_COMRX                        EQU       COMRX     -UARTBASE  
T_COMDIV0                      EQU       COMDIV0   -UARTBASE  
T_COMIEN0                      EQU       COMIEN0   -UARTBASE  
T_COMDIV1                      EQU       COMDIV1   -UARTBASE  
T_COMIID0                      EQU       COMIID0   -UARTBASE  
T_COMCON0                      EQU       COMCON0   -UARTBASE  
T_COMCON1                      EQU       COMCON1   -UARTBASE  
T_COMSTA0                      EQU       COMSTA0   -UARTBASE  
T_COMDIV2                      EQU       COMDIV2   -UARTBASE  

COMTX_OFFSET                   EQU       0x0700
COMRX_OFFSET                   EQU       0x0700
COMDIV0_OFFSET                 EQU       0x0700
COMIEN0_OFFSET                 EQU       0x0704
COMDIV1_OFFSET                 EQU       0x0704
COMIID0_OFFSET                 EQU       0x0708
COMCON0_OFFSET                 EQU       0x070C
COMCON1_OFFSET                 EQU       0x0710
COMSTA0_OFFSET                 EQU       0x0714
COMDIV2_OFFSET                 EQU       0x072C

; LIN Hardware SYNC Registers.

LSBASE                         EQU       0xFFFF0780
LHSSTA                         EQU       0xFFFF0780
LHSCON0                        EQU       0xFFFF0784
LHSVAL0                        EQU       0xFFFF0788
LHSCON1                        EQU       0xFFFF078C
LHSVAL1                        EQU       0xFFFF0790
LHSCAP                         EQU       0xFFFF0794
LHSCMP                         EQU       0xFFFF0798
Z_LHSSTA                       EQU       LHSSTA    -Z_BASE
Z_LHSCON0                      EQU       LHSCON0   -Z_BASE
Z_LHSVAL0                      EQU       LHSVAL0   -Z_BASE
Z_LHSCON1                      EQU       LHSCON1   -Z_BASE
Z_LHSVAL1                      EQU       LHSVAL1   -Z_BASE
Z_LHSCAP                       EQU       LHSCAP    -Z_BASE
Z_LHSCMP                       EQU       LHSCMP    -Z_BASE

T_LHSSTA                       EQU       LHSSTA    -LSBASE    
T_LHSCON0                      EQU       LHSCON0   -LSBASE    
T_LHSVAL0                      EQU       LHSVAL0   -LSBASE    
T_LHSCON1                      EQU       LHSCON1   -LSBASE    
T_LHSVAL1                      EQU       LHSVAL1   -LSBASE    
T_LHSCAP                       EQU       LHSCAP    -LSBASE    
T_LHSCMP                       EQU       LHSCMP    -LSBASE    

LHSSTA_OFFSET                  EQU       0x0780
LHSCON0_OFFSET                 EQU       0x0784
LHSVAL0_OFFSET                 EQU       0x0788
LHSCON1_OFFSET                 EQU       0x078C
LHSVAL1_OFFSET                 EQU       0x0790
LHSCAP_OFFSET                  EQU       0x0794
LHSCMP_OFFSET                  EQU       0x0798

; 2-Wire Interface registers to HV die.

HVBASE                         EQU       0xFFFF0800
HVCON                          EQU       0xFFFF0804
HVDAT                          EQU       0xFFFF080C
Z_HVCON                        EQU       HVCON     -Z_BASE
Z_HVDAT                        EQU       HVDAT     -Z_BASE

T_HVCON                        EQU       HVCON     -HVBASE    
T_HVDAT                        EQU       HVDAT     -HVBASE    

HVCON_OFFSET                   EQU       0x0804
HVDAT_OFFSET                   EQU       0x080C

; System Test Interface Registers

STIBASE                        EQU       0xFFFF0880
STIKEY0                        EQU       0xFFFF0880
STICON                         EQU       0xFFFF0884
STIKEY1                        EQU       0xFFFF0888
STIDAT0                        EQU       0xFFFF088C
STIDAT1                        EQU       0xFFFF0890
STIDAT2                        EQU       0xFFFF0894
Z_STIKEY0                      EQU       STIKEY0   -Z_BASE
Z_STICON                       EQU       STICON    -Z_BASE
Z_STIKEY1                      EQU       STIKEY1   -Z_BASE
Z_STIDAT0                      EQU       STIDAT0   -Z_BASE
Z_STIDAT1                      EQU       STIDAT1   -Z_BASE
Z_STIDAT2                      EQU       STIDAT2   -Z_BASE

T_STIKEY0                      EQU       STIKEY0   -STIBASE   
T_STICON                       EQU       STICON    -STIBASE   
T_STIKEY1                      EQU       STIKEY1   -STIBASE   
T_STIDAT0                      EQU       STIDAT0   -STIBASE   
T_STIDAT1                      EQU       STIDAT1   -STIBASE   
T_STIDAT2                      EQU       STIDAT2   -STIBASE   

STIKEY0_OFFSET                 EQU       0x0880
STICON_OFFSET                  EQU       0x0884
STIKEY1_OFFSET                 EQU       0x0888
STIDAT0_OFFSET                 EQU       0x088C
STIDAT1_OFFSET                 EQU       0x0890
STIDAT2_OFFSET                 EQU       0x0894

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
GP0CON                         EQU       0xFFFF0D00
GP1CON                         EQU       0xFFFF0D04
GP2CON                         EQU       0xFFFF0D08
GP0DAT                         EQU       0xFFFF0D20
GP0SET                         EQU       0xFFFF0D24
GP0CLR                         EQU       0xFFFF0D28
GP1DAT                         EQU       0xFFFF0D30
GP1SET                         EQU       0xFFFF0D34
GP1CLR                         EQU       0xFFFF0D38
GP2DAT                         EQU       0xFFFF0D40
GP2SET                         EQU       0xFFFF0D44
GP2CLR                         EQU       0xFFFF0D48
Z_GP0CON                       EQU       GP0CON    -Z_BASE
Z_GP1CON                       EQU       GP1CON    -Z_BASE
Z_GP2CON                       EQU       GP2CON    -Z_BASE
Z_GP0DAT                       EQU       GP0DAT    -Z_BASE
Z_GP0SET                       EQU       GP0SET    -Z_BASE
Z_GP0CLR                       EQU       GP0CLR    -Z_BASE
Z_GP1DAT                       EQU       GP1DAT    -Z_BASE
Z_GP1SET                       EQU       GP1SET    -Z_BASE
Z_GP1CLR                       EQU       GP1CLR    -Z_BASE
Z_GP2DAT                       EQU       GP2DAT    -Z_BASE
Z_GP2SET                       EQU       GP2SET    -Z_BASE
Z_GP2CLR                       EQU       GP2CLR    -Z_BASE

T_GP0CON                       EQU       GP0CON    -GPIOBASE  
T_GP1CON                       EQU       GP1CON    -GPIOBASE  
T_GP2CON                       EQU       GP2CON    -GPIOBASE  
T_GP0DAT                       EQU       GP0DAT    -GPIOBASE  
T_GP0SET                       EQU       GP0SET    -GPIOBASE  
T_GP0CLR                       EQU       GP0CLR    -GPIOBASE  
T_GP1DAT                       EQU       GP1DAT    -GPIOBASE  
T_GP1SET                       EQU       GP1SET    -GPIOBASE  
T_GP1CLR                       EQU       GP1CLR    -GPIOBASE  
T_GP2DAT                       EQU       GP2DAT    -GPIOBASE  
T_GP2SET                       EQU       GP2SET    -GPIOBASE  
T_GP2CLR                       EQU       GP2CLR    -GPIOBASE  

GP0CON_OFFSET                  EQU       0x0D00
GP1CON_OFFSET                  EQU       0x0D04
GP2CON_OFFSET                  EQU       0x0D08
GP0DAT_OFFSET                  EQU       0x0D20
GP0SET_OFFSET                  EQU       0x0D24
GP0CLR_OFFSET                  EQU       0x0D28
GP1DAT_OFFSET                  EQU       0x0D30
GP1SET_OFFSET                  EQU       0x0D34
GP1CLR_OFFSET                  EQU       0x0D38
GP2DAT_OFFSET                  EQU       0x0D40
GP2SET_OFFSET                  EQU       0x0D44
GP2CLR_OFFSET                  EQU       0x0D48

; Flash Control Interface 32Kbytes (AHB bus)

FLASH0BASE                     EQU       0xFFFF0E00
FEE0STA                        EQU       0xFFFF0E00
FEE0MOD                        EQU       0xFFFF0E04
FEE0CON                        EQU       0xFFFF0E08
FEE0DAT                        EQU       0xFFFF0E0C
FEE0ADR                        EQU       0xFFFF0E10
FEE0SIG                        EQU       0xFFFF0E18
FEE0PRO                        EQU       0xFFFF0E1C
FEE0HID                        EQU       0xFFFF0E20
Z_FEE0STA                      EQU       FEE0STA   -Z_BASE
Z_FEE0MOD                      EQU       FEE0MOD   -Z_BASE
Z_FEE0CON                      EQU       FEE0CON   -Z_BASE
Z_FEE0DAT                      EQU       FEE0DAT   -Z_BASE
Z_FEE0ADR                      EQU       FEE0ADR   -Z_BASE
Z_FEE0SIG                      EQU       FEE0SIG   -Z_BASE
Z_FEE0PRO                      EQU       FEE0PRO   -Z_BASE
Z_FEE0HID                      EQU       FEE0HID   -Z_BASE

T_FEE0STA                      EQU       FEE0STA   -FLASH0BASE
T_FEE0MOD                      EQU       FEE0MOD   -FLASH0BASE
T_FEE0CON                      EQU       FEE0CON   -FLASH0BASE
T_FEE0DAT                      EQU       FEE0DAT   -FLASH0BASE
T_FEE0ADR                      EQU       FEE0ADR   -FLASH0BASE
T_FEE0SIG                      EQU       FEE0SIG   -FLASH0BASE
T_FEE0PRO                      EQU       FEE0PRO   -FLASH0BASE
T_FEE0HID                      EQU       FEE0HID   -FLASH0BASE

FEE0STA_OFFSET                 EQU       0x0E00
FEE0MOD_OFFSET                 EQU       0x0E04
FEE0CON_OFFSET                 EQU       0x0E08
FEE0DAT_OFFSET                 EQU       0x0E0C
FEE0ADR_OFFSET                 EQU       0x0E10
FEE0SIG_OFFSET                 EQU       0x0E18
FEE0PRO_OFFSET                 EQU       0x0E1C
FEE0HID_OFFSET                 EQU       0x0E20
