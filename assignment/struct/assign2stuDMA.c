#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct stu
{
	int id;
	char *name;
	char contactno[15];
	char *add;
	unsigned short int yop;
	float perc;
};
int cnt=0;
const int max=10;

void printmenu(void)
{
	puts("********************MENU*******************");
	puts("-------------------------------------------");
	puts("	a. ADD RECORD");
	puts("	p. PRINT RECORD");
	puts("	s. SORT RECORD");
	puts("	d. DELETE RECORD");
	puts("	q. EXIT MENU");
	puts("-------------------------------------------");
	puts("	enter your choice");
}

char *getstring(void)
{
	int i=0;
	char *p=0;
	do{
		p=realloc(p,i+1);
		p[i]=getchar();
	}while(p[i++]!=10);
	p[i-1]=0;
	return p;
}
void addrec(struct stu *p)
{
	if(cnt>=max){puts("no space valid");return ;}
	puts("enter id");
	scanf("%d",&p[cnt].id);
	puts("enter name");
	__fpurge(stdin);
	p[cnt].name=getstring();
	puts("enter contact no.");
	gets(p[cnt].contactno);
	puts("enter address");
	p[cnt].add=getstring();
	puts("enter year of passing");
	scanf("%hd",&p[cnt].yop);
	puts("enter percentage");
	scanf("%f",&p[cnt].perc);
	cnt++;
}
void printrec(struct stu *p)
{	
	puts("ID    NAME             CONTACT NO	       ADDRESS                        YOP      PERCENTAGE");
	int i;
	for(i=0;i<cnt;i++)
	{
		puts("----------------------------------------------------------------------------------------------------");
		printf("%d:%5d:%-15s %-15s %-30s %-6hd %-2f\n",i,p[i].id,p[i].name,p[i].contactno,p[i].add,p[i].yop,p[i].perc);
		puts("----------------------------------------------------------------------------------------------------");
	}
}
void sortrec(struct stu *p)
{
	int i,j;char *temp;temp=malloc(100);
	for(i=cnt-i;i>=1;i--)
		for(j=0;j<i;j++)
		{
			if(strcmp(p[j].name,p[j+1].name)>0)
			{
				memmove(temp,p+j,sizeof(*p));
				memmove(p+j,p+j+1,sizeof(*p));
				memmove(p+j+1,temp,sizeof(*p));
			}
		}
}
void deleterec(struct stu *p)
{
	int i;
	puts("enter index to delete");
	scanf("%d",&i);
	if((i<-1)||(i>=cnt)){puts("ERROR:invalid input");return;}
	free(p[i].name);free(p[i].add);
	memmove(p+i,p+i+1,(cnt-1-i)*sizeof(*p));
	cnt--;
	return;
}	


int main()
{
	char ch;
	struct stu db[10];
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
			default:puts("invalid input");
		}
	}
	return 0;
}

	

