#include<stdio.h>
#include<string.h>

int main()
{
	char str1[]="sandeep";
	char str2[]="sandip";
	char *ptr=str1;
	if(strncmp(str1,str2,5)==0)
		
	puts(ptr);
	puts(str2);

}
