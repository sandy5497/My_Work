#include<stdio.h>
 int main()
{

extern int g;
	g+=100;
	f();
	printf("%d\n",g);
}
void f(void)
{
	extern int g;
	printf("%d\n",g);
}
int g=200;
