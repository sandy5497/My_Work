#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
 	int i;       
	char str[50];
	puts("enter string");
	gets(str);
	for( i=0;str[i];i++){
				if(isalpha(str[i])){str[i]=toupper(str[i]);break;}
				}
	i=strlen(str);
	for(;!(isalpha(str[i]));i--);
	str[i]=toupper(str[i]);
	puts(str);
}
	
