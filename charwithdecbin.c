#include<stdio.h>
int main()
{ int bit;unsigned char c=0;
	
	while((c>=0)&&(c<=127)){   
			  printf("char %c:  %d\t",c,c);bit=31;
		         while(bit>=0){ 
			           printf("%d",(c>>bit)&1);
		                   if(bit%4==0)printf(" ");
		                   bit--;		   
			 }	  
			 printf("\n");c++;

			 }
			 return 0;
			 }
