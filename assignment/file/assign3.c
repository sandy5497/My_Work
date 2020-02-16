//remove extra space
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void extraspace(char *mybuf)
{
	int i;
	for(i=0;mybuf[i];i++)
		if(mybuf[i]==' ')
		{
			if(mybuf[i+1]==' ')
			{		memmove(mybuf+i,mybuf+i+1,strlen(mybuf+i+1)+1);
			i--;
			}
		}
}
void extraline(char *mybuf)
{
	int i;
	for(i=0;mybuf[i];i++)
	{
		if(mybuf[i]=='\n')
		{
			if(mybuf[i+1]=='\n')
			{
				memmove(mybuf+i,mybuf+i+1,strlen(mybuf+i+1)+1);
       			i--;
			}
		}
	}
}
int main(int argc,char **argv)
{
	char ch,*mybuf=NULL;int i=0;
	FILE *fp;
	fp=fopen(argv[1],"r");
	if(fp==NULL){puts("ERROR:no file found");
		exit(0);}
	do{
		mybuf=realloc(mybuf,(i+1));
		mybuf[i]=fgetc(fp);
	}while((mybuf[i++]!=EOF));
			mybuf[i-1]=0;
			fclose(fp);
	extraspace(mybuf);
	extraline(mybuf);
	for(i=0;mybuf[i];i++)
		putchar(mybuf[i]);
	
	fp=fopen(argv[1],"w");
	for(i=0;mybuf[i];i++)
	{
		ch=mybuf[i];
		fputc(ch,fp);
	}
	//	ch=EOF;
	//	fputc(ch,fp);
	fclose(fp);

}
