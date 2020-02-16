#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *getstring(void)
{
	int i=0;
	char *p=0;
	do{
		p=realloc(p,i+1);
		p[i]=getchar();
	}
	while(p[i++]!=10);
	p[i-1]=0;
	return p;
}
int main()
{
	char *str;
	puts("enter a string:");
	str=getstring();
	puts(str);
	printf("len:%lu\n",strlen(str));
			}

