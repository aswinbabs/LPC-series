#include <lpc213x.h>
 int count=0;             
delay(){
    int i,j;
     for(i=0;i<200;i++){
	    for(j=0;j<200;j++);
     }
 }
 command(char a){
	IOCLR0=0x00003FF0;				//first clear
	IOSET0=a << 4;

	IOSET0=0x00002000;     			//RS=0 & E=1
	delay();
	IOCLR0=0x00002000;

 }
 data(char a){
    IOCLR0=0x00000FFC;				//first clear all
	IOSET0=a << 4;

	IOSET0=0x00003000;   			//RS=1 & E=1
	delay();
	IOCLR0=0x00002000;			    //RS=1 & E=0

 }
 display(const char *str){
	while(*str!='\0'){
	   data(*str);
	   str++;
	}

 }
 init_lcd(){
   command(0x01);
   command(0x06);
   command(0x38);
   command(0x0F);
   command(0x80);
 }
int main(){
 PINSEL0=0x00000008;         //choose pinsel value to enable pwm3
 PINSEL2=0X00000000;
 IODIR0=0xFFFFFFFD;			 //all out except p0.1
 IODIR1=0X00000000;
 init_lcd();
 PWMMR0=100;
 
 PWMTCR=0X02;
 PWMTCR=0X09;
 PWMMCR=0X00000002;
 PWMPR=14999;
 PWMTC=0;
 PWMPC=0;
 PWMPCR=0X0800;

  

 while(1){
  	 
    if((IOPIN1&0x00010000)==0){
	 command(0x01);   // cleared screen cause by default press is displayed ; if not cleared last letter of press ie 's' will be shown with each cases
     count++;
     if(count>3){
      count=0;
     }
   while((IOPIN1&0x00010000)==0);
  }
  
  
  switch(count){
   case 1:
    IOSET0=0x00010000;
    PWMLER=0X08;	 //LATCH ENABLE
    PWMMR3=25;
    command(0x80);
	display(" 25%");
	break;
   case 2:	
    IOSET0=0x00010000; 
    PWMLER=0X08;	//LATCH ENABLE
	PWMMR3=50;
	command(0x80);
	display(" 50%");
	break;
   case 3:
    IOSET0=0x00010000;
	PWMLER=0X08;	 //LATCH ENABLE
    PWMMR3=75;  
	command(0x80);
	display(" 75%");
	break;
   default:
    command(0x80);
    display("Press");
	IOCLR0=0x00010000;
  }
 }
}