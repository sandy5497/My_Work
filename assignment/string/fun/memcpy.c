#include<stdio.h>
#include<string.h>
char * mymemcpy(char *ptr1,char *ptr2,int n);
int main()
{
	char str1[50],str2[50];
	puts("enter str1");
	gets(str1);
	puts("enter str2");
	gets(str2);
	char *p=mymemcpy(str1,str2,strlen(str2));
	puts(p);
	return 0;
}
char *mymemcpy(char *ptr1,char *ptr2,int n)
{
	int i;
	for(i=0;i<n;i++)
		ptr1[i]=ptr2[i];
	ptr1[i]=0;
	return ptr1;
}
