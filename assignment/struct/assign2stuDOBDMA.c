#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct stu
{
	int id;
	char *name;
	char contactno[15];
	struct
	{
		char *hn;
		char *street;
		char *landmark;
		char *city;
		char *state;
		char *country;
	}add;
	struct
	{
		unsigned short int ssc;
		unsigned short int hsc;
		unsigned short int g;
	}yop;
	struct 
	{
		int date:6;
		int month:5;
	unsigned int year:11;
	}dob;
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
void * addrec(struct stu *p)
{	int t;
	p=realloc(p,(cnt+1)*sizeof(*p));
	if(p==NULL){puts("no space allocate");return  p;}
	if(cnt>=max){puts("no space valid");return p;}
	puts("enter id");
	scanf("%d",&p[cnt].id);
	puts("enter name");
	__fpurge(stdin);
	p[cnt].name=getstring();
	puts("enter contact no.");
	gets(p[cnt].contactno);
	puts("enter address");
	puts("enter house no");
	p[cnt].add.hn=getstring();
	puts("enter street");
	p[cnt].add.street=getstring();
	puts("enter landmark");
	p[cnt].add.landmark=getstring();
	puts("enter city");
	p[cnt].add.city=getstring();
	puts("enter state");
	p[cnt].add.state=getstring();
	puts("enter country");
	p[cnt].add.country=getstring();
	puts("enter year of passing of matriculation");
	scanf("%hd",&p[cnt].yop.ssc);
	puts("enter year of passing of intermidiate");
	scanf("%hd",&p[cnt].yop.hsc);
	puts("enter year of passing of degree");
	scanf("%hd",&p[cnt].yop.g);
	puts("enter date of birth");
	scanf("%d",&t);
		p[cnt].dob.date=t;
	puts("enter month of birth");
	scanf("%d",&t);
		p[cnt].dob.month=t;
	puts("enter year of birth");
	scanf("%d",&t);
		p[cnt].dob.year=t;
	puts("enter percentage");
	scanf("%f",&p[cnt].perc);
	cnt++;
	return p;
}
void printrec(struct stu *p)
{	
	int i;
	for(i=0;i<cnt;i++)
	{
		puts("----------------------------------------------------------------------------------------------------");
		printf("%d: ID:%5d: NAME:%-15s  CONTACT NO.:%-15s  DOB:%d-%d-%d  DEGREE PERCENTAGE:%-2f\n",i,p[i].id,p[i].name,p[i].contactno,p[i].dob.date,p[i].dob.month,p[i].dob.year,p[i].perc);
		printf("ADD:H/N %s,%s,%s,%s,%s,%s\n",p[i].add.hn,p[i].add.street,p[i].add.landmark,p[i].add.city,p[i].add.state,p[i].add.country);
		printf("YEAR OF PASSING FOR SSC:%d, HSC:%d, DEGREE:%d\n",p[i].yop.ssc,p[i].yop.hsc,p[i].yop.g);
		puts("----------------------------------------------------------------------------------------------------");
	}
}
void * sortrec(struct stu *p)
{
	int i,j;char *temp;temp=malloc(sizeof(struct stu));
	struct stu t;
	if(temp==NULL){puts("error");return p;}	
	for(i=cnt-1;i>=1;i--)
		for(j=0;j<i;j++)
		{
			if(p[j].id>p[j+1].id)
			{
				memmove(temp,p+j,sizeof(*p));
				memmove(p+j,p+j+1,sizeof(*p));
				memmove(p+j+1,temp,sizeof(*p));
				//t=p[j];
				//p[j]=p[j+1];
				//p[j+1]=t;
			}
		}
	return p;
}
void * deleterec(struct stu *p)
{
	int i;
	puts("enter index to delete");
	scanf("%d",&i);
	if((i<-1)||(i>=cnt)){puts("ERROR:invalid input");return p;}
	free(p[i].name);
	free(p[i].add.hn);
	free(p[i].add.street);
	free(p[i].add.landmark);
	free(p[i].add.city);
	free(p[i].add.state);
	free(p[i].add.country);
	memmove(p+i,p+i+1,(cnt-1-i)*sizeof(*p));
	cnt--;
	p=realloc(p,(cnt)*sizeof(*p));
	return p;
}	


int main()
{
	char ch;
	struct stu *db=0;
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

	

