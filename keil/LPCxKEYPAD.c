#include <lpc21xx.h>

 delay(){
    int i,j;
     for(i=0;i<100;i++){
	    for(j=0;j<100;j++);
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
 row_1(){
     IOCLR1=0xFFFFFFFF;
   	 IOSET1=0x000E0000;             //pin 1.16 into zero and other o/p's ie 17,18,19 into 1 &     ( pin 1.21,1.22,1.23 ) i/p's s into 0

	 if((IOPIN1&0x00100000)==0){
       display("7");
	   while((IOPIN1&0x00100000)==0);
     }
	 else if((IOPIN1&0x00200000)==0){
       display("8");
	   while((IOPIN1&0x00200000)==0);
     }
	 else if((IOPIN1&0x00400000)==0){
       display("9");
	   while((IOPIN1&0x00400000)==0);
     }
	 else if((IOPIN1&0x00800000)==0){
       display("0");
	   while((IOPIN1&0x00800000)==0);
     }
 }
 row_2(){
     IOCLR1=0xFFFFFFFF;
	 IOSET1=0x000D0000;           //pin 1.17 into zero and other o/p's ie 16,18,19 into 1 &     ( pin 1.21,1.22,1.23 ) i/p's s into 0

	 if((IOPIN1&0x00100000)==0){
       display("4");
	   while((IOPIN1&0x00100000)==0);
     }
	 else if((IOPIN1&0x00200000)==0){
       display("5");
	   while((IOPIN1&0x00200000)==0);
     }
	 else if((IOPIN1&0x00400000)==0){
       display("6");
	   while((IOPIN1&0x00400000)==0);
     }
	 else if((IOPIN1&0x00800000)==0){
       display("#");
	   while((IOPIN1&0x00800000)==0);
     }
 }
 row_3(){
     IOCLR1=0xFFFFFFFF;
	 IOSET1=0x000B0000;           //pin 1.18 into zero and other o/p's ie 16,17,19 into 1 &     ( pin 1.21,1.22,1.23 ) i/p's s into 0

	 if((IOPIN1&0x00100000)==0){
       display("1");
	   while((IOPIN1&0x00100000)==0);
     }
	 else if((IOPIN1&0x00200000)==0){
       display("2");
	   while((IOPIN1&0x00200000)==0);
     }
	 else if((IOPIN1&0x00400000)==0){
       display("3");
	   while((IOPIN1&0x00400000)==0);
     }
	 else if((IOPIN1&0x00800000)==0){
       display("*");
	   while((IOPIN1&0x00800000)==0);
     }
 }
 row_4(){
     IOCLR1=0xFFFFFFFF;
	 IOSET1=0x00070000;           //pin 1.19 into zero and other o/p's ie 16,17,18 into 1 &     ( pin 1.21,1.22,1.23 ) i/p's s into 0

	 if((IOPIN1&0x00100000)==0){
       display("A");
	   while((IOPIN1&0x00100000)==0);
     }
	 else if((IOPIN1&0x00200000)==0){
       display("B");
	   while((IOPIN1&0x00200000)==0);
     }
	 else if((IOPIN1&0x00400000)==0){
       display("C");
	   while((IOPIN1&0x00400000)==0);
     }
	 else if((IOPIN1&0x00800000)==0){
       display("D");
	   while((IOPIN1&0x00800000)==0);
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
   PINSEL0=0;
   PINSEL1=0;	     				 //for turning every pins into GPIO mode
   PINSEL2=0;

   IODIR0=0xFFFFFFFF;  				//port0 as output
   IODIR1=0x000F0000;               //port1 as input
   init_lcd();

   while(1){

      row_1();
      delay();
	  row_2();
	  delay();
	  row_3();
	  delay();
	  row_4();
	  delay();
   }
 } 