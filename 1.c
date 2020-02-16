#include<stdio.h>
int g=10;
static int s=20;
void f1()
{
	g++;
	s--;
}
void f2()
{
	g++;
	s--;
}
main()
{
	f1();
	f3();
	f2();
	printf("%d %d\n",g,s);
}

