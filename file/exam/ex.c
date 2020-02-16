#include"my.h"
/*
char *getstring(FILE *fp)
{
	char *p=NULL;
	int i=0;
	do{
		p=realloc(p,i+1);
		p[i]=fgetc(fp);
	}while(p[i++]!='\n');
	p=realloc(p,i+1);
	p[i]=0;
	return p;
}*/

int main()
{
	FILE *fp,*fp2;
	char ch,temp[100],**mybuf=NULL;int i,cnt=0;
	fp=fopen("file","r");
	if(fp==NULL)
		exit(0);
	fp2=fopen("opfile","w");	
/*	fseek(fp,0,2);
	cnt=ftell(fp);
	rewind(fp);
	mybuf=calloc(1,cnt+1);
	fread(mybuf,1,cnt,fp);*/
	
		while(fgets(temp,100,fp)!=NULL)
	{
		temp[strlen(temp)-1]=0;
		fputs(temp,fp);
		fputc(10,fp);

		//mybuf=realloc(mybuf,(cnt+1)*sizeof( char* ));
		//mybuf[cnt++]=temp;
	}
	fclose(fp);
/*	for(i=0;i<cnt;i++)
		printf("%s\n",mybuf[i]);
		fputs(mybuf[i],fp);
		
	
	fclose(fp);
	free(mybuf);*/
}


