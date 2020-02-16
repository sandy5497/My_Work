#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *getstring(FILE *fp)
{
	char *p=NULL;int i=0;
	do{
		p=realloc(p,(i+1));
		p[i]=fgetc(fp);
	}while(p[i++]!='\n');
	p=realloc(p,(i+1));
	p[i]=0;
	return p;
}

int main(int argc,char **argv)
{
	if(argc!=2)
	{
		puts("inputs only be the file");
		exit(0);
	}
	FILE *fp;
	char ch,**mybuf=NULL,*temp=NULL;int cnt=0,i,j;
	fp=fopen(argv[1],"r");
	if(fp==NULL)
	{
		puts("ERROR:file not found");
		exit(0);
	}
	while(fgetc(fp)!=EOF)
	{
		fseek(fp,-1,1);
		mybuf=realloc(mybuf,(cnt+1)*sizeof(char *));
		mybuf[cnt++]=getstring(fp);
	}
	fclose(fp);
	for(i=cnt-1;i>0;i--)
		for(j=0;j<i;j++)
		{
			if((strlen(mybuf[j]))>(strlen(mybuf[j+1])))
			{
				temp=realloc(temp,strlen(mybuf[j])+1);
				memmove(temp,mybuf+j,sizeof(char *));
				memmove(mybuf+j,mybuf+j+1,sizeof(char *));
				memmove(mybuf+j+1,temp,sizeof(char *));
			}
		}
	i=0;
	fp=fopen(argv[1],"w");
	for(i=0;i<cnt;i++)
		fputs(mybuf[i],fp);
	fclose(fp);
}

	

