#include<stdio.h>
int g;
void f1(void)
{
	static int s=10;
	s++;
	s++;
	g+=10;
}
void f2(void)
{
	g+=100;
}
int main()
{
	if(g==0)
	{
		f1();
		f2();
		printf("%d\n",g);
		printf("%d",g);
	}
}
int g=200;

