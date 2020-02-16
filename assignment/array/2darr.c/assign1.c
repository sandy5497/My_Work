#include<stdio.h>
#include<stdlib.h>
#include<string.h>

const int max=10;
int cnt=0;

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

void addRec(char (*p)[20])
{
	if(cnt>=max){
			puts("ERROR:space limit over");
			return;
		}
	puts("enter name to add");
	gets(p[cnt++]);
	__fpurge(stdin);
	return;
}
void printRec(char (*p)[20])
{
	int i;
	for(i=0;i<cnt;i++){	printf("%2d :",i+1);
				puts(p[i]);}
}
void deleteRec(char (*p)[20])
{
	int i;
	puts("enter index to delete");
	scanf("%d",&i);
	i=i-1;
	if((i<0)||(i>=cnt)){puts("ERROR:invalid input");
				printf("use 0 to %d\n",cnt-1);
				return;}
	memmove(p+i,p+i+1,(cnt-i-1)*sizeof (*p));
	cnt--;
	_fpurge(stdin);
	return;
}
void sortRec(char (*p)[20])
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

void findRec(char (*p)[20])
{
	int i;char find[20];
	puts("enter name to be find");
	gets(find);
	for(i=0;i<cnt;i++)
	{
		if(strcmp(p[i],find)==0){printf("name found on %d position\n",i+1);
					return ;
					}
	}
	puts("name not found,enter again");
	return;
}
void reverseRec(char (*p)[20])
{
	int i,j;char temp[20];
	for(i=0,j=cnt-1;i<j;i++,j--)
	{
		strcpy(temp,p[i]);
		strcpy(p[i],p[j]);
		strcpy(p[j],temp);
	}
}
void editRec(char (*p)[20])
{
	int i;
	puts("enter the number postioning name to be edit");
	scanf("%d",&i);
	__fpurge(stdin);
	if((i<0)||(i>cnt)){puts("ERROR:invalid input");
				printf("use 0 to %d\n",cnt-1);
				return;}
	puts("enter update name");
	gets(p[i-1]);
}

int main()
{
	char db[10][20];char ch;
	while(1)
	{
	printMenu();
	scanf("%c",&ch);
	__fpurge(stdin);
	switch(ch)
	{
		case 'a':addRec(db);break;
		case 'p':printRec(db);break;
		case 'd':deleteRec(db);break;
		case 's':sortRec(db);break;
		case 'f':findRec(db);break;
		case 'r':reverseRec(db);break;
		case 'e':editRec(db);break;
		case 'q':exit(0);
		default:puts("INVALID INPUT,ENTER PROPER CHOICE");
	}
	}return 0;
}

