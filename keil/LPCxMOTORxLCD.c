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
 cw(){
   IOSET0=0x00014000;
  }
 ccw(){
   IOSET0=0x00110000;
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
   IODIR1=0x00000000;               //port1 as input
   init_lcd();
   
   
   while(1){
     if((IOPIN1&0x00010000)==0){		//sw1 at 1.16
	   cw();
	   command(0x80);
	   display("CW\r\n");
	   
     }
     else if((IOPIN1&0x00020000)==0){   //sw2 at 1.17
	   ccw();
	   command(0x80);
	   display("CCW\r\n");

     }
	 else{
	 command(0x80);
	 display("Press Any Button\n\r");
	 
	 
	 IOCLR0=0x00014000;
	 IOCLR0=0x00110000;
	 command(0x01);
	 }
   }

 }