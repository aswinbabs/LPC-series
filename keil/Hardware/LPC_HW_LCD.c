#include <lpc21xx.h>

 delay(){
    int i,j;
     for(i=0;i<200;i++){
	    for(j=0;j<200;j++);
     }
 }
 command(char cmd){
    int temp;
	IOCLR1=0x00FF0000;				//first clear all
	IOSET1=0x00080000;			   //RS=0  EN =1	 
	temp=cmd<<16;				  //higher nibble to 16th pin
	IOSET1=IOSET1 | temp;
	delay();
	IOCLR1=0x00080000;             //RS=0  EN =0	 	
 }
 
 init_lcd(){
   command(0x01);
   command(0x06);
   command(0x38);
   command(0x0F);
   command(0x80);
 }
 int main(){	     				
   PINSEL2=0;

   IODIR1=0xFFFFFFFF;  				//port0 as output
   init_lcd();
   while(1);
 }