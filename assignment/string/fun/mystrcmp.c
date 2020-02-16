#include<stdio.h>
int mystrcmp( char *p, char *q)
{
	while(*p==*q)
	{
		if(*p==0)
			return 0;
		p++,q++;
	}
	return (*p-*q);
}
int main()
{
	char s1[50];
	char s2[50];
	puts("enter string");
	gets(s1);
	puts("enter string");

	gets(s2);
	char *ptr;
if(mystrcmp(s1,s2)==0)puts("same");puts("diff");
//	printf("%d\n",*ptr)
}
