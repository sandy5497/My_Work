#include<stdio.h>
#include<string.h>
int main()
{
	char str[20]="shivam";
	puts("enter string");
	gets(str);
	int i=3;
	memmove(str+i+3,str+i,strlen(str+i)+1);
	memset(str+i,'*',i);
	puts(str);
}
