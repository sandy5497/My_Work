#include<stdio.h>
int main()
{
	char str[]="Lucknow";
	char *p=str;
	p=p+3;
	p[3]='t';
	puts(str);
	puts(p);
	return 0;
}
