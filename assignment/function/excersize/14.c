#include<stdio.h>
int sum(int a,int b);
int main()
{
	(void)sum(1,2);
	return 0;
}
int sum(int a,int b)
{
	printf("sum is %d\n",a+b);
	return a+b;
}
