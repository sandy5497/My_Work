#include<stdio.h>
int sumofDigits(int s){
      			int sm=0,r,z=s;
	while(z!=0){ r=z%10;
				     sm=sm+r;
				     z=z/10;
					
	                              }
				return sm;
				
    			}
int main()
{ int n=1,temp,sum,found=0,r;
 	
	while(n<=9999)
	   {  
		   //sum=sumofDigits(sumofDigits(n));
		   sum=n;temp=n;found=0;
		   while((sum=sumofDigits(sum))>9);
			   while(temp!=0){r=temp%10;if(r==9)found=1;
			                        temp=temp/10;   } if((sum==9)&&(found==1))printf("%d\t",n);
		n++;
	   }
		return 0;
}
