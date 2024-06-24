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

  for(a=0;a<=1023;a++){
    DACR=(a<<6)|(1<<16);
    delay();
	if(a==1023){
       for(b=1023;b>0;b--){
       DACR=(b<<6)|(1<<16);
       delay();
	   }
	 }
  }
 }
}