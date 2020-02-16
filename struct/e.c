#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	p=realloc(p,sizeof(int));
	printf("%p\n",p);
	free(p);
	printf("%p\n",p);

}
