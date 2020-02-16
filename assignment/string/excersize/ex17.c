#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]="Parul",str2[]="devanshi";
	if(strlen(str1)-strlen(str2)>=0)
		puts(str1);
	else puts(str2);
	return 0;
}
