#include<stdio.h>
#include<stdlib.h>
#include<string.h>

static int s;
static int cnt;

void *sort(char **p)
{
	int i,j;char *temp;
	temp=malloc(100);
	for(i=cnt-1;i>=1;i--)
		for(j=0;j<i;j++)
		{
			if(strcmp(p[j],p[j+1])>0)
			{
				memmove(temp,p+j,sizeof(char *));
				memmove(p+j,p+j+1,sizeof(char *));
				memmove(p+j+1,temp,sizeof(char *));
			}
		}
	return p;
}

char * getstring(FILE *fp)
{
	char *p=0;
	int i=0;
//	fseek(fp,s,0);
	do{
		p=realloc(p,(i+1));
		p[i]=fgetc(fp);
	}while(p[i++]!='\n');
	p[i-1]=0;
//	s=ftell(fp);
	return p;
}
int main(int argc,char **argv)
{
	char  ch ,**buff=0;
	int i,j;
	FILE *fp;
	fp=fopen(argv[1],"r");
	if(fp==NULL)
	{
		puts("ERROR:no file found");
		exit(0);
	}
	while((ch=fgetc(fp))!=EOF)
	{
		fseek(fp,-1,1);
		buff=realloc(buff,(cnt+1)*sizeof( char *));
		buff[cnt]=getstring(fp);
		cnt++;
//		fseek(fp,s,0);
	}
	fclose(fp);
//	for(i=0;i<cnt;i++)
//		puts(buff[i]);
	buff=sort(buff);
	for(i=0;i<cnt;i++)
		puts(buff[i]);
	fp=fopen(argv[1],"w");
	
		for(i=0;i<cnt;i++)
		{
			for(j=0;buff[i][j];j++)
			{
				ch=buff[i][j];
				fputc(ch,fp);
			}
		ch=10;
		fputc(ch,fp);
		}

	
	for(i=0;i<cnt;i++)
		free(buff[i]);
	free(buff);
}
