; ===============================================															
; ADuC7060 HEADER FILE REV 1.6															
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
IRQBASE                        EQU       0xFFFF0014
IRQVEC                         EQU       0xFFFF001C
IRQP0                          EQU       0xFFFF0020
IRQP1                          EQU       0xFFFF0024
IRQP2                          EQU       0xFFFF0028
IRQCONN                        EQU       0xFFFF0030
IRQCONE                        EQU       0xFFFF0034
IRQCLRE                        EQU       0xFFFF0038
IRQSTAN                        EQU       0xFFFF003C
FIQSTA                         EQU       0xFFFF0100
FIQSIG                         EQU       0xFFFF0104
FIQEN                          EQU       0xFFFF0108
FIQCLR                         EQU       0xFFFF010C
FIQVEC                         EQU       0xFFFF011C
FIQSTAN                        EQU       0xFFFF013C
Z_IRQSTA                       EQU       IRQSTA    -Z_BASE
Z_IRQSIG                       EQU       IRQSIG    -Z_BASE
Z_IRQEN                        EQU       IRQEN     -Z_BASE
Z_IRQCLR                       EQU       IRQCLR    -Z_BASE
Z_SWICFG                       EQU       SWICFG    -Z_BASE
Z_IRQBASE                      EQU       IRQBASE   -Z_BASE
Z_IRQVEC                       EQU       IRQVEC    -Z_BASE
Z_IRQP0                        EQU       IRQP0     -Z_BASE
Z_IRQP1                        EQU       IRQP1     -Z_BASE
Z_IRQP2                        EQU       IRQP2     -Z_BASE
Z_IRQCONN                      EQU       IRQCONN   -Z_BASE
Z_IRQCONE                      EQU       IRQCONE   -Z_BASE
Z_IRQCLRE                      EQU       IRQCLRE   -Z_BASE
Z_IRQSTAN                      EQU       IRQSTAN   -Z_BASE
Z_FIQSTA                       EQU       FIQSTA    -Z_BASE
Z_FIQSIG                       EQU       FIQSIG    -Z_BASE
Z_FIQEN                        EQU       FIQEN     -Z_BASE
Z_FIQCLR                       EQU       FIQCLR    -Z_BASE
Z_FIQVEC                       EQU       FIQVEC    -Z_BASE
Z_FIQSTAN                      EQU       FIQSTAN   -Z_BASE

T_IRQSTA                       EQU       IRQSTA    -INTBASE   
T_IRQSIG                       EQU       IRQSIG    -INTBASE   
T_IRQEN                        EQU       IRQEN     -INTBASE   
T_IRQCLR                       EQU       IRQCLR    -INTBASE   
T_SWICFG                       EQU       SWICFG    -INTBASE   
T_IRQBASE                      EQU       IRQBASE   -INTBASE   
T_IRQVEC                       EQU       IRQVEC    -INTBASE   
T_IRQP0                        EQU       IRQP0     -INTBASE   
T_IRQP1                        EQU       IRQP1     -INTBASE   
T_IRQP2                        EQU       IRQP2     -INTBASE   
T_IRQCONN                      EQU       IRQCONN   -INTBASE   
T_IRQCONE                      EQU       IRQCONE   -INTBASE   
T_IRQCLRE                      EQU       IRQCLRE   -INTBASE   
T_IRQSTAN                      EQU       IRQSTAN   -INTBASE   
T_FIQSTA                       EQU       FIQSTA    -INTBASE   
T_FIQSIG                       EQU       FIQSIG    -INTBASE   
T_FIQEN                        EQU       FIQEN     -INTBASE   
T_FIQCLR                       EQU       FIQCLR    -INTBASE   
T_FIQVEC                       EQU       FIQVEC    -INTBASE   
T_FIQSTAN                      EQU       FIQSTAN   -INTBASE   

IRQSTA_OFFSET                  EQU       0x0000
IRQSIG_OFFSET                  EQU       0x0004
IRQEN_OFFSET                   EQU       0x0008
IRQCLR_OFFSET                  EQU       0x000C
SWICFG_OFFSET                  EQU       0x0010
IRQBASE_OFFSET                 EQU       0x0014
IRQVEC_OFFSET                  EQU       0x001C
IRQP0_OFFSET                   EQU       0x0020
IRQP1_OFFSET                   EQU       0x0024
IRQP2_OFFSET                   EQU       0x0028
IRQCONN_OFFSET                 EQU       0x0030
IRQCONE_OFFSET                 EQU       0x0034
IRQCLRE_OFFSET                 EQU       0x0038
IRQSTAN_OFFSET                 EQU       0x003C
FIQSTA_OFFSET                  EQU       0x0100
FIQSIG_OFFSET                  EQU       0x0104
FIQEN_OFFSET                   EQU       0x0108
FIQCLR_OFFSET                  EQU       0x010C
FIQVEC_OFFSET                  EQU       0x011C
FIQSTAN_OFFSET                 EQU       0x013C

