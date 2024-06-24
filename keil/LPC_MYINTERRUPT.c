#include <lpc213x.h>
delay1(){
    int i,j;
     for(i=0;i<200;i++){
	    for(j=0;j<200;j++);
     }
 }
 command(char a){
	IOCLR0=0x000003FF;				//first clear all
	IOSET0=a << 2;

	IOSET0=0x00000002;     			//RS=0 & E=1
	delay1();
	IOCLR0=0x00000002;

 }
 data(char a){
    IOCLR0=0x000003FF;				//first clear all
	IOSET0=a << 2;

	IOSET0=0x00000003;   			//RS=1 & E=1
	delay1();
	IOCLR0=0x00000002;			    //RS=1 & E=0

 }
 display(const char *str){
	while(*str!='\0'){
	   data(*str);
	   str++;
	}

 }
 init_display(){
   command(0x01);
   command(0x06);
   command(0x38);
   command(0x0F);
   command(0x80);
 }
 /////////////////////////////////////////////////////
void delay(){
 int i;
 for(i=0;i<=1000000;i++);
}

void isr() __irq{
 int j;
 command(0x01);
 for(j=0;j<=100;j++){
 command(0x80);
 display("INTERRUPT ON");  
 }
 EXTINT=(1<<0);						 //1 TO ZEROTH PIN
 VICVectAddr=0;						 //ACKNOWLEDGE THE INTERRUPT IN THE VIC
}

void main(){
 IO0CLR=~0;
 PINSEL0=0;								//GPIO
 PINSEL1=1<<0;						   //FOR ENABLING  EINT0
 IO0DIR=~0;
 IO1DIR=~0;

 init_display();  

 EXTINT=0x01;						//SELECT EINT0
 EXTMODE=0x01;						//EINT0 EDGE SESITIVE
 EXTPOLAR=0x00;					   //EINT0 FALLING EDGE SENSITIVE  (PULL DOWN SWITCH)
 VICIntEnClr=1<<14;		            //CLEAR INTERRUPT
 VICIntSelect=0;				    //ASSIGNED TO IRQ CATAGORY
 VICVectCntl0=(1<<5)|14;			//bit no:only
 VICVectAddr0=(unsigned int)isr;	//address of interrupt fun
 VICIntEnable=1<<14;				   //CLEAR INTERRUPT
 //display("HERE WE GO !");	
 
 
  			
 while(1){
  command(0x80);
  display("Ideal Condition");
  IO1PIN=~IO1PIN;
  delay();
 }
}