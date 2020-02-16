#include<stdio.h>
extern int g2=100;
void f1(void)
{
	printf("sandeep");
	g2++;
	printf("%d ",g2);
}
