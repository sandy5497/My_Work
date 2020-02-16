#include<stdio.h>
char *mystrrchr(const char *s1,int ch)
{
	int i,j;
	for(i=0;s1[i]!=NULL;i++);
	for(j=i-1;j>=0;j--)
		if(s1[j]==ch)return  (s1+j);
	return NULL;
}

int main()
{
	char str1[50];char ch;
	char *ptr;
	puts("enter string");
	gets(str1);
	puts("enter char to search instring");
	scanf("%c",&ch);
	ptr=mystrrchr(str1,ch);
	if(ptr==NULL){puts("char not found");
			return 0;}
	else puts(ptr);
	return 0;
}
