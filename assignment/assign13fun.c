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
{ int data,temp,z=0,start,count;
	printf("enter the start range:");scanf("%d",&start);
	printf("enter the count value:");scanf("%d",&count);
	printf("\n %d  primes starting from %d  is",count,start);
	while(z!=count){data=start;
	temp=isPrime(data);
	if(1==temp){printf("%d,",data);z++;}
	start++;
	}
	
	return 0;
}

