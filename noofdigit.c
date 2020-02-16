#include<stdio.h>
int main()
{ int n,count=0,temp;
	puts("enter the no.");
	scanf("%d",&n);temp=n;
	do{   
             count++;
	     temp/=10;
              	}while(temp!=0);
	printf("no of digits in no. is %d",count);
	return 0;
}
