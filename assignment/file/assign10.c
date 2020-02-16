//impliment wc command without using array
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc,char **argv)
{
	if(argc!=2)
	{
		puts("ERROR:provide proper input");
		exit(0);
	}
	FILE *fp;
	char ch;
	int cnt=0,flag=0;
	fp=fopen(argv[1],"r");
	if(fp==NULL)
	{
		puts("ERROR:no file found");
		exit(0);
	}
	while((ch=fgetc(fp))!=EOF)
	{
		if((isalpha(ch))&&(flag==0))
		{
			cnt++;
			flag=1;
		}
		if((ch==10)||(ch==' ')||(ch==',')||(ch=='.'))
			flag=0;
	}
	printf("wc=%d\n",cnt);
}
