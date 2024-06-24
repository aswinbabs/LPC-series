#include <lpc213x.h>
 int i,j;
 delay(){
  for(i=0;i<1000;i++){
   for(j=0;j<1000;j++);
  }
 }
 int main(){
           PINSEL0=0;
		   PINSEL1=0;
		   IODIR0=0xFFFE3FFF;					   //0.14-16 I/P | 0.17-19 O/P
		   
		   while(1){
               int k;

		       if((IOPIN0&0x00008000)==0){			    
			    IOCLR0=0x000E0000;
				delay();
				IOSET0=0x000E0000;
			    
			   }
			   else if((IOPIN0&0x00010000)==0){
			    for(k=0;k<5;k++){
				 IOSET0=0x000E0000;
			     delay();
			     IOCLR0=0x000E0000;
				 delay();
				}
			   }
			   else{
			    IOSET0=0X000E0000;		  //in-built leds are pull down based
			   }
          }
 }