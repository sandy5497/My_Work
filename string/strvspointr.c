#include<stdio.h>
#include<string.h>
int main()
{ 	
	char str[50];
	char *ptr="ganpat";
	puts("enter 1st string");
	//scanf("%[^\n]%s",str);
	gets(str);
//	puts("enter 2nd string");
//	scanf("%[^\n]%s",str);
//	gets(ptr);
//	printf("%u  %u\n",str,ptr);
//	printf("%u  %u\n",&str,&ptr);
	printf("%s  %s\n",str,ptr);
	*str=*ptr;
	printf("%s  %s\n",str,ptr);
	*ptr=str;
	printf("%s %s\n",str,*ptr);

	printf("%u  %u\n",str,ptr);
	printf("%u  %u\n",&str,&ptr);

} 
