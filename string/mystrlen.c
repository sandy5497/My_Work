#include<stdio.h>
unsigned int mystrlen(char *ptr)
{  int cnt=0;
	while(*ptr){cnt++;ptr++;}
				
	return cnt;
}
int main()

{
	char str[50];
	puts("enter the string");
	gets(str);
	printf("%d\n",mystrlen(str));
	return 0;
}

