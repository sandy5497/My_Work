#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]="Parul";
	char str2[10];
	strcpy(str2,str1);
	if(str1==str2)puts("same");
	else puts("different");
	return 0;
}