; REMAP AND SYSTEM CONTROL

REMAPBASE                      EQU       0xFFFF0200
REMAP                          EQU       0xFFFF0220
RSTSTA                         EQU       0xFFFF0230
RSTCLR                         EQU       0xFFFF0234
Z_REMAP                        EQU       REMAP     -Z_BASE
Z_RSTSTA                       EQU       RSTSTA    -Z_BASE
Z_RSTCLR                       EQU       RSTCLR    -Z_BASE

T_REMAP                        EQU       REMAP     -REMAPBASE 
T_RSTSTA                       EQU       RSTSTA    -REMAPBASE 
T_RSTCLR                       EQU       RSTCLR    -REMAPBASE 

REMAP_OFFSET                   EQU       0x0220
RSTSTA_OFFSET                  EQU       0x0230
RSTCLR_OFFSET                  EQU       0x0234

; TIMER 0

T0BASE                         EQU       0xFFFF0320
T0LD                           EQU       0xFFFF0320
T0VAL                          EQU       0xFFFF0324
T0CON                          EQU       0xFFFF0328
T0CLRI                         EQU       0xFFFF032C
T0CAP                          EQU       0xFFFF0330
Z_T0LD                         EQU       T0LD      -Z_BASE
Z_T0VAL                        EQU       T0VAL     -Z_BASE
Z_T0CON                        EQU       T0CON     -Z_BASE
Z_T0CLRI                       EQU       T0CLRI    -Z_BASE
Z_T0CAP                        EQU       T0CAP     -Z_BASE

T_T0LD                         EQU       T0LD      -T0BASE    
T_T0VAL                        EQU       T0VAL     -T0BASE    
T_T0CON                        EQU       T0CON     -T0BASE    
T_T0CLRI                       EQU       T0CLRI    -T0BASE    
T_T0CAP                        EQU       T0CAP     -T0BASE    

T0LD_OFFSET                    EQU       0x0320
T0VAL_OFFSET                   EQU       0x0324
T0CON_OFFSET                   EQU       0x0328
T0CLRI_OFFSET                  EQU       0x032C
T0CAP_OFFSET                   EQU       0x0330

; WAKE UP TIMER

T1BASE                         EQU       0xFFFF0340
T1LD                           EQU       0xFFFF0340
T1VAL                          EQU       0xFFFF0344
T1CON                          EQU       0xFFFF0348
T1CLRI                         EQU       0xFFFF034C
Z_T1LD                         EQU       T1LD      -Z_BASE
Z_T1VAL                        EQU       T1VAL     -Z_BASE
Z_T1CON                        EQU       T1CON     -Z_BASE
Z_T1CLRI                       EQU       T1CLRI    -Z_BASE

T_T1LD                         EQU       T1LD      -T1BASE    
T_T1VAL                        EQU       T1VAL     -T1BASE    
T_T1CON                        EQU       T1CON     -T1BASE    
T_T1CLRI                       EQU       T1CLRI    -T1BASE    

T1LD_OFFSET                    EQU       0x0340
T1VAL_OFFSET                   EQU       0x0344
T1CON_OFFSET                   EQU       0x0348
T1CLRI_OFFSET                  EQU       0x034C

; WATCHDOG TIMER

T2BASE                         EQU       0xFFFF0360
T2LD                           EQU       0xFFFF0360
T2VAL                          EQU       0xFFFF0364
T2CON                          EQU       0xFFFF0368
T2CLRI                         EQU       0xFFFF036C
T2RCFG                         EQU       0xFFFF0370
Z_T2LD                         EQU       T2LD      -Z_BASE
Z_T2VAL                        EQU       T2VAL     -Z_BASE
Z_T2CON                        EQU       T2CON     -Z_BASE
Z_T2CLRI                       EQU       T2CLRI    -Z_BASE
Z_T2RCFG                       EQU       T2RCFG    -Z_BASE

