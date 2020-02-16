#include<stdio.h>
#include<string.h>
int main()
{ char str1[50],str2[50];
	int n,pos;
	puts("enter 1st string");
	gets(str1);
	puts("enter 2nd string");
	gets(str2);
	puts("enter the position:");
lable:	scanf("%d",&pos);
	n=strlen(str1);
	if((pos<0)||(pos>n)){
				puts("invalid position");
				goto lable;
			}
	memmove(str1+pos+strlen(str2),str1+pos,strlen(str1+pos)+1);
	strncpy(str1+pos,str2,strlen(str2));
	puts(str1);
}
