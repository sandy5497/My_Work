#include<stdio.h>
char * strstr(char *s1,char *s2)
{
	int i,j,c;
	for(i=0;s1[i];i++)
	{
		c=i;
		for(j=0;s2[j];j++,c++)
		{
			if(s1[c]!=s2[j])break;
		}
		if(s2[j]==NULL)
				 return (char *)(s1+i);
	
	}
			 return NULL;

}

int main()
{
	char str1[50],str2[50];
	char *ptr=str1;
	gets(str1);
	gets(str2);
	ptr=strstr(str1,str2);
	if(ptr==NULL){
			puts("string not found");
			return 0;
			}
	else puts(ptr);
	return 0;
}
