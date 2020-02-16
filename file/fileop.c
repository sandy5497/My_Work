#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char filename[40],ch;
	puts("enter file name");
	scanf("%s",filename);
	fp=fopen(filename,"r");
	if(fp==NULL){puts("ERROR:no file found");
			exit(0);
	}
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	};
	fclose(fp);
}
