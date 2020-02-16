#include<stdio.h>
int main()
{
	int v=10;
	int *const ptr=&v;
	++*ptr;
	printf("%d\n",v);
}
