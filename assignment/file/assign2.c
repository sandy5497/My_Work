//to display specifc line provide thhrough command line argument
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void strtoint(char *p,int *n1,int *n2)
{
	int i,n=0,found;
	for(i=0;p[i];i++){if(p[i]='-');found=1;}

		if(found==0)n=n*10+(p[i]-48);i++;
				*n1=n;
				*n2=0;
				 if(found==1)
				{
				while(p[i]!='-'){n=n*10+(p[i]-48);i++;}
				*n1=n;
				n=0;
				i++;
				while(p[i]){n=n*10+(p[i]-48);i++;}
				*n2=n;
				}
				}


int main(int argc,char **argv)
{
	if(argc!=3){puts("ERROR: no. of argument is wrong");exit(0);}
	char str[10];strcpy(str,argv[1]);
	int n1,n2,n=0;
	strtoint(str,&n1,&n2);
	char ch;
	FILE *fp;
	fp=fopen(argv[2],"r");
		if(fp==NULL){puts("ERROR : file not found");
			exit(0);
		}
	while((ch=fgetc(fp))!=EOF)
	{
		if(ch=='\n')n++;
		if(n==(n1-1))
		{ 
			if(n2==0){
					while(n1==n)
					{ while((ch=fgetc(fp))!=EOF)
						{if(ch=='\n')n++;
						if(ch==EOF)exit(0);
						printf("%c",ch);
					}}
					exit(0);
			}
		else
		{
					while(n2==n)
					{ while((ch=fgetc(fp))!=EOF)
						{if(ch==EOF)exit(0);
						if(ch=='\n')n++;
						printf("%c",ch);}
					}
					exit(0);
		}}
		else continue;
	       //	{ puts("ERROR:line should be within range");
		//	exit(0);
		//}
		}
	}




