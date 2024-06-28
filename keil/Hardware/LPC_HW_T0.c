#include <lpc213x.h>
int main(){
 PINSEL0=0x00000000;			  //gpio
 IODIR0=0x000E0000;				  // p0.17-19 as o/p
 T0TCR=0X02;
 T0TCR=0X01;
 T0CTCR=0X00;
 T0TC=0;
 T0PC=0;
 T0PR=14999999;
 while(1){
		if(T0TC%2==0){				   //if even number
		IOSET0=0x000E0000;
		}
		else{
		IOCLR0=0x000E0000;
		}
 }

 }