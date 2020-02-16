#include<stdio.h>
int main()
{
	float f;
	int i,*ptr,bit,j,b=0,rev=0;
	puts("enter float value");
	scanf("%f",&f);
	ptr=(int *)&f;
	bit=*ptr;
	for(i=31,j=0;j<=31;j++,i--)
	{
		b=(bit>>j)&1;
		rev=rev|(b<<i);
		
	}
	for(i=31;i>=0;i--)
	{
		printf("%d",(bit>>i)&1);
		if(i%4==0)printf(" ");
	}
	printf("\n");
	for(i=31;i>=0;i--)
	{
		printf("%d",(rev>>i)&1);
		if(i%4==0)printf(" ");
	}
	puts(" ");
	return 0;
}

