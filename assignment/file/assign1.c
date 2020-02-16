//implement wc command.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char **argv)
{
	if(argc!=2){puts("ERROR : enter filename only");exit(0);}
		FILE *fp;
		char ch;int line=0,word=0,character=0;
		fp=fopen(argv[1],"r");
		if(fp==NULL){puts("file not found");exit(0);}
		while((ch=fgetc(fp))!=EOF)
		{
		switch(ch)
			{
				case '\n':++line;
				case ' ':++word;break;//while(ch=fgetc(fp)){if(ch==32)continue;goto lable;}
				default :++character;
			}
		}
		printf("%d\t%d\t%d\n",word,line,character);
}
