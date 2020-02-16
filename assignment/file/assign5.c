//replace occurance of string with reverse of itself
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *strrev(char *ptr)
{
	static int n,i;
	static char rev[20];
	if (i>0)return rev;
	n=strlen(ptr);
	for(i=0,--n;n>=0;--n,i++)
	{
		rev[i]=ptr[n];
	}
	rev[i]=0;
	return rev;
}

void traverse(char *mybuf,char *str)
{
	int i;
	char *ptr2;
	ptr2=mybuf;
	while(ptr2=strstr(ptr2,str))
	{
		strncpy(ptr2,strrev(str),strlen(str));	
		ptr2+=strlen(str);
	}
	
}
int main(int argc,char **argv)
{
	if(argc!=3){puts("ERROR:no. of argument exceed ");
		exit(0);
	}
	int i=0;
	char ch,*mybuf=NULL;
	FILE *fp;
	fp=fopen(argv[2],"r");
	if(fp==NULL){puts("ERROR:no file found");
		exit(0);
	}
	do{
		mybuf=realloc(mybuf,(i+1));
		mybuf[i]=fgetc(fp);
	}while(mybuf[i++]!=EOF);
	mybuf[i-1]=0;
	traverse(mybuf,argv[1]);
	fclose(fp);
	fp=fopen(argv[2],"w");
	for(i=0;mybuf[i];i++)
	{
		ch=mybuf[i];
		fputc(ch,fp);
	}
	fclose(fp);

}
