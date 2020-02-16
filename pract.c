#include<stdio.h>
int main()
{   int a=2,b=2,x,y;
	x=4*(++a *2+3);
	y=4*(b++ *2+3);
	printf("%d %d %d  %d ",a,b,x,y);
	return 0;
}

