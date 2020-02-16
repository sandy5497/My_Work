#include<stdio.h>
#include<stdlib.h>

int main()
{
	int dec,rem,oct=0,k=10;
	puts("enter decimal");
	scanf("%d",&dec);
	while(dec)
	{
		rem=dec%10;
		oct=oct*k+rem;
		k=k*10;
		dec/=10;
	}
	printf("%d\n",oct);
}

