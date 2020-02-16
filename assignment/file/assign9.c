//WAP to hide all ocurance of a string in a file
#include<stdlib.h>
#include<string.h>
#include<stdio.h>

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
		puts("ERROR:provide proper arguments");
		exit(0);
	}
	FILE *fp;
	char ch,*linebuf,*fnd;
	fp=fopen(argv[2],"r+");
	if(fp==NULL)
	{
		puts("ERROR:file not found");
		exit(0);
	}
	while((ch=fgetc(fp))!=EOF)
	{
		fseek(fp,-1,1);
		linebuf=getstring(fp);
		for(fnd=linebuf;fnd=strstr(fnd,argv[1]);fnd+=strlen(argv[1]))
		
			memset(fnd,'*',strlen(argv[1]));
		
		fseek(fp,-1*strlen(linebuf),1);
		fputs(linebuf,fp);
		free(linebuf);
	}
	fclose(fp);
	return 0;
}


		

