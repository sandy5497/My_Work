//insert the string occuarance with the other string
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char **argv)
{

	if(argc!=4)
	{
		puts("ERROr:improper input");
		exit(0);
	}
	FILE *fp;
	char *buf=0,*ptr=0,ch;
	int cnt1,dff,l1,l2;
	fp=fopen(argv[3],"r");
	if(fp==NULL)
	{
		puts("ERROR:file not found");
		exit(0);
	}
	fseek(fp,0,2);
	cnt1=ftell(fp);
	rewind(fp);
	buf=calloc(1,cnt1);
	fread(buf,1,cnt1,fp);
	fclose(fp);
	l1=strlen(argv[1]);
	l2=strlen(argv[2]);
	dff=l2-l1;
	for(ptr=buf;ptr=strstr(ptr,argv[1]);)
	{
		buf=realloc(buf,cnt1+dff);
		memmove(ptr+l2,ptr+l1,strlen(ptr+l1)+1);
		memmove(ptr,argv[2],l2);
		cnt1+=dff;
	}
	puts(buf);
	fp=fopen(argv[3],"w");
	for(int i=0;buf[i];i++)
		fputc(buf[i],fp);
	fclose(fp);
}


