#include<stdio.h>
struct stu
{ int rollno,marks[6];
	char name[20],dob[20],fname[20];
}s;

int main()
{ int i,pass=1;
	char sub[6][20]={"MARATHI","HINDI","ENGLISH","HISTORY","MATH","SCIENCE"};
	puts("enter the roll no");scanf("%d",&s.rollno);
	puts("enter student name & date of birth");scanf("%s%s",s.name,s.dob);
	puts("enter father name");scanf("%s",s.fname);
	for(i=0;i<6;i++){
	printf("enter %s subjects marks",sub[i]);
	scanf("%d",&s.marks[i]);
	}
	puts("%t SSC BOARD PUNE");
	puts("------------------------------------------------------------------");
	printf("ROLL NO:%d\tSTUDENT NAME:%s\n",s.rollno,s.name);
	printf("D.O.B:%s\tFATHER NAME:%s\n",s.dob,s.fname);
	puts("------------------------------------------------------------------");
	puts("SUBJECT\tMARKS\tPASS/FAIL");
	puts("------------------------------------------------------------------");
	for(i=0;i<6;i++)
	{
		printf("%s\t\t%d\t\t",sub[i],s.marks[i]);
		if(s.marks[i]<35){puts("F");pass=0;}
		else puts("P");
	}
	puts("------------------------------------------------------------------");
	printf("RESULT:       ");
	if(pass==0)printf("FAIL");
	else printf("PASS");
	return 0;
}
		
	



