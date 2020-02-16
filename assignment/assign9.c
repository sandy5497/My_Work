#include<stdio.h>
int main()
{ int n=1,z,found=0,temp,sum=0,r;
 	printf("enter the numbers sum of digit u want to be check & its occurance in number");scanf("%d",&z);
	while(n<=9999)
	   {    temp=n;found=0;
		   
first:sum=0;
		while(temp!=0){
				r=temp%10;if(r==z)found=1;
				sum=sum+r;
				temp=temp/10;		
			       }
	       			
			     	if(sum>9){temp=sum;goto first;}
		if((sum==z)&&(found==1))printf("%d\t",n);
			   
		n++;
	   }
		return 0;
}
