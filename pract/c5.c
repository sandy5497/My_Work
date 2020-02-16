#include<stdio.h>
union a
{
	int a;
	char c[4]
	};

int main()
{
	printf("%x\n",a.c[0]);
}
