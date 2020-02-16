#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char **argv)
{
	if(argc!=4)
	{
		puts("ERROR:invalid input");
		exit(0);
	}
	FILE *fp;int j,i=0,num=atoi(argv[2]),found=0,cnt1,cnt2,nl=0;
	char ch,*buf1=0,*buf2=0,ptr;
	fp=fopen(argv[1],"r");
	if(fp==NULL)
	{
		puts("ERROR:file not found");
		exit(0);
	}
	fseek(fp,0,2);
	cnt1=ftell(fp);
	rewind(fp);
	buf1=realloc(buf1,(cnt1*sizeof(char)+1));
	while((ch=fgetc(fp))!=EOF)
		buf1[i++]=ch;
	fputc(0,fp);
	fclose(fp);
//	puts(buf1);
	i=0;
	fp=fopen(argv[3],"r");
	if(fp==NULL)
	{
		puts("ERROR:file not found");
		exit(0);
	}
	fseek(fp,0,2);
	cnt2=ftell(fp);
	rewind(fp);
	//buf2=realloc(buf2,((cnt1+cnt2)*sizeof(char))+50);
	buf2=calloc(1,cnt2+1);
	while((ch=fgetc(fp))!=EOF)
	{if(ch==10)nl++;
	buf2[i++]=ch;}
	buf2[i]=0;
	buf2=realloc(buf2,cnt1+cnt2+1);
//	puts(buf2);
	if((num>nl)||(num<0))
	{
		puts("ERROR:provided exceed no. of line");
		printf("enter from 1 to %d\n",nl);
		exit(0);
	}
	for(i=0,j=0;buf2[i];i++)
	{
		if(buf2[i]==10)found++;
		if(found==(num-1))
		{
			buf2[i++]=10;
			memmove(buf2+i+strlen(buf1),buf2+i,strlen(buf1));
			for(j=0;buf1[j];i++,j++)
				buf2[i]=buf1[j];
			found++;
		}
	}
//	puts(buf2);
	i=0;
	fp=fopen(argv[3],"w");
	while(buf2[i])
		fputc(buf2[i++],fp);
	fclose(fp);
}










