////////////////////ItoA..
#include<stdio.h>
#include<string.h>
#include<ctype.h>

char * strrev(char *ptr)
{	
	int i,n,j;
	char num[100];
	strcpy(num,ptr);
	n=strlen(ptr);
	for(i=0,j=n-1;i<n;i++,j--)
		ptr[i]=num[j];
	ptr[i]=0;
	return ptr;
}
char * intToaschi(unsigned int n,char *str)
{
	int i;
	for(i=0;n;i++,n/=10)
		str[i]=(n%10)+48;
	str[i]=0;
//	puts(str);
	str=strrev(str);
//	puts(str);
	return str;
}
int main()
{
	unsigned int num;
	char str[100];	
	char *ptr;
	printf("enter the number");
	scanf("%d",&num);
	ptr=intToaschi(num,str);
	puts(ptr);
	return 0;
}
