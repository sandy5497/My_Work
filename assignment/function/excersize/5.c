#include<stdio.h>
int func(int a,int b,int c)
{
	return a+b+c;
}
int main()
{
	int s;
	s=func(1,2);
	printf("%d\n",s);
	s=func(1,2,3,4);
	printf("%d\n",s);
	return 0;
}
