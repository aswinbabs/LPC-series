#include <lpc213x.h>
 int i,j;
 delay(){
  for(i=0;i<500;i++){
   for(j=0;j<500;j++);
  }
 }
 int main(){
		   PINSEL1=0;
		   IODIR0=0xFFFFFFFF;
		   
		   while(1){
			   IOSET0=0xFFFFFFFF;
			   delay();
			   IOCLR0=0xFFFFFFFF;
			   delay();
          }
 }