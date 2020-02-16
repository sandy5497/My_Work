#include<stdio.h>
const int b=50;
int main()
{
	const int a=20;
	void *ptr;
	ptr=&a;
	printf("%d\n",++*(int *)ptr);
	ptr=&b;
	printf("%d\n",++*(int *)ptr);


}

