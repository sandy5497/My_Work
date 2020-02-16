#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct contact
{
	char name[30];
	char contactno[30];
	char emailid[30];
};
int cnt=0;
const int max=10;

void printmenu(void)
{
	puts("*****************MENU*****************");
	puts("--------------------------------------");
	puts("	a. ADD RECORD");
	puts("	p. PRINT RECORD");
	puts("	s. SORT RECORD");
	puts("	d. DELETE RECORD");
	puts("	q. EXIT MENU");
	puts("--------------------------------------");
	puts("enter your choice");
}

char *getstring(void)
{
	char *p=0;
	int i=0;
	do{
		p=realloc(p,i+0);
		p[i]=getchar();
	}while(p[i++]!=10);
	p[i-1]=0;
	return p;
}
void addrec(struct contact *p)
{
//	if(cnt==0)p=0;
//	p=realloc(p,sizeof(*p));
	if(cnt>=max){puts("NO SPACE AVAIL");return ;}
	puts("enter name");
	__fpurge(stdin);
	gets(p[cnt].name);
	puts("enter contact no.");
	gets(p[cnt].contactno);
	puts("enter email id");
        gets(p[cnt].emailid);
	cnt++;
}	

void printrec(struct contact *p)
{
	int i;
	for(i=0;i<cnt;i++)
		printf("%d:%-20s %-15s %-30s\n",i,p[i].name,p[i].contactno,p[i].emailid);
}
void sortrec(struct contact *p)
{
	int i,j;char temp[30];
	for(i=cnt-1;i>=1;i--)
		for(j=0;j<i;j++)
		{
			if(strcmp(p[j].name,p[j+1].name)>0)
			{
				strcpy(temp,p[j].name);
				strcpy(p[j].name,p[j+1].name);
				strcpy(p[j+1].name,temp);
				
				strcpy(temp,p[j].contactno);
				strcpy(p[j].contactno,p[j+1].contactno);
				strcpy(p[j+1].contactno,temp);
				
				strcpy(temp,p[j].emailid);
				strcpy(p[j].emailid,p[j+1].emailid);
				strcpy(p[j+1].emailid,temp);
			}
		}
}
void deleterec(struct contact *p)
{
	int i;
	puts("enter index to delete");
	scanf("%d",&i);
	if((i<-1)||(i>=cnt)){puts("ERROR:invalid input");return ;}
	memmove(p+i,p+i+1,(cnt-1-i)*sizeof(*p));
	cnt--;
	return ;
}
		
int main()
{
	char ch;
	struct contact db[10];
	while(1)
	{
	printmenu();
	__fpurge(stdin);
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a':addrec(db);break;
		case 'p':printrec(db);break;
		case 's':sortrec(db);break;
		case 'd':deleterec(db);break;
		case 'q':exit(0);
		default:puts("INVALID INPUT");
	}
	}
return 0;
}
