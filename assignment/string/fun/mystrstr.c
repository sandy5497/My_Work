#include<stdio.h>
char *mystrstr(char *s1,const char *s2)
{
	int i,j,k;
	for(i=0;s1[i];i++)
	{
		k=i;
		for(j=0;s2[j];j++,k++)
			{
				if(s1[k]!=s2[j])break;
			}
		if(s2[j]==NULL) return s1+i;
	}
	return NULL;
}
int main()
{
	char s1[50],s2[50];
	puts("enter string");
	gets(s1);
	puts("enter string");
	gets(s2);
	char *ptr;
	ptr=mystrstr(s1,s2);
	if(ptr==NULL){
		puts("not found");return 0;
	}
	else puts(ptr);
			return 0;
			}
