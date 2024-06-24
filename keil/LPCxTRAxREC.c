#include <lpc21xx.h>

 delay(){
    int i,j;
     for(i=0;i<200;i++){
	    for(j=0;j<200;j++);
     }
 }

TRANSMITTER(char a){
    while((U0LSR&0x40)==0);
    U0THR=a;
    U0LSR=0x40;
}
void display(const char *a)
{
    while(*a!='\0'){
        TRANSMITTER(*a);
        a++;
    }
}
char RECIEVER(){
    while((U0LSR&0X01)==0);
    return U0RBR;
}
 
 int main(){
   PINSEL0=0x00000005;	  //choose 0.0 and 0.1	for TXD and RXD
   IODIR0=0x00000001;  				//port0.0 as output 0.1 as i/p
   U0LCR=0X83;
   U0DLL=98;
   U0LCR=0X03;

   
  
   while(1){
   TRANSMITTER(RECIEVER());
   }
 }