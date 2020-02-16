//connect the database progrm to the file
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
static int cnt,flag;

struct stu
{
	char name[20];
	float marks;
	int rollno;
};

void printmenu(void)
{
	puts("******************************************************************************");
	puts("-------------------------------MENU-------------------------------------------");
	puts("******************************************************************************");
	puts("			a. ADD RECORD");
	puts("			p. PRINT RECORD");
	puts("			S. SAVE RECORD");
	puts("			d. DELETE RECORD");
	puts("			q. QUIT MENU");
	puts("------------------------------------------------------------------------------");
	puts("		enter  your choice");
}

void *addRec(struct stu *p)
{
	p=realloc(p,(cnt+1)*sizeof(struct stu));
	puts("enter the name");
	__fpurge(stdin);
	gets(p[cnt].name);
	puts("enter marks");
	scanf("%f",&p[cnt].marks);
	puts("enter the roll no");
	scanf("%d",&p[cnt].rollno);
	cnt++;
	flag=1;
	return p;
}

void printRec(struct stu *p)
{
	int i;
	for(i=0;i<cnt;i++)
	{
		printf("%d: %-20s%10f%10d\n",i,p[i].name,p[i].marks,p[i].rollno);
	}
}

void *deleteRec(struct stu *p)
{
	int i,j;
	puts("enter index no to delete the rec");
	scanf("%d",&i);
	memmove(p+i,p+i+1,(cnt-1-i)*sizeof(struct stu));
	cnt--;
	p=realloc(p,(cnt)*sizeof(struct stu));
	flag=1;
	return p;
}


void saveRec(struct stu *p)
{
	FILE *fp;int i;
	fp=fopen("database1.dat","w");
	for(i=0;i<cnt;i++)
	{
	fprintf(fp,"%s %f %d \n",p[i].name,p[i].marks,p[i].rollno);
	}
	fclose(fp);
	flag=0;
}
void *syncdata(struct stu *buf)
{
	FILE *fp;
	char ch;
//	struct stu *buf,*p=0;
	struct stu temp;
	fp=fopen("database1.dat","r");
	if(fp==NULL)
	{
		puts("ERROR:file not found");
		exit(0);
	}
	while(fscanf(fp,"%s %f %d \n",temp.name,&temp.marks,&temp.rollno)==3)
	{
		buf=realloc(buf,(cnt+1)*sizeof(struct stu));
		buf[cnt++]=temp;
	}
	fclose(fp);
	return buf;
}

int main()
{
	struct stu *db=0;
	char ch;
	db=syncdata(db);
	while(1)
	{
		printmenu();
		__fpurge(stdin);
		scanf("%c",&ch);
		switch(ch)
		{
			case 'a':db=addRec(db);break;
			case 'p':printRec(db);break;
			case 'd':db=deleteRec(db);break;
			case 'S':saveRec(db);break;
			case 'q':if(flag==0)exit(0);
					 else
					 {
						 puts("do u wnt to save");
						 puts("chose 'y' or 'n'");
						 __fpurge(stdin);
						 scanf("%c",&ch);
						 if(ch=='y')saveRec(db);
						 exit(0);
					 }
			default:puts("invalid input:");
		}
	}
	return 0;
}

