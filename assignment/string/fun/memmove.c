#include<stdio.h>
#include<string.h>
char * mymemmove(char *ptr1,char *ptr2,int n);
int main()
{
	char str1[50],str2[50];
	puts("enter str1");
	gets(str1);
	puts("enter str2");
	gets(str2);
	char *p=mymemmove(str1,str2,strlen(str2));
	puts(p);
	return 0;
}
char *mymemmove(char *ptr1,char *ptr2,int n)
{
	int i;
	char temp[50];
	for(i=0;i<n;i++)
		temp[i]=ptr2[i];
	temp[i]=0;
	for(i=0;i<n;i++)
		ptr1[i]=temp[i];
	ptr1[i]=0;
	return ptr1;
}
