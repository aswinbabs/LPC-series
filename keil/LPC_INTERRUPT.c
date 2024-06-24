#include <lpc213x.h>

void delay(){
 int i;
 for(i=0;i<=1000000;i++);
}

void isr() __irq{
 int j;
 for(j=0;j<=10;j++){
  IO0PIN=~IO0PIN;
  delay();
 }
 EXTINT=(1<<1);			 			//1 TO 1TH PIN
 VICVectAddr=0;
}

void main(){
 IO0CLR=~0;
 PINSEL0=1<<29;		   				//ENABLE EINT1
 IO0DIR=~0;
 IO1DIR=~0;
 EXTINT=0x02;						//SELECT FOR EINT1
 EXTMODE=0x02;						//EINT1 EDGE SESITIVE
 EXTPOLAR=0x02;						//EINT1 RISING EDGE SENSITIVE ( PULL UP SWITCH)
 VICIntEnClr=1<<15;		            //CLEAR INTERRUPT
 VICIntSelect=0;				    //ASSIGNED TO IRQ CATAGORY
 VICVectCntl0=(1<<5)|15;			//bit no:only
 VICVectAddr0=(unsigned int)isr;	//address of interrupt fun
 VICIntEnable=1<<15;				//CLEAR INTERRUPT
 while(1){
  IO1PIN=~IO1PIN;
  delay();
 }
}