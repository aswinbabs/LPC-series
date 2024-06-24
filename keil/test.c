		 #include <lpc21xx.h>
		 delay(){
		 int i,j;
		 for(i=0;i<100;i++){
		 for(j=0;j<100;j++);
		 }


		 }
		 int main(){
		   PINSEL0=0;
		   PINSEL1=0;
		   PINSEL2=0;
		   IODIR0=0xFFFFFFFF;
		   IODIR1=0xFFFFFFFF;
		   
		   while(1){
		   int i;
		    for(i=0;i<=5;i++){

			   IOSET0=0xFFFFFFFF;
			   IOSET1=0xFFFFFFFF;

			   delay();
			   IOCLR0=0xFFFFFFFF;
			   IOCLR1=0xFFFFFFFF;
			   delay();
		   }

		}

 }