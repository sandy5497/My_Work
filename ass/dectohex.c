#include<stdio.h>

void hex(int dec)
{	
	int rem;
	if(dec==0)
		return ;
	rem=dec%16;
	hex(dec/16);
	if(rem>9)printf("%c",55+rem);
	else printf("%c",48+rem);
	return ;
}
int main()
{
	int dec;
	printf("enter decimal value");
	scanf("%d",&dec);
	hex(dec);
	printf("\n");
	return 0 ;
}

