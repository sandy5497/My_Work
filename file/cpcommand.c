#include<stdio.h>
#include<stdlib.h>
int main(int argc,char **argv)
{
	if(argc!=3){puts("ERROR : extra arguments");exit(0);}
	FILE *fp1,*fp2;
	char ch;
	fp1=fopen(argv[1],"r");
	if(fp1==NULL){
		puts("ERROR : no file found");
		exit(0);
	}
	fp2=fopen(argv[2],"w");
	while((ch=fgetc(fp1))!=EOF)
	fputc(ch,fp2);
	fclose(fp1);
	fclose(fp2);
}
