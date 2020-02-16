#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *getstring(void)
{
	char *p=NULL;
	int i=0;
	do{
		p=realloc(p,(i+1));
		p[i]=getchar();
	}while(p[i++]!='\n');
	p[i-1]=0;
	return p;
}
int main()
{
	char *str=NULL;char *sub=NULL;char *ptr=NULL;
	printf("enter the string\n");
	str=getstring();
	printf("enter the sub string to find\n");
	sub=getstring();
	puts(str);
	puts(sub);
	if(ptr=strstr(str,sub))
	{
		memmove(ptr,ptr+strlen(sub)+1,strlen(ptr+strlen(sub)+1)+1);
	}
	else printf("substring not found");
	puts(str);
	puts(sub);
}
	

