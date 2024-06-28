
#include<lpc21xx.h>
#include <stdio.h>


unsigned int adc_value=0;
char c[10];
float a;	

delay(){
    int i,j;
     for(i=0;i<200;i++){
	    for(j=0;j<200;j++);
     }
 }

command(char cmd){
    int Temp;
    IOCLR1 = 0X00FE0000;                       // Clear ALL 16-23 Pins 
    IOSET1 = 0X00080000;                //EN=1
                            
    Temp   = (cmd & 0xF0) << 16;    // higher 4 nibble extracted and then left shifted 16 bits then copy to temp
    IOSET1 = IOSET1 | Temp;             // 0X00080000 | 0X00300000[Shifted] = 0X00380000 [Only '3' Is in [20-23]pins 
    delay();                                   
    IOCLR1 = 0X00080000;                       // EN=0  
 }


command1(char cmd1){
    int Temp;
    IOCLR1 = 0X00FE0000;                // Clear ALL 16-23 Pins  
    IOSET1 = 0X00080000;;              // EN=1                     
  
    Temp   = (cmd1 & 0xF0) << 16;                                   // Higher Nibble Extracting 0X30 [3-High] & [4-7] Shifted To [20-23] 
    IOSET1 = IOSET1 | Temp;                                        // 0X00080000 | 0X00300000[Shifted] = 0X00380000  [Only '3' Is in [20-23]pins   
    delay();                
    IOCLR1 = 0X00080000;               // EN=0			(if not cleared 2nd line won't appear )


    IOCLR1 = 0X00FE0000;               // Clear ALL 16-23 Pins 


    IOSET1 = 0X00080000;                // EN=1                         
    Temp   = (cmd1 & 0x0F) << 20;                                 //Lower Nibble [0-3] Shifted To [20-23] &  [0-3] Shifted To [20-23] 
    IOSET1 = IOSET1 | Temp;                                       // 0X00080000 | 0X00800000[Shifted] = 0X00880000 [Only '8' Is in [20-23]pins 
    delay();                           
    IOCLR1 = 0X00080000;                //EN=0
 }


 data(char data)  
 {
    int Temp;
    IOCLR1 = 0X00FE0000;                       // Clear ALL 16-23 Pins
    IOSET1 = 0X000A0000;                // EN=1	 RS=1                   
    Temp   = (data & 0xF0) << 16;       // Higher Nibble Extracting 0X30 [3-High] & [4-7] Shifted To [20-23]  
    IOSET1 = IOSET1 | Temp;             // 0X00080000 | 0X00300000[Shifted] = 0X00380000 [Only '3' Is in [20-23]pins 
    delay();                           
    IOCLR1 = 0X00080000;                //EN=0


    IOCLR1 = 0X00FE0000;                       // Clear ALL 16-23 Pins  


    IOSET1 = 0X000A0000;                //EN=1	RS=1
                          
    Temp   = (data & 0x0F)<<20;         // Lower Nibble [0-3] Shifted To [20-23]  [0-3] Shifted To [20-23] 
    IOSET1 = IOSET1 | Temp;             // 0X00080000 | 0X00800000[Shifted] = 0X00880000 [Only '8' Is in [20-23]pins 
    delay();                        
    IOCLR1 = 0X00080000;                // EN=0 
 }
 
 display(const char *str){
	while(*str!='\0'){
	   data(*str);
	   str++;
	}

 }
void LCD_Init(void)
{
 delay();
 command(0x30);
 delay();	
 command(0x30);
 delay();	
 command(0x30);
 command(0x20);
 command1(0x28);
 command1(0x01);                    /* Clear display                        */
 command1(0x06);                    /* Auto increment                       */
 command1(0x0C);                    /* Cursor off                           */
}

void PORT_Initial(void)    
{
 IO1DIR   =    0x00FE0000;              /* LCD pins set as o/p                  */
 PINSEL0  =    0x00000000;
 PINSEL1  =    0x04000000;              /* ADC function for 0.28 & 0.29         */
 PINSEL2  =    0x00000000;
}


int main()
{
 PORT_Initial();                        
 LCD_Init();                           
 
 while(1)
 {
   int ab; 
   ADCR=0x00200604; 	        /* PDN=1,CLKDIV=6,channel=AD0.2         */
   ADCR = ADCR|0x01000000;                
   while((ADDR&0x80000000)!=0x80000000);  
   ab = (ADDR&0x0000FFC0);             
   ab = (ab>>6);                      
   a= (ab * 5)  / 1023.0;
   command1(0x80);  
   sprintf(c,"Voltage:%0.2f",a);
   display(c);                      
 }
}