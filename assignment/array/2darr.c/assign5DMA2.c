#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cnt=0;

void printmenu(void)
{
	puts("********************MENU********************");
	puts("--------------------------------------------");
	puts("		a. add rec");
	puts("		p. print record");
	puts("		s. sort record");
	puts("		d. delete record");
	puts("		q. exit menu");
	puts("--------------------------------------------");
	puts("	enter your choice");
}

char * getstring(void)
{
	char *p=0;
	int i=0;
	do{
		p=realloc(p,(i+1));
		p[i]=getchar();
	}while(p[i++]!=10);
	p[i-1]=0;
	return p;
}
void * addrec(char ***p)
{
	p=(char ***)realloc(p,(cnt+1)*sizeof(char **));
	if(p==NULL){puts("no space avail");return p;}
	
	p[cnt]=calloc(3,sizeof(char *));
	__fpurge(stdin);
	puts("enter name");
	p[cnt][0]=getstring();
	puts("enter contact no.");
	p[cnt][1]=getstring();
	puts("enter emial id");
	p[cnt][2]=getstring();
	cnt++;
	return p;
}

void printrec(char ***p)
{
	int i;
	for(i=0;i<cnt;i++)
		printf("%d: %-20s %-15s %-30s\n",i,p[i][0],p[i][1],p[i][2]);
}

void *deleterec(char ***p)
{
	int i,j;
	puts("enter index to delete");
	scanf("%d",&i);
	if((i<-1)||(i>=cnt)){puts("ERROR:invalid input");return p;}
	for(j=0;j<3;j++)
	{
		free(p[i][j]);
		p[i][j]=0;
	}
	free(p[i]);
	memmove(p+i,p+i+1,(cnt-1-i)*sizeof(char **));
	cnt--;
	p=realloc(p,cnt*sizeof(char **));
	return p;
}

void * sortrec(char ***p)
{
	int i,j;char *temp;temp=malloc(100);
	for(i=cnt-1;i>=1;i--)
		for(j=0;j<i;j++)
		{
			if(strcmp(p[j][0],p[j+1][0])>0)
			{
				strcpy(temp,p[j][0]);
				strcpy(p[j][0],p[j+1][0]);
				strcpy(p[j+1][0],temp);


				strcpy(temp,p[j][1]);
				strcpy(p[j][1],p[j+1][1]);
				strcpy(p[j+1][1],temp);


				strcpy(temp,p[j][2]);
				strcpy(p[j][2],p[j+1][2]);
				strcpy(p[j+1][2],temp);
			}
		}
	return p;
}
int main()
{
	char ***db=0;
	char ch;
	while(1)
	{
		printmenu();
		__fpurge(stdin);
		scanf("%c",&ch);
		switch(ch)
		{
			case 'a':db=addrec(db);break;
			case 'p':printrec(db);break;
			case 's':db=sortrec(db);break;
			case 'd':db=deleterec(db);break;
			case 'q':exit(0);
			default:puts("invalid input");
		}
	}
	return 0;
}
			
