#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int cnt=0;
char *getString(void)
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
void printMenu(void)
{
	puts("**********************MENU**************************");
	puts("----------------------------------------------------");
	puts("		a. ADD RECORD");
	puts("		p. PRINT RECORD");
	puts("		d. DELETE RECORD");
	puts("		s. SORT RECORD");
	puts("		f. FIND RECORD");
	puts("		r. REVERSE RECORD");
	puts("		e. EDIT RECORD");
	puts("  	q. QUITE MENU");
	puts("-----------------------------------------------------");
	puts("ENTER YOURS CHOICE");
	return ;
}

void *addRec(char **p)
{
	p=realloc(p,(cnt+1)*sizeof(*p));
	puts("enter name to add");
	p[cnt]=getString();
	cnt++;

	return p;
}
void printRec(char **p)
{
	int i;
	for(i=0;i<cnt;i++){	printf("%2d :",i);
				puts(p[i]);}
}
void *deleteRec(char **p)
{
	int i;
	puts("enter index to delete");
	scanf("%d",&i);
	if((i<-1)||(i>=cnt)){puts("ERROR:invalid input");
				printf("use 0 to %d\n",cnt-1);
				return p;}
	if(i==(cnt-1))goto lable;
	memmove(p+i,p+i+1,(cnt-i)*sizeof (*p));
lable:	cnt--;
	p=realloc(p,(cnt)*sizeof(*p));
	__fpurge(stdin);
	return p;
}
void sortRec(char **p)
{
	int i,j;char temp[20];
	for(i=cnt-1;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(strcmp(p[j],p[j+1])>0)
			{
				strcpy(temp,p[j]);
				strcpy(p[j],p[j+1]);
				strcpy(p[j+1],temp);
			}
		}
	}
}

void findRec(char **p)
{
	int i;char find[20];
	puts("enter name to be find");
	gets(find);
	for(i=0;i<cnt;i++)
	{
		if(strcmp(p[i],find)==0){printf("name found on %d position\n",i);
					return ;
					}
	}
	puts("name not found,enter again");
	return;
}
void reverseRec(char **p)
{
	int i,j;char temp[20];
	for(i=0,j=cnt-1;i<j;i++,j--)
	{
		strcpy(temp,p[i]);
		strcpy(p[i],p[j]);
		strcpy(p[j],temp);
	}
}
void editRec(char **p)
{
	int i;
	puts("enter the number postioning name to be edit");
	scanf("%d",&i);
	__fpurge(stdin);
	if((i<-1)||(i>=cnt)){puts("ERROR:invalid input");
				printf("use 0 to %d\n",cnt-1);
				return;}
	puts("enter update name");
	gets(p[i]);
}

int main()
{
	char **db=0;char ch;
	while(1)
	{
	printMenu();
	scanf("%c",&ch);
	__fpurge(stdin);
	switch(ch)
	{
		case 'a':db=addRec(db);break;
		case 'p':printRec(db);break;
		case 'd':db=deleteRec(db);break;
		case 's':sortRec(db);break;
		case 'f':findRec(db);break;
		case 'r':reverseRec(db);break;
		case 'e':editRec(db);break;
		case 'q':exit(0);
		default:puts("INVALID INPUT,ENTER PROPER CHOICE");
	}
	}return 0;
}

