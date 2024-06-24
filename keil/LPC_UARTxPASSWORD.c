
#include <lpc21xx.h>
 char match[4],compare[4]="1234";
 int count=0,k=0;
 delay(){
    int i,j;
     for(i=0;i<200;i++){
	    for(j=0;j<200;j++);
     }
 }

 transmitter(char a){
    while((U0LSR&0x40)==0);
    U0THR=a;
    U0LSR=0x40;
	match[k]=a;
	k++;
 }
void display(const char *a)
{
    while(*a!='\0'){
        transmitter(*a);
        a++;
    }
}
 reciever(){
    while((U0LSR&0X01)==0);
    return U0RBR;																		  
}
                                                                                         //bit		value          fun
 																						// 1:0		01			   TXD(UART0)
																					   //  3:2      01             RXD(UART0)
 int main(){																		  
   PINSEL0=0x00000005;	  //choose 0.0 and 0.1	for TXD0 and RXD0
   IODIR0=0x00000001;  				//port0.0 as output 0.1 as i/p
   U0LCR=0X83;
   U0DLL=98;
   U0LCR=0X03;   
   while(1){
   transmitter(reciever());
     if(k==4){
      int i;         
      for(i=0;i<4;i++){
         if(match[i]==compare[i]){
            count++;                      
         }
      }
      if(count==4){       
        display("\rACCESS GRANTED");
      }
      else{       
        display("\rACCESS DENIED");
      }        
        count=0;
        k=0;
      }
   }
 }