#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50],str2[50];
	int n,i,j;
	puts("enter the string:");
	gets(str1);
	strcpy(str2,str1);
	n=strlen(str1);
	if(n%2){strcpy(str1,str2+n/2+1);
		strncat(str1,str2+n/2,1);
		strncat(str1,str2,n/2);
	}
	else {strcpy(str1,str2+n/2);		
	strncat(str1,str2,n/2);}
	puts(str1);
}