T_T2LD                         EQU       T2LD      -T2BASE    
T_T2VAL                        EQU       T2VAL     -T2BASE    
T_T2CON                        EQU       T2CON     -T2BASE    
T_T2CLRI                       EQU       T2CLRI    -T2BASE    
T_T2RCFG                       EQU       T2RCFG    -T2BASE    

T2LD_OFFSET                    EQU       0x0360
T2VAL_OFFSET                   EQU       0x0364
T2CON_OFFSET                   EQU       0x0368
T2CLRI_OFFSET                  EQU       0x036C
T2RCFG_OFFSET                  EQU       0x0370

; TIMER 3

T3BASE                         EQU       0xFFFF0380
T3LD                           EQU       0xFFFF0380
T3VAL                          EQU       0xFFFF0384
T3CON                          EQU       0xFFFF0388
T3CLRI                         EQU       0xFFFF038C
T3CAP                          EQU       0xFFFF0390
Z_T3LD                         EQU       T3LD      -Z_BASE
Z_T3VAL                        EQU       T3VAL     -Z_BASE
Z_T3CON                        EQU       T3CON     -Z_BASE
Z_T3CLRI                       EQU       T3CLRI    -Z_BASE
Z_T3CAP                        EQU       T3CAP     -Z_BASE

T_T3LD                         EQU       T3LD      -T3BASE    
T_T3VAL                        EQU       T3VAL     -T3BASE    
T_T3CON                        EQU       T3CON     -T3BASE    
T_T3CLRI                       EQU       T3CLRI    -T3BASE    
T_T3CAP                        EQU       T3CAP     -T3BASE    

T3LD_OFFSET                    EQU       0x0380
T3VAL_OFFSET                   EQU       0x0384
T3CON_OFFSET                   EQU       0x0388
T3CLRI_OFFSET                  EQU       0x038C
T3CAP_OFFSET                   EQU       0x0390

; PLL AND OSCILLATOR CONTROL

PLLBASE                        EQU       0xFFFF0400
POWKEY1                        EQU       0xFFFF0404
POWCON0                        EQU       0xFFFF0408
POWKEY2                        EQU       0xFFFF040C
PLLKEY1                        EQU       0xFFFF0410
PLLCON                         EQU       0xFFFF0414
PLLKEY2                        EQU       0xFFFF0418
GP0KEY1                        EQU       0xFFFF0464
GP0CON1                        EQU       0xFFFF0468
GP0KEY2                        EQU       0xFFFF046C
Z_POWKEY1                      EQU       POWKEY1   -Z_BASE
Z_POWCON0                      EQU       POWCON0   -Z_BASE
Z_POWKEY2                      EQU       POWKEY2   -Z_BASE
Z_PLLKEY1                      EQU       PLLKEY1   -Z_BASE
Z_PLLCON                       EQU       PLLCON    -Z_BASE
Z_PLLKEY2                      EQU       PLLKEY2   -Z_BASE
Z_GP0KEY1                      EQU       GP0KEY1   -Z_BASE
Z_GP0CON1                      EQU       GP0CON1   -Z_BASE
Z_GP0KEY2                      EQU       GP0KEY2   -Z_BASE

T_POWKEY1                      EQU       POWKEY1   -PLLBASE   
T_POWCON0                      EQU       POWCON0   -PLLBASE   
T_POWKEY2                      EQU       POWKEY2   -PLLBASE   
T_PLLKEY1                      EQU       PLLKEY1   -PLLBASE   
T_PLLCON                       EQU       PLLCON    -PLLBASE   
T_PLLKEY2                      EQU       PLLKEY2   -PLLBASE   
T_GP0KEY1                      EQU       GP0KEY1   -GPIOBASE  
T_GP0CON1                      EQU       GP0CON1   -GPIOBASE  
T_GP0KEY2                      EQU       GP0KEY2   -GPIOBASE  

POWKEY1_OFFSET                 EQU       0x0404
POWCON0_OFFSET                 EQU       0x0408
POWKEY2_OFFSET                 EQU       0x040C
PLLKEY1_OFFSET                 EQU       0x0410
PLLCON_OFFSET                  EQU       0x0414
PLLKEY2_OFFSET                 EQU       0x0418
GP0KEY1_OFFSET                 EQU       0x0464
GP0CON1_OFFSET                 EQU       0x0468
GP0KEY2_OFFSET                 EQU       0x046C



; ADC INTERFACE REGISTERS

