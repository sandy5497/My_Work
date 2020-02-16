#include<stdio.h>
char *mystrchr(const char *s1,int ch);
int main()
{
	char str1[50];char ch;
	puts("enter string");
	gets(str1);
	puts("enter character for search in string");
	scanf("%c",&ch);
	char *ptr;
	ptr=mystrchr(str1,ch);
	if(ptr==NULL){puts("character not found");
			return 0;
	}
	else puts(ptr);
	return 0;
}
char *mystrchr(const char *s1,int ch)
{
	int i;
	for(i=0;s1[i];i++)
		if(s1[i]==ch)return (char *)s1+i;
	return NULL;
}

