#include<stdio.h>
int *f()
{
	int a=4;
	return &a; 
}
int main()
{
	int *i=f();
	*i=6;
	printf("%d\n",i);
return 0;
}