ADCBASE                        EQU       0xFFFF0500
ADCSTA                         EQU       0xFFFF0500
ADCMSKI                        EQU       0xFFFF0504
ADCMDE                         EQU       0xFFFF0508
ADC0CON                        EQU       0xFFFF050C
ADC1CON                        EQU       0xFFFF0510
ADCFLT                         EQU       0xFFFF0514
ADCCFG                         EQU       0xFFFF0518
ADC0DAT                        EQU       0xFFFF051C
ADC1DAT                        EQU       0xFFFF0520
ADC0OF                         EQU       0xFFFF0524
ADC1OF                         EQU       0xFFFF0528
ADC0GN                         EQU       0xFFFF052C
ADC1GN                         EQU       0xFFFF0530
ADCORCR                        EQU       0xFFFF0534
ADCORCV                        EQU       0xFFFF0538
ADCOTH                         EQU       0xFFFF053C
ADCOTHC                        EQU       0xFFFF0540
ADCOTHV                        EQU       0xFFFF0544
ADCOACC                        EQU       0xFFFF0548
ADCOATH                        EQU       0xFFFF054C
IEXCON                         EQU       0xFFFF0570
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
Z_ADC0GN                       EQU       ADC0GN    -Z_BASE
Z_ADC1GN                       EQU       ADC1GN    -Z_BASE
Z_ADCORCR                      EQU       ADCORCR   -Z_BASE
Z_ADCORCV                      EQU       ADCORCV   -Z_BASE
Z_ADCOTH                       EQU       ADCOTH    -Z_BASE
Z_ADCOTHC                      EQU       ADCOTHC   -Z_BASE
Z_ADCOTHV                      EQU       ADCOTHV   -Z_BASE
Z_ADCOACC                      EQU       ADCOACC   -Z_BASE
Z_ADCOATH                      EQU       ADCOATH   -Z_BASE
Z_IEXCON                       EQU       IEXCON    -Z_BASE

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
T_ADC0GN                       EQU       ADC0GN    -ADCBASE   
T_ADC1GN                       EQU       ADC1GN    -ADCBASE   
T_ADCORCR                      EQU       ADCORCR   -ADCBASE   
T_ADCORCV                      EQU       ADCORCV   -ADCBASE   
T_ADCOTH                       EQU       ADCOTH    -ADCBASE   
T_ADCOTHC                      EQU       ADCOTHC   -ADCBASE   
T_ADCOTHV                      EQU       ADCOTHV   -ADCBASE   
T_ADCOACC                      EQU       ADCOACC   -ADCBASE   
T_ADCOATH                      EQU       ADCOATH   -ADCBASE   
T_IEXCON                       EQU       IEXCON    -ADCBASE   

ADCSTA_OFFSET                  EQU       0x0500
ADCMSKI_OFFSET                 EQU       0x0504
ADCMDE_OFFSET                  EQU       0x0508
ADC0CON_OFFSET                 EQU       0x050C
ADC1CON_OFFSET                 EQU       0x0510
ADCFLT_OFFSET                  EQU       0x0514
ADCCFG_OFFSET                  EQU       0x0518
ADC0DAT_OFFSET                 EQU       0x051C
ADC1DAT_OFFSET                 EQU       0x0520
ADC0OF_OFFSET                  EQU       0x0524
ADC1OF_OFFSET                  EQU       0x0528
ADC0GN_OFFSET                  EQU       0x052C
ADC1GN_OFFSET                  EQU       0x0530
ADCORCR_OFFSET                 EQU       0x0534
ADCORCV_OFFSET                 EQU       0x0538
ADCOTH_OFFSET                  EQU       0x053C
ADCOTHC_OFFSET                 EQU       0x0540
ADCOTHV_OFFSET                 EQU       0x0544
ADCOACC_OFFSET                 EQU       0x0548
ADCOATH_OFFSET                 EQU       0x054C
IEXCON_OFFSET                  EQU       0x0570

; DAC INTERFACE REGISTERS

DACBASE                        EQU       0xFFFF0600
DACCON                         EQU       0xFFFF0600
DACDAT                         EQU       0xFFFF0604
Z_DACCON                       EQU       DACCON    -Z_BASE
Z_DACDAT                       EQU       DACDAT    -Z_BASE

T_DACCON                       EQU       DACCON    -DACBASE   
T_DACDAT                       EQU       DACDAT    -DACBASE   

DACCON_OFFSET                  EQU       0x0600
DACDAT_OFFSET                  EQU       0x0604

