#include<string.h>
#include<stdio.h>
int main()
	{
		char str1[15]="good";
		char str2[]="evening";
		strcpy(str1+strlen(str1),str2);
		puts(str1);
		return 0;
	}
