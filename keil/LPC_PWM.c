#include <lpc213x.h>

int main(){
 PINSEL0=0x00000008;         //choose pinsel value to enable pwm3
 IODIR0=0xFFFFFFFF;
 PWMMR0=100;
  PWMMR3=50;
 PWMTCR=0X02;
 PWMTCR=0X09;
 PWMMCR=0X00000002;
 PWMPR=14999;
 PWMTC=0;
 PWMPC=0;
 
 PWMPCR=0X0800;

 while(1);
}