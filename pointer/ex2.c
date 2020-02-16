#include<stdio.h>
int main()
{ int a=36,b=36,*ptr;
	ptr=&a;
	printf("%u..%u..%u",*&ptr,&*ptr,&a);
}

