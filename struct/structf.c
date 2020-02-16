#include<stdio.h>
	struct emp
	{
		char name[20];
	struct emp *next;
	};
int main()
{
	struct emp *p,*q;;
	printf("%lu %lu\n",sizeof(*p),sizeof(*q));

}






























