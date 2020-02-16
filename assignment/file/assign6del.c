#include<stdio.h>
#include<stdlib.h>
#include<string.h>

static int s;
static int cnt;

void *delete(char **p,char *str)
{
	int i,j,n=atoi(str);
	if((n>cnt)||(n<=0)){printf("ERROR:no of line only upto %d\n",cnt);exit(0);};
	memmove(p+n-1,p+n,sizeof(char *)*(cnt-n));
	cnt--;
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
	if(argc!=3){puts("ERROR: no argument exceed");exit(0);}

	char  ch ,**buff=0;
	int i,j;
	FILE *fp;
	fp=fopen(argv[2],"r");
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
	buff=delete(buff,argv[1]);
	for(i=0;i<cnt;i++)
		puts(buff[i]);
	fp=fopen(argv[2],"w");
	
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
