#include<stdio.h>
#include<stdlib.h>
#include<string.h>

static int flag;
int cnt=0;
char *getStringfun(void)
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

char *getString(FILE *fp)
{
	int i=0;
	char *p=0;
	do{
		p=realloc(p,i+1);
		p[i]=fgetc(fp);
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
	puts("		S. SAVE RECORD");
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
	p[cnt]=getStringfun();
	cnt++;
	flag=1;
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
	flag=1;
	return p;
}
void *sortRec(char **p)
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
	flag=1;
	return p;
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
void *reverseRec(char **p)
{
	int i,j;char temp[20];
	for(i=0,j=cnt-1;i<j;i++,j--)
	{
		strcpy(temp,p[i]);
		strcpy(p[i],p[j]);
		strcpy(p[j],temp);
	}
	flag=1;
	return p;

}
void *editRec(char **p)
{
	int i;
	puts("enter the number postioning name to be edit");
	scanf("%d",&i);
	__fpurge(stdin);
	if((i<-1)||(i>=cnt)){puts("ERROR:invalid input");
				printf("use 0 to %d\n",cnt-1);
				return p;}
	puts("enter update name");
	gets(p[i]);
	flag=1;
	return p;
}

void *saveRec(char **p)
{
	FILE *fp;
	int i;
	fp=fopen("NAMES.DAT","w");
	for(i=0;i<cnt;i++)
	{
		fputs(p[i],fp);
		fputc(10,fp);
	}
	flag=0;
	return p;
}

char * syncData(void)
{
	char **p=0,ch;
	FILE *fp;
	fp=fopen("NAMES.DAT","r");
	if(fp==NULL)
	{
		puts("ERROR:file not found");
		exit(0);
	}
	while((ch=fgetc(fp))!=EOF)
	{
		fseek(fp,-1,1);
		p=realloc(p,(cnt+1)*sizeof(char *));
		p[cnt]=getString(fp);
		cnt++;
	}
	return p;
}
		    

int main()
{
	char **db=0;char ch;
	db=syncData();
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
		case 's':db=sortRec(db);break;
		case 'f':findRec(db);break;
		case 'S':db=saveRec(db);break;
		case 'r':db=reverseRec(db);break;
		case 'e':db=editRec(db);break;
		case 'q':if(flag==0)exit(0);
				 else
				 {
					 puts("DO YOU WANT TO SAVE DATA");
					 puts("'y' or 'n'");
					 scanf("%c",&ch);
					 if(ch=='y')saveRec(db);
					 exit(0);
				 }
		default:puts("INVALID INPUT,ENTER PROPER CHOICE");
	}
	}return 0;
}

