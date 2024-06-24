
#include <lpc21xx.h>
 
 
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
 }
 reciever(){
    while((U0LSR&0X01)==0);
    return U0RBR;																		  
}
void display_termial(const char *a)
{
    while(*a!='\0'){
        transmitter(*a);
        a++;
    }
}

command(char a){
	IOCLR1=0xFFFFFFFF;				//first clear all
	IOSET1=a << 24;

	IOSET1=0x00800000;     			//RS=0 & E=1
	delay();
	IOCLR1=0x00800000;

 }
 data(char a){
    IOCLR1=0xFFFFFFFF;				//first clear all
	IOSET1=a << 24;

	IOSET1=0x00C00000;   			//RS=1 & E=1
	delay();
	IOCLR1=0x00800000;			    //RS=1 & E=0

 }
 
 display_lcd(const char *str){
	while(*str!='\0'){
	   data(*str);
	   str++;
	}

 }
 init_lcd(){
   command(0x01);
   command(0x06);
   command(0x38);
   command(0x0F);
   command(0x80);
 }
                                                                                         //bit		value          fun
 																						// 1:0		01			   TXD(UART0)
																					   //  3:2      01             RXD(UART0)
 int main(){																		  
   PINSEL0=0x00000005;	  
   PINSEL2=0XFFC0000;
   IODIR0=0x0EFE0001;  				//port0.0 as output 0.1 as i/p
   IODIR1=0xFFFFFFFF;
   init_lcd();
   U0LCR=0X83;
   U0DLL=98;
   U0LCR=0X03;  
  
   while(1){
     int flag;
	 char a; 
   	 a=reciever();
	 if(a=='*'){
	 flag=1;
	 }
	 else if(a=='#'){
	 flag=0;
	 }
	 

	 if(flag==1){
	 if(a!='*'){
	 transmitter(a); 
	 data(a);
	 }}
	 
		                
   } 
 }
      