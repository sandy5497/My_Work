#include<stdio.h>
int sumofDigits(int s){
      			int sm=0,r,z=s,a=9;
	while(z!=0){ r=z%10;if(r<=a)a=r;else{ return sm=0;}
				     sm=sm+r;
				     z=z/10;
					}
    				
					return sm;
    			}
int main()
{ int n=1,temp,sum;
 	
	while(n<=9999)
	   {  
		   //sum=sumofDigits(sumofDigits(n));
		   sum=n;
		   while((sum=sumofDigits(sum))>9);
			    if(sum==9)printf("%d\t",n);
		n++;
	   }
		return 0;
}
