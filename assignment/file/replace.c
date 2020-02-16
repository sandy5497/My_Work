#include<stdio.h>
#include<stdlib.h>
int main(int argc,char **argv)
{
	if(argc!=3)
		{
			puts("error:");
			return 0;
		}
	char *p=NULL,ch,*a=NULL,s[50];
	FILE *fp;
	int i,j,k,m=1;
	printf("enter the string to be printeed");
	scanf("%s",s);
	puts(s);
	fp=fopen(argv[1],"r");
	if(fp==NULL)
		{
			puts("file not found");
			return 0;
		}
	for(i=0;(ch=fgetc(fp))!=-1;i++)
	{
		p=realloc(p,i+1);
		p[i]=ch;
	}
	a=realloc(a,i);
	p[i]=0;
	puts(p);
	for(i=0,j=0,k=0;p[i];i++)
	{
		if(m!=atoi(argv[2]))
		{
			a[j++]=p[i];
		}
		else
		{
			while(s[k]!='\0')
			{
				a[j]=s[k];
				j++;k++;
			}
			a[j++]=10;
			while(p[i]!='\n')i++;
		}
		if(p[i]=='\n')m++;
	}
	a[j]=0;
	puts(p);
	puts(a);

}