; 450 COMPATIABLE UART CORE REGISTERS

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
COMSTA1                        EQU       0xFFFF0718
COMSCR                         EQU       0xFFFF071C
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
Z_COMSTA1                      EQU       COMSTA1   -Z_BASE
Z_COMSCR                       EQU       COMSCR    -Z_BASE
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
T_COMSTA1                      EQU       COMSTA1   -UARTBASE  
T_COMSCR                       EQU       COMSCR    -UARTBASE  
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
COMSTA1_OFFSET                 EQU       0x0718
COMSCR_OFFSET                  EQU       0x071C
COMDIV2_OFFSET                 EQU       0x072C

; I2C BUS PERIPHERAL DEVICE 

I2CBASE                        EQU       0xFFFF0900
I2CMCON                        EQU       0xFFFF0900
I2CMSTA                        EQU       0xFFFF0904
I2CMRX                         EQU       0xFFFF0908
I2CMTX                         EQU       0xFFFF090C
I2CMCNT0                       EQU       0xFFFF0910
I2CMCNT1                       EQU       0xFFFF0914
I2CADR0                        EQU       0xFFFF0918
I2CADR1                        EQU       0xFFFF091C
I2CDIV                         EQU       0xFFFF0924
I2CSCON                        EQU       0xFFFF0928
I2CSSTA                        EQU       0xFFFF092C
I2CSRX                         EQU       0xFFFF0930
I2CSTX                         EQU       0xFFFF0934
I2CALT                         EQU       0xFFFF0938
I2CID0                         EQU       0xFFFF093C
I2CID1                         EQU       0xFFFF0940
I2CID2                         EQU       0xFFFF0944
I2CID3                         EQU       0xFFFF0948
I2CFSTA                        EQU       0xFFFF094C
Z_I2CMCON                      EQU       I2CMCON   -Z_BASE
Z_I2CMSTA                      EQU       I2CMSTA   -Z_BASE
Z_I2CMRX                       EQU       I2CMRX    -Z_BASE
Z_I2CMTX                       EQU       I2CMTX    -Z_BASE
Z_I2CMCNT0                     EQU       I2CMCNT0  -Z_BASE
Z_I2CMCNT1                     EQU       I2CMCNT1  -Z_BASE
Z_I2CADR0                      EQU       I2CADR0   -Z_BASE
Z_I2CADR1                      EQU       I2CADR1   -Z_BASE
Z_I2CDIV                       EQU       I2CDIV    -Z_BASE
Z_I2CSCON                      EQU       I2CSCON   -Z_BASE
Z_I2CSSTA                      EQU       I2CSSTA   -Z_BASE
Z_I2CSRX                       EQU       I2CSRX    -Z_BASE
Z_I2CSTX                       EQU       I2CSTX    -Z_BASE
Z_I2CALT                       EQU       I2CALT    -Z_BASE
Z_I2CID0                       EQU       I2CID0    -Z_BASE
Z_I2CID1                       EQU       I2CID1    -Z_BASE
Z_I2CID2                       EQU       I2CID2    -Z_BASE
Z_I2CID3                       EQU       I2CID3    -Z_BASE
Z_I2CFSTA                      EQU       I2CFSTA   -Z_BASE

T_I2CMCON                      EQU       I2CMCON   -I2CBASE   
T_I2CMSTA                      EQU       I2CMSTA   -I2CBASE   
T_I2CMRX                       EQU       I2CMRX    -I2CBASE   
T_I2CMTX                       EQU       I2CMTX    -I2CBASE   
T_I2CMCNT0                     EQU       I2CMCNT0  -I2CBASE   
T_I2CMCNT1                     EQU       I2CMCNT1  -I2CBASE   
T_I2CADR0                      EQU       I2CADR0   -I2CBASE   
T_I2CADR1                      EQU       I2CADR1   -I2CBASE   
T_I2CDIV                       EQU       I2CDIV    -I2CBASE   
T_I2CSCON                      EQU       I2CSCON   -I2CBASE   
T_I2CSSTA                      EQU       I2CSSTA   -I2CBASE   
T_I2CSRX                       EQU       I2CSRX    -I2CBASE   
T_I2CSTX                       EQU       I2CSTX    -I2CBASE   
T_I2CALT                       EQU       I2CALT    -I2CBASE   
T_I2CID0                       EQU       I2CID0    -I2CBASE   
T_I2CID1                       EQU       I2CID1    -I2CBASE   
T_I2CID2                       EQU       I2CID2    -I2CBASE   
T_I2CID3                       EQU       I2CID3    -I2CBASE   
T_I2CFSTA                      EQU       I2CFSTA   -I2CBASE   

