#include <lpc21xx.h>

int main(){
 PINSEL0=0x00000008;         //choose pinsel value to enable pwm3
 IODIR0=0x00000002;			//p0.1 as output
 PWMMR0=100;			   //period
 PWMMR3=50;				   //duty cycle
 PWMTCR=0X02;			  //counter reset
 PWMTCR=0X09;			  // pwm enable ,counter enable
 PWMMCR=0X00000002;		  // Reset on PWMMR0
 PWMPR=14999;			 // calculated for 1 ms delay
 PWMTC=0;
 PWMPC=0;
 
 PWMPCR=0X0800;			 //pwm3 output enable

 while(1);
}