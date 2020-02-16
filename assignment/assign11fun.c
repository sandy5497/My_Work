#include<stdio.h>
int isPrime(int  v)
{ int temp=2;
	while(v>temp)
	{ if(v%temp==0)return 0;
		temp++;
	}
	if (v==temp)return 1;
	else return 0;
}
int main()
{ int data,temp;
	printf("enter the data:");scanf("%d",&data);
	temp=isPrime(data);
	if(1==temp)printf("%d is prime no.",data);
	else printf("%d is not prime no.",data);
	return 0;
}

