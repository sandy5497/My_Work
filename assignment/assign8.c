#include<stdio.h>
int main()
{ int n=1,temp,sum=0,r;
 	
	while(n<=9999)
	   {    temp=n;
		   
first:sum=0;
		while(temp!=0){
				r=temp%10;
				sum=sum+r;
				temp=temp/10;		
			       }
	                  if(sum>9){temp=sum;goto first;}
			    if(sum==9)printf("%d\t",n);
		n++;
	   }
		return 0;
}
