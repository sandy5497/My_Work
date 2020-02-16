#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char **argv)
{
	if(argc!=2)
	{
		puts("ERROR:input exceed");
		exit(0);
	}
	FILE *fp;
	char *buf,*ptr,*endPtr,filename[20];
	int size;
	fp=fopen(argv[1],"r");
	if(fp==NULL)
	{
		puts("ERROR:file not found");
		exit(0);
	}
	fseek(fp,0,2);
	size=ftell(fp)+1;
	rewind(fp);
	buf=calloc(1,size);
	fread(buf,1,size,fp);
	fclose(fp);
	puts(buf);
	ptr=buf;
	while(ptr=strchr(ptr,'/'))
	{
		if(ptr[1]=='/')
		{
			endPtr=strchr(ptr+2,'\n');
			memset(ptr,' ',endPtr-ptr);
		}
		else	if(ptr[1]=='*')
		{
			endPtr=strstr(ptr+2,"*/");
			memset(ptr,' ',(endPtr-ptr)+1);
		}
		
	}
	strcpy(filename,argv[1]);
	filename[strlen(filename)-1]='i';
	fp=fopen(filename,"w");
	fwrite(buf,1,size,fp);
	fclose(fp);

}




