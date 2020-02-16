#include<stdio.h>
int main()
{
	int i=5;
	int *p=&i;
	printf("%u %u\n",i,p);
	++*p++;
	printf("%d %d\n",i,*p);
}
