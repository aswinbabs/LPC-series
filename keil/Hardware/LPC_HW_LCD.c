
#include<lpc21xx.h>


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


 init_lcd(){
    delay();                        
    command(0x30);                 // Single line enable(2X16)  
    delay();                         
    command(0x30);                 // Single line enable(2X16)
    delay();                      
    command(0x30);                 // Single line enable(2X16) 
    command(0x20);                 // 4-bit Mode Enable 
    command1(0x28);                // Double line enable (2X16) 
    command1(0x01);                // Clear LCD 
    command1(0x06);                // Automatic increment
    command1(0x0C);                // Cursor OFF /Display ON 
 }


 init_ports(){
    IODIR1    =  0x00FE0000;           // 17-23 Pins As Output for LCD 
    IODIR0    =  0x00000000;		 	       
    PINSEL0   =  0x00000000;
    PINSEL1   =  0x05000000;		   //lcd contrast control
    PINSEL2   =  0x00000000;
} 

int main()
 {
    init_ports();                   // Initialize  direction &  pinsel of ports  
    init_lcd();                       // LCD initialization                         
    display("   Aswin    ");    // LCD display                                                  
    command1(0xC0);               // LCD Location (0xC0)                                          
    display("    TCR    ");   // LCD display                                                  
    while(1);
 }
