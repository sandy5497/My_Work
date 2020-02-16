#include<stdio.h>
int main()
{
	char str[]="painstaking";
	char *p=str+5;
	//puts(p);
	printf("%c\n",*p);
	puts(str);
	return 0;
}
