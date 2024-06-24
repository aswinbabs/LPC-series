#include <lpc213x.h>
 int i,j,k,l,a,b,count=0;
 delay1(){
 for(k=0;k<10;k++){
  for(l=0;l<10;l++);
 }
}
 delay(){
    int i,j;
     for(i=0;i<200;i++){
	    for(j=0;j<200;j++);
     }
 }
 command(char cmd){
	IOCLR0=0x000003FF;				//first clear all
	IOSET0=cmd << 2;

	IOSET0=0x00000002;     			//RS=0 & E=1
	delay();
	IOCLR0=0x00000002;

 }
 data(char data){
    IOCLR0=0x000003FF;				//first clear all
	IOSET0=data << 2;

	IOSET0=0x00000003;   			//RS=1 & E=1
	delay();
	IOCLR0=0x00000002;			    //RS=1 & E=0

 }
 display(const char *str){
    command(0x80);	   
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
 dac1(){
  for(a=0;a<=1023;a++){
   DACR=(a<<6)|(1<<16);
   delay1();
  }
 }
dac2(){
 for(a=1023;a>0;a--){
   DACR=(a<<6)|(1<<16);
   delay1();
  }
}
triangle(){
 for(a=0;a<=1023;a++){
    DACR=(a<<6)|(1<<16);
    delay1();
	if(a==1023){
       for(b=1023;b>0;b--){
       DACR=(b<<6)|(1<<16);
       delay1();
	   }
	 }
  }
}
square(){
 for(a=0;a<=1023;a++){
    DACR=(0<<6)|(1<<16);
    delay1();
	if(a==100){
       for(b=0;b<=1023;b++){
       DACR=(1023<<6)|(1<<16);
       delay1();
	   }
	 }
  }
}
 int main(){
  PINSEL0=0x00000000;	  //GPIO
  PINSEL1=0x00080000;	 //DAC TO AOUT  (P0.25 ENABLED)
  PINSEL2=0X00000000;	//GPIO
  IODIR0=0xFFFFFFFF;    //OUTPUT
  IODIR1=0X00000000;   //INPUT

  init_display();
  //display("here we go");


  while(1){
   if((IOPIN1&0x00010000)==0){
    command(0x01); //screen cleared with each press	
	count++;
	if(count==1){
     display("DAC1");
    }
    else if(count==2){
     display("DAC2");
    }
    else if(count==3){
   	 display("TRIANGLE");
    }
    else if(count==4){
   	 display("SQUARE");
    }	  
   if(count>4){
	 count=0;
   }
  while((IOPIN1&0x00010000)==0);
  }

 switch(count){
   case 1:
	      dac1();
	      break;
   case 2:
	      dac2();		   
		  break;
   case 3:
	      triangle();		   
		  break;
   case 4:
	      square();		   
		  break;
   default:
          display("PRESS ANY");
		  break;

 }

  
 }
 }