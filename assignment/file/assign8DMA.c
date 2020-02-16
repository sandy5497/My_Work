//grep using character by character
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

char *getstring(FILE *fp)
{
	char *p=0;
	int i=0;
	do
	{
		p=realloc(p,(i+1));
		p[i]=fgetc(fp);

	}
	while(p[i++]!=10);
	p=realloc(p,(i+1));
	p[i]=0;
	return p;
}
		

int main(int argc,char **argv)
{
	if(argc!=3)
	{
		puts("ERROR:provide proper argument");
		exit(0);
	}
	FILE *fp;
	char ch,*linebuf;
	fp=fopen(argv[2],"r");
	if(fp==NULL)
	{
		puts("ERROR:file not found");
		exit(0);
	}
	while((ch=fgetc(fp))!=EOF)
	{
		fseek(fp,-1,1);
		linebuf=getstring(fp);
		if(strstr(linebuf,argv[1]))
				printf("%s",linebuf);
	}
	free(linebuf);
	fclose(fp);
	return 0;
}
