//implimenting grep command.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char **argv)
{
	if(argc!=3)
	{
		puts("ERROR:provide proper command");
		exit(0);
	}
	FILE *fp;
	char ch,buf[100],*ptr;
	fp=fopen(argv[2],"r");
	if(fp==NULL)
	{
		puts("ERROR:no file found");
		exit(0);
	}
	while(fgets(buf,100,fp))
	{
		ptr=strstr(buf,argv[1]);
		if(ptr!=NULL)printf("%s",buf);
	}
	fclose(fp);
}
