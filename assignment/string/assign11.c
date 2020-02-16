//WAP to add 2 integers if non-numeric character is supplied then proper error message should display
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int checkint(char ptr[])
{
	int i;
	for(i=0;ptr[i];i++)
	{	if(!(isdigit(ptr[i]))){puts("invalid input,enter only integer val");
					return 1;
					}
	}
	return 0;
}

int strtoint(char ptr[])
{ 
	int i,n=0;
	for(i=0;ptr[i];i++)
				n=n*10+(ptr[i]-48);
	return n;
}
int main()
{
	char str1[10],str2[10];
	int i,num1,num2;
lable:	puts("enter inetger val1:");
	gets(str1);
	i=checkint(str1);
	if(i)goto lable;
//	puts(str1);

lable2:	puts("enter integer val2:");
	gets(str2);
	i=checkint(str2);
	if(i)goto lable2;	
//	puts(str2);
	
	num1=strtoint(str1);
//	printf("%d\n",num1);

	num2=strtoint(str2);
//	printf("%d\n",num2);

	printf("addition=%d\n",num1+num2);
	return 0;
}