I2CMCON_OFFSET                 EQU       0x0900
I2CMSTA_OFFSET                 EQU       0x0904
I2CMRX_OFFSET                  EQU       0x0908
I2CMTX_OFFSET                  EQU       0x090C
I2CMCNT0_OFFSET                EQU       0x0910
I2CMCNT1_OFFSET                EQU       0x0914
I2CADR0_OFFSET                 EQU       0x0918
I2CADR1_OFFSET                 EQU       0x091C
I2CDIV_OFFSET                  EQU       0x0924
I2CSCON_OFFSET                 EQU       0x0928
I2CSSTA_OFFSET                 EQU       0x092C
I2CSRX_OFFSET                  EQU       0x0930
I2CSTX_OFFSET                  EQU       0x0934
I2CALT_OFFSET                  EQU       0x0938
I2CID0_OFFSET                  EQU       0x093C
I2CID1_OFFSET                  EQU       0x0940
I2CID2_OFFSET                  EQU       0x0944
I2CID3_OFFSET                  EQU       0x0948
I2CFSTA_OFFSET                 EQU       0x094C

; SERIAL PORT INTERFACE PERIPHERAL

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

; GPIO AND SERIAL PORT MUX

GPIOBASE                       EQU       0xFFFF0D00
GP0CON0                        EQU       0xFFFF0D00
GP1CON                         EQU       0xFFFF0D04
GP2CON                         EQU       0xFFFF0D08
GP0DAT                         EQU       0xFFFF0D20
GP0SET                         EQU       0xFFFF0D24
GP0CLR                         EQU       0xFFFF0D28
GP0PAR                         EQU       0xFFFF0D2C
GP1DAT                         EQU       0xFFFF0D30
GP1SET                         EQU       0xFFFF0D34
GP1CLR                         EQU       0xFFFF0D38
GP1PAR                         EQU       0xFFFF0D3C
GP2DAT                         EQU       0xFFFF0D40
GP2SET                         EQU       0xFFFF0D44
GP2CLR                         EQU       0xFFFF0D48
GP2PAR                         EQU       0xFFFF0D4C
Z_GP0CON0                      EQU       GP0CON0   -Z_BASE
Z_GP1CON                       EQU       GP1CON    -Z_BASE
Z_GP2CON                       EQU       GP2CON    -Z_BASE
Z_GP0DAT                       EQU       GP0DAT    -Z_BASE
Z_GP0SET                       EQU       GP0SET    -Z_BASE
Z_GP0CLR                       EQU       GP0CLR    -Z_BASE
Z_GP0PAR                       EQU       GP0PAR    -Z_BASE
Z_GP1DAT                       EQU       GP1DAT    -Z_BASE
Z_GP1SET                       EQU       GP1SET    -Z_BASE
Z_GP1CLR                       EQU       GP1CLR    -Z_BASE
Z_GP1PAR                       EQU       GP1PAR    -Z_BASE
Z_GP2DAT                       EQU       GP2DAT    -Z_BASE
Z_GP2SET                       EQU       GP2SET    -Z_BASE
Z_GP2CLR                       EQU       GP2CLR    -Z_BASE
Z_GP2PAR                       EQU       GP2PAR    -Z_BASE

T_GP0CON0                      EQU       GP0CON0   -GPIOBASE  
T_GP1CON                       EQU       GP1CON    -GPIOBASE  
T_GP2CON                       EQU       GP2CON    -GPIOBASE  
T_GP0DAT                       EQU       GP0DAT    -GPIOBASE  
T_GP0SET                       EQU       GP0SET    -GPIOBASE  
T_GP0CLR                       EQU       GP0CLR    -GPIOBASE  
T_GP0PAR                       EQU       GP0PAR    -GPIOBASE  
T_GP1DAT                       EQU       GP1DAT    -GPIOBASE  
T_GP1SET                       EQU       GP1SET    -GPIOBASE  
T_GP1CLR                       EQU       GP1CLR    -GPIOBASE  
T_GP1PAR                       EQU       GP1PAR    -GPIOBASE  
T_GP2DAT                       EQU       GP2DAT    -GPIOBASE  
T_GP2SET                       EQU       GP2SET    -GPIOBASE  
T_GP2CLR                       EQU       GP2CLR    -GPIOBASE  
T_GP2PAR                       EQU       GP2PAR    -GPIOBASE  

