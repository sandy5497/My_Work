#include<stdio.h>
#include<stdio.h>
#define CUBE(x) (x*x*x)
main()
{
	int a,b=3;
	a=CUBE(b++);
	printf("%d %d",a,b);
}
