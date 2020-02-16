#include<stdio.h>
#include<string.h>
int main()
{ char str1[50],str2[50],str3[50];
	int pos,n;
	puts("enter 1st string");
	gets(str1);
	puts("enter 2nd string");
	gets(str2);
lable:	puts("enter position");
	scanf("%d",&pos);
	n=strlen(str1);
	if((pos<0)||(pos>n)){puts("invalid position");
				goto lable;}
	strcpy(str3,str1+pos);
	strcpy(str1+pos,str2);
	strcat(str1,str3);
	puts(str1);
}
