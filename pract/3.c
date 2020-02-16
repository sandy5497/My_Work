#include<stdio.h>
int main()
{
	int x=677;
	char *ptr;
	ptr=(char *)&x;
	printf("%d ",*ptr);
	return 0;
}
