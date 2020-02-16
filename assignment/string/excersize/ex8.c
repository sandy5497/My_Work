#include<stdio.h>
int main()
{
	char *p="devanshi";
	char arr[]="devanshi";
	//*(p+2)='b';
	arr[2]='b';
	puts(arr);
	puts(p);
	return 0;
}