GP0CON0_OFFSET                 EQU       0x0D00
GP1CON_OFFSET                  EQU       0x0D04
GP2CON_OFFSET                  EQU       0x0D08
GP0DAT_OFFSET                  EQU       0x0D20
GP0SET_OFFSET                  EQU       0x0D24
GP0CLR_OFFSET                  EQU       0x0D28
GP0PAR_OFFSET                  EQU       0x0D2C
GP1DAT_OFFSET                  EQU       0x0D30
GP1SET_OFFSET                  EQU       0x0D34
GP1CLR_OFFSET                  EQU       0x0D38
GP1PAR_OFFSET                  EQU       0x0D3C
GP2DAT_OFFSET                  EQU       0x0D40
GP2SET_OFFSET                  EQU       0x0D44
GP2CLR_OFFSET                  EQU       0x0D48
GP2PAR_OFFSET                  EQU       0x0D4C

; FLASH CONTROL INTERFACE

FLASHBASE                      EQU       0xFFFF0E00
FEESTA                         EQU       0xFFFF0E00
FEEMOD                         EQU       0xFFFF0E04
FEECON                         EQU       0xFFFF0E08
FEEDAT                         EQU       0xFFFF0E0C
FEEADR                         EQU       0xFFFF0E10
FEESIG                         EQU       0xFFFF0E18
#if           ALLOW_DEPRECATED_NAMES        
; "FEESIGN" has been deprecated. Use "FEESIG" instead.
FEESIGN                        EQU       0xFFFF0E18
#endif
FEEPRO                         EQU       0xFFFF0E1C
FEEHID                         EQU       0xFFFF0E20
#if           ALLOW_DEPRECATED_NAMES        
; "FEEHIDE" has been deprecated. Use "FEEHID" instead.
FEEHIDE                        EQU       0xFFFF0E20
#endif
Z_FEESTA                       EQU       FEESTA    -Z_BASE
Z_FEEMOD                       EQU       FEEMOD    -Z_BASE
Z_FEECON                       EQU       FEECON    -Z_BASE
Z_FEEDAT                       EQU       FEEDAT    -Z_BASE
Z_FEEADR                       EQU       FEEADR    -Z_BASE
Z_FEESIG                       EQU       FEESIG    -Z_BASE
#if           ALLOW_DEPRECATED_NAMES        
; "Z_FEESIGN" has been deprecated. Use "Z_FEESIG" instead.
Z_FEESIGN                      EQU       FEESIG    -Z_BASE
#endif
Z_FEEPRO                       EQU       FEEPRO    -Z_BASE
Z_FEEHID                       EQU       FEEHID    -Z_BASE
#if           ALLOW_DEPRECATED_NAMES        
; "Z_FEEHIDE" has been deprecated. Use "Z_FEEHID" instead.
Z_FEEHIDE                      EQU       FEEHID    -Z_BASE
#endif

T_FEESTA                       EQU       FEESTA    -FLASHBASE 
T_FEEMOD                       EQU       FEEMOD    -FLASHBASE 
T_FEECON                       EQU       FEECON    -FLASHBASE 
T_FEEDAT                       EQU       FEEDAT    -FLASHBASE 
T_FEEADR                       EQU       FEEADR    -FLASHBASE 
T_FEESIG                       EQU       FEESIG    -FLASHBASE 
#if           ALLOW_DEPRECATED_NAMES        
; "T_FEESIGN" has been deprecated. Use "T_FEESIG" instead.
T_FEESIGN                      EQU       FEESIG    -FLASHBASE 
#endif
T_FEEPRO                       EQU       FEEPRO    -FLASHBASE 
T_FEEHID                       EQU       FEEHID    -FLASHBASE 
#if           ALLOW_DEPRECATED_NAMES        
; "T_FEEHIDE" has been deprecated. Use "T_FEEHID" instead.
T_FEEHIDE                      EQU       FEEHID    -FLASHBASE 
#endif

FEESTA_OFFSET                  EQU       0x0E00
FEEMOD_OFFSET                  EQU       0x0E04
FEECON_OFFSET                  EQU       0x0E08
FEEDAT_OFFSET                  EQU       0x0E0C
FEEADR_OFFSET                  EQU       0x0E10
FEESIG_OFFSET                  EQU       0x0E18
#if           ALLOW_DEPRECATED_NAMES        
; "FEESIGN_OFFSET" has been deprecated. Use "FEESIG_OFFSET" instead.
FEESIGN_OFFSET                 EQU       0xFFFF0E18
#endif
FEEPRO_OFFSET                  EQU       0x0E1C
FEEHID_OFFSET                  EQU       0x0E20
#if           ALLOW_DEPRECATED_NAMES        
; "FEEHIDE_OFFSET" has been deprecated. Use "FEEHID_OFFSET" instead.
FEEHIDE_OFFSET                 EQU       0xFFFF0E20
#endif

