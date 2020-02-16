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
{ int data,temp,z,max,min,count=0;
	printf("enter the range min:");scanf("%d",&min);z=min;
	printf("enter the range max:");scanf("%d",&max);
	while(min<=max){data=min;
	temp=isPrime(data);
	if(1==temp){printf("%d,",data);count++;}
	min++;
	}
	printf("\n no. of primes in range %d to %d is %d",z,max,count);
	return 0;
}

