#include<lpc213x.h>
int i,j,a,b;
delay(){
 for(i=0;i<10;i++){
  for(j=0;j<10;j++);
 }
}
int main(){
 PINSEL1=0x00080000;
 IODIR0=0xFFFFFFFF;
 
 while(1){
  for(a=0;a<=100;a++){
    DACR=(0<<6)|(1<<16);
    delay();
	if(a==100){
       for(b=0;b<=100;b++){
       DACR=(1023<<6)|(1<<16);
       delay();
	   }
	 }
  }
 }
}