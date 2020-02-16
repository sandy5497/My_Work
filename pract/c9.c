#include<stdio.h>
int main()
{
	int a=257;
	int *p=&a;
	*(char*)(p+1)=11+*(char*)p;
	printf("%d\n",a);
}
