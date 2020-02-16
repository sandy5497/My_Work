#include<stdio.h>
int main()
{
	int dec,num,oct=0,rem,k=1;
	puts("enter decimal value");
	scanf("%d",&dec);
	num=dec;
	while(dec)
	{
		rem=dec%8;
		oct=oct+rem*k;
		k=k*10;
		dec=dec/8;
	}
	printf("octal of %d is %o=%d\n",num,num,oct);
	return 0;
}
