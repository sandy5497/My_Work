#include<stdio.h>
#include<string.h>
int main()
	{
		char str1[]="deep";
		char str2[]={'d','e','e','p'};
		if(strcmp(str1,str2)==0)
			printf("same\n");
		else puts("different:");
		return 0;
	}
