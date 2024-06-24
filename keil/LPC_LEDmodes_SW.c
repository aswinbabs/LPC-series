 #include <lpc21xx.h>
  delay(){
    int i,j;
     for(i=0;i<200;i++){
	    for(j=0;j<200;j++);
	}
	}
 int main(){	  
    PINSEL0=0;
    PINSEL1=0;	      //for turning every pins into GPIO mode
    PINSEL2=0;


    IODIR0=0xFFFFFFFF;		   //for changing port 0  into output 
    IODIR1=0x00000000;		  //for changing port 1  into input
		   
    while(1){
	   int i;
	   if((IOPIN1&0x00010000)==0){
	     for(i=0;i<=5;i++){		                 //1.16 as switch  
	       IOSET0=0xFFFFFFFF;				 
           delay();							     //0.0 to 0.31  0n
	       IOCLR0=0xFFFFFFFF;
		 } 
	   }   
	   else if((IOPIN1&0x00020000)==0){		     //1.17 as switch  
         for(i=0;i<=5;i++){
	       IOSET0=0xFFFFFFFF;
           delay();								 //0.0 to o.31 blink
	       IOCLR0=0xFFFFFFFF;
		   delay();
         }
	   }   
	   else if((IOPIN1&0x00040000)==0){		     //1.18 as switch  
         for(i=0;i<=31;i++){
	       IOSET0=0x00000001<<i;
           delay();								 //0.0 to 0.31 left shift
	       IOCLR0=0x00000001<<i;
         }
	   }   
	   else if((IOPIN1&0x00080000)==0){		     //1.19 as switch  
         for(i=0;i<=31;i++){
	       IOSET0=0x80000000>>i;
           delay();								 //0.0 to 0.31 right shift
	       IOCLR0=0x80000000>>i;
         }
	   }   
	}	  
 }
