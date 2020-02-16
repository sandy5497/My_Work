#include<stdio.h>
int  main()
{   char a=30,b=5;
	char *p=&a,*q=&b;
	printf("%d\n",*(p)/(*(q)));

	return 0;
}