; PWM

PWMBASE                        EQU       0xFFFF0F80
PWMCON                         EQU       0xFFFF0F80
PWM0COM0                       EQU       0xFFFF0F84
PWM0COM1                       EQU       0xFFFF0F88
PWM0COM2                       EQU       0xFFFF0F8C
PWM0LEN                        EQU       0xFFFF0F90
PWM1COM0                       EQU       0xFFFF0F94
PWM1COM1                       EQU       0xFFFF0F98
PWM1COM2                       EQU       0xFFFF0F9C
PWM1LEN                        EQU       0xFFFF0FA0
PWM2COM0                       EQU       0xFFFF0FA4
PWM2COM1                       EQU       0xFFFF0FA8
PWM2COM2                       EQU       0xFFFF0FAC
PWM2LEN                        EQU       0xFFFF0FB0
PWMCLRI                        EQU       0xFFFF0FB8
Z_PWMCON                       EQU       PWMCON    -Z_BASE
Z_PWM0COM0                     EQU       PWM0COM0  -Z_BASE
Z_PWM0COM1                     EQU       PWM0COM1  -Z_BASE
Z_PWM0COM2                     EQU       PWM0COM2  -Z_BASE
Z_PWM0LEN                      EQU       PWM0LEN   -Z_BASE
Z_PWM1COM0                     EQU       PWM1COM0  -Z_BASE
Z_PWM1COM1                     EQU       PWM1COM1  -Z_BASE
Z_PWM1COM2                     EQU       PWM1COM2  -Z_BASE
Z_PWM1LEN                      EQU       PWM1LEN   -Z_BASE
Z_PWM2COM0                     EQU       PWM2COM0  -Z_BASE
Z_PWM2COM1                     EQU       PWM2COM1  -Z_BASE
Z_PWM2COM2                     EQU       PWM2COM2  -Z_BASE
Z_PWM2LEN                      EQU       PWM2LEN   -Z_BASE
Z_PWMCLRI                      EQU       PWMCLRI   -Z_BASE

T_PWMCON                       EQU       PWMCON    -PWMBASE   
T_PWM0COM0                     EQU       PWM0COM0  -PWMBASE   
T_PWM0COM1                     EQU       PWM0COM1  -PWMBASE   
T_PWM0COM2                     EQU       PWM0COM2  -PWMBASE   
T_PWM0LEN                      EQU       PWM0LEN   -PWMBASE   
T_PWM1COM0                     EQU       PWM1COM0  -PWMBASE   
T_PWM1COM1                     EQU       PWM1COM1  -PWMBASE   
T_PWM1COM2                     EQU       PWM1COM2  -PWMBASE   
T_PWM1LEN                      EQU       PWM1LEN   -PWMBASE   
T_PWM2COM0                     EQU       PWM2COM0  -PWMBASE   
T_PWM2COM1                     EQU       PWM2COM1  -PWMBASE   
T_PWM2COM2                     EQU       PWM2COM2  -PWMBASE   
T_PWM2LEN                      EQU       PWM2LEN   -PWMBASE   
T_PWMCLRI                      EQU       PWMCLRI   -PWMBASE   

PWMCON_OFFSET                  EQU       0x0F80
PWM0COM0_OFFSET                EQU       0x0F84
PWM0COM1_OFFSET                EQU       0x0F88
PWM0COM2_OFFSET                EQU       0x0F8C
PWM0LEN_OFFSET                 EQU       0x0F90
PWM1COM0_OFFSET                EQU       0x0F94
PWM1COM1_OFFSET                EQU       0x0F98
PWM1COM2_OFFSET                EQU       0x0F9C
PWM1LEN_OFFSET                 EQU       0x0FA0
PWM2COM0_OFFSET                EQU       0x0FA4
PWM2COM1_OFFSET                EQU       0x0FA8
PWM2COM2_OFFSET                EQU       0x0FAC
PWM2LEN_OFFSET                 EQU       0x0FB0
PWMCLRI_OFFSET                 EQU       0x0FB8
