#include <lpc213x.h>
#include <stdio.h>
int a;
char c[10];
 delay(){
    int i,j;
     for(i=0;i<200;i++){
	    for(j=0;j<200;j++);
     }
 }
 command(char a){
	IOCLR0=0x000003FF;				//first clear all
	IOSET0=a << 2;

	IOSET0=0x00000002;     			//RS=0 & E=1
	delay();
	IOCLR0=0x00000002;

 }
 data(char a){
    IOCLR0=0x000003FF;				//first clear all
	IOSET0=a << 2;

	IOSET0=0x00000003;   			//RS=1 & E=1
	delay();
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
 int main(){
   PINSEL1=0X00400000;	     				 //for turning P0.27 into ADC mode
   IODIR0=0xF0FFFFFF;  				//port0 as output
   init_display();
   
   

   //display("HERE WE GO !");
   while(1)
   {
	AD0CR=0x01|3<<8|1<<21;
    while((AD0GDR&1<<31)==0);
	a=AD0GDR<<6&0X3FF;
	sprintf(c,"VOLTAGE:%0.2f",a);
	display(c);
   }
 }