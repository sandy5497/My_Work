#include<stdio.h>
#include<string.h>

int main()
{
	char str1[20],str2[20];
	int count=0,i,j,k=0,l;
	puts("enter string");
	gets(str1);
	for(i=0;str1[i];i++)
	{
		for(j=0;str1[j];j++)
		{
			if(str1[i]!=str1[j])continue;
			str2[k++]=str[i];
			for(l=0;str2[l];k++)
				if(
