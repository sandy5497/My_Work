//count the no. of occurance of a string in file
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void traverse(char *mybuf,char *str)
{
	int i,count=0;
	char *ptr2;
	ptr2=mybuf;
	while(ptr2=strstr(ptr2,str))
	{
		count++;
		ptr2+=strlen(str);
	}
	printf("no. of occurance in file is=%d\n",count);
}
int main(int argc,char **argv)
{
	if(argc!=3){puts("ERROR:no. of argument exceed ");
		exit(0);
	}
	int i=0;
	char *mybuf=NULL;
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
}
