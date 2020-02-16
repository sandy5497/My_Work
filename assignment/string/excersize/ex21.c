#include<stdio.h>
#include<string.h>

char *combine(char *arr1,char *arr2)
{
	char str[80];
	strcpy(str,arr1);
	strcat(str,arr2);
	return str;
}
int main()
{
	char str1[20],str2[20];
       char *p;
	strcpy(str1,"Suresh ");
 	strcpy(str2,"Kumar");
	p=combine(str1,str2);
	puts(p);
	return 0;
}	
