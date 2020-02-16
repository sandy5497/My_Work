#include<stdio.h>
void func(struct { int i;char c;} v);
int main()
{
	struct tag
	{
		int i;
		char c;
	} var={2,'s'};
	func(var);
}
void func(struct {int i;char c;} v)
{
	printf("%d %c\n",v.i,v.c);
}
