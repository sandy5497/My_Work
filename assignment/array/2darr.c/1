#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cnt=0;
const int max=10;

void printmenu(void)
{
	puts("************************MENU***************************");
	puts("-------------------------------------------------------");
	puts("	a. ADD RECORD");
	puts("	p. PRINT RECORD");
	puts("	d. DELETE RECORD");
	puts("  s. SORT RECORD");
	puts("	r. REVERSE RECORD");
	puts("	q. EXIT MENU");
	puts("-------------------------------------------------------");
	puts("ENTER YOUR CHOICE");
	__fpurge(stdin);
}

void addRec(char (*p)[3][20])
{
	__fpurge(stdin);
	if(cnt>=10){puts("NO SPACE NEW RECORD");return;}
	else{
	puts("enter the name");
	gets(p[cnt][0]);
	puts("enter contact no");
	gets(p[cnt][1]);
	puts("enter email id");
	gets(p[cnt][2]);
	cnt++;}
}

void printRec(char (*p)[3][20])
{
	int i;
	for(i=0;i<cnt;i++)
	printf("%-20s %-20s %20s\n",p[i][0],p[i][1],p[i][2]);
	return ;
}
void deleteRec(char (*p)[3][30])
{
	int i;
	puts("enter the index to delete");
	scanf("%d",&i);
	if((i<-1)||(i>cnt)){puts("ERROR:invalid input");return ;}
	memmove(p+i,p+i+1,(cnt-1-i)*sizeof(*p));
	cnt--;
	return ;
}

void sortRec(char (*p)[3][30])
{
	int i,j;char *temp;
	temp=malloc(100);
	for(i=cnt-1;i>=1;i--)
		for(j=0;j<i;j++)
		{
			if(strcmp(p[j][0],p[j+1][0])>0)
			{
				memmove(temp,p+j,(cnt-i-1)*sizeof(*p));
				memmove(p+j,p+j+1,(cnt-i-1)*sizeof(*p));
				memmove(p+j+1,temp,(cnt-i-1)*sizeof(*p));
/*				strcpy(temp,p[j][0]);			
				strcpy(p[j][0],p[j+1][0]);
				strcpy(p[j+1][0],temp);

				strcpy(temp,p[j][1]);			
				strcpy(p[j][1],p[j+1][1]);
				strcpy(p[j+1][1],temp);
				
				strcpy(temp,p[j][1]);				
				strcpy(p[j][1],p[j+1][1]);
				strcpy(p[j+1][1],temp);*/
			}
		}
}
void reverseRec(char (*p)[3][30])
{
	int i,j;char *temp;temp=malloc(sizeof(*p));
	for(i=0,j=cnt-1;i<j;i++,j--)
	{
		memmove(temp,p[i],sizeof(*p));
		memmove(p[i],p[j],sizeof(*p));
		memmove(p[j],temp,sizeof(*p));
	}
}

				
int main()
{
	char db[10][3][20];
	char ch;
	while(1)
	{
	printmenu();
	scanf("%c",&ch);
	__fpurge(stdin);
	
	switch(ch)
	{
		case 'a':addRec(db);break;
		case 'p':printRec(db);break;
		case 'd':deleteRec(db);break;
		case 's':sortRec(db);break;
		case 'r':reverseRec(db);break;
		case 'q':exit(0);
		default:puts("invalid input");
	}
	}
	return 0;
}
