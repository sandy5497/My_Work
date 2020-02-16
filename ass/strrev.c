#include<stdio.h>
#include<string.h>
int main()
{
	char str[30],ptr;
	int i,j;
	puts("enter string");
	gets(str);
	ptr=str;
	j=strlen(str);
	for(i=0,j--;i<j;i++,j--)
	{
		ptr=str[i];
		str[i]=str[j];
		str[j]=ptr;
	}
	puts(str);
}
