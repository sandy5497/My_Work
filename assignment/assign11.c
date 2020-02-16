#include<stdio.h>
int main()
{ int data,temp;
	printf("enter the data:");scanf("%d",&data);
	temp=2;
	while(data>temp)
	{    if(data%temp==0)break;
		temp++;
	}
	if(data==temp)printf("%d is prime no.",data);
	else printf("%d is not prime no.",data);
	return 0;
}

