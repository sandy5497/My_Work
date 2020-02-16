#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *getstring(FILE *fp)
{
	char *p=0;
	int i=0;
	do{
		p=realloc(p,1+i);
		p[i]=fgetc(fp);
	}while(p[i++]!=10);
	
	p[i-1]=0;
	return p;
}

void rev(char *p)
{
	int i,j;char ch;
	j=strlen(p);
	for(i=0,j--;i<j;i++,j--)
	{
		ch=p[i];
		p[i]=p[j];
		p[j]=ch;
	}
	p[strlen(p)]=0;
	
}


int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		puts("invalid argument");
		exit(0);
	}
	FILE *fp;
	char **mybuff=NULL,*p=NULL;
	int cnt=0,i,x,y,len,j;
	fp=fopen(argv[1],"r");
	if(fp==NULL)
	{
		puts("file not found");
		exit(0);
	}
	while(fgetc(fp)!=EOF)
	{
		fseek(fp,-1,1);
		mybuff=realloc(mybuff,(1+cnt)*sizeof(char *));
		mybuff[cnt++]=getstring(fp);
				
	}
	fclose(fp);
	for(i=0;i<cnt;i++)
		puts(mybuff[i]);
	char t;
	for(i=0;i<cnt;i++)
	{
		rev(mybuff[i]);
		p=mybuff[i];
		x=0;
		len=strlen(p);
		for(j=0;j<=len;j++)
		{
			if((p[j]==32)||(p[j]==10)||(p[j]==0))
			{
				for(x,y=j-1;y>x;y--,x++)
				{
					t=p[x];
					p[x]=p[y];
					p[y]=t;
				}
				x=j+1;
			}
		}
		p=NULL;
	puts(mybuff[i]);
	}

}
		


		
