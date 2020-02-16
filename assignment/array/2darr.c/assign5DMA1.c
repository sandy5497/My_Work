#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cnt=0;
//const int max=10;

void printmenu(void)
{
	puts("************************MENU***************************");
	puts("-------------------------------------------------------");
	puts("	a. ADD RECORD");
	puts("	p. PRINT RECORD");
	puts("	d. DELETE RECORD");
	puts("  s. SORT RECORD");
	puts("	q. EXIT MENU");
	puts("-------------------------------------------------------");
	puts("ENTER YOUR CHOICE");
	__fpurge(stdin);
}

void *addRec(char (*p)[3][20])
{
	p=realloc(p,(cnt+1)*sizeof(*p));
	puts("enter name");
	gets(p[cnt][0]);
	puts("enter contact no");
	gets(p[cnt][1]);
	puts("enter email id");
	gets(p[cnt][2]);
	cnt++;
	return p;
}

void printRec(char (*p)[3][20])
{
	int i;
	for(i=0;i<cnt;i++)
	printf("%d: %-20s %-20s %20s\n",i,p[i][0],p[i][1],p[i][2]);
	return ;
}
void *deleteRec(char (*p)[3][30])
{
	int i;
	puts("enter the index to delete");
	scanf("%d",&i);
	if((i<-1)||(i>=cnt)){puts("ERROR:invalid input");return p;}
	memmove(p[i],p[i+1],(cnt-1-i)*sizeof(*p));
	p=realloc(p,(cnt-1)*sizeof(*p));
	cnt--;
	return p;
}

void *sortRec(char (*p)[3][30])
{
	int i,j;char *temp;
	temp=malloc(100);
	for(i=cnt-1;i>=1;i--)
		for(j=0;j<i;j++)
		{
			if(strcmp(p[j][0],p[j+1][0])>0)
			{
//				memmove(temp,p+j,(cnt-1-i)*sizeof(*p));
//				memmove(p+j,p+j+1,(cnt-1-i)*sizeof(*p));
//				memmove(p+j+1,temp,(cnt-1-i)*sizeof(*p));
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
	char (*db)[3][20]=0;
	char ch;
	while(1)
	{
	printmenu();
	scanf("%c",&ch);
	__fpurge(stdin);
	
	switch(ch)
	{
		case 'a':db=addRec(db);break;
		case 'p':printRec(db);break;
		case 'd':db=deleteRec(db);break;
		case 's':db=sortRec(db);break;
		case 'q':exit(0);
		default:puts("invalid input");
	}
	}
	return 0;
}
