#include<stdio.h>
int groot()
{ long n,s=0;
	printf("enter the number");
	scanf("%ld",&n);
	while(n>9)
	{ while(n!=0)
		{  s=s+n%10;
			n=n/10;
		}
		n=s;s=0;
	}
	return n;
}
void main()
{ printf("generic root=%d",groot());
}
