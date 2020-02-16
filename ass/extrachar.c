#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],*ptr,*temp;
	puts("enter string");
	gets(str);
	for(ptr=str;*ptr;ptr++)
	{
		for(temp=ptr+1;temp=strchr(temp,*ptr);)
			memmove(temp,temp+1,strlen(temp+1)+1);
	}
	puts(str);
}
