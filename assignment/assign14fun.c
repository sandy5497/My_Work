#include<stdio.h>
int testAcend(int);
int testDcend(int);
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
	if((1==temp)&&(testAcend(data)||testDcend(data))){printf("%d,",data);count++;}
	min++;
	}
	printf("\n no. of primes in range %d to %d is %d",z,max,count);
	return 0;
}
int testAcend(int v)
{ int max=9;
	while(v!=0){if((v%10)<=max)max=(v%10);
	else return 0;
	v/=10;
	}
	return 1;
}
int testDcend(int v)
{ int min=0;
	while(v!=0){if((v%10)>=min)min=(v%10);
		    else return 0;
		    v/=10;
	}
	return 1;
}
