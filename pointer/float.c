#include<stdio.h>
int main()
{ double f;
	printf("enter the num:");
	scanf("%x",&f);
	long long *ptr=&f;
	long long ch;
	int bit,i;ch=*ptr;
	for(i=63;i>=0;i--)
	{  printf("%d",(ch>>i)&1);if(i%4==0)printf(" ");
	}
	
}
