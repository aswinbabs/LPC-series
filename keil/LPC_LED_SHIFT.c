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
		   
		   
		   while(1){
		   
		   		 int i;
				 for(i=0;i<=31;i++){
				 

			       IOSET0=0x00000001<<i;
			       delay();
			 	   IOCLR0=0x00000001<<i;
				 
				 }
		   		   
		   }	  
 
 
 }
