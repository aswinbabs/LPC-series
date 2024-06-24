#include <lpc213x.h>

int main(){
 PINSEL0=0x00000000;
 IODIR0=0x00000001;
 
 T1TCR=0x02;
 T1TCR=0x01;
 T1CTCR=0x00;
 T1TC=0;
 T1PR=149999;
 T1PC=0;
 
  while(1){
   if(T1TC%2==0){
    IOSET0=0x00000001;
	}
   else{
    IOCLR0=0x00000001;
   }
  }
 }