//wap to supply marks in 10 subject for 20 student and do the following
//1. find the student who scored highest
//2. find the subject where max no. student fail
//3. printf grade summary table
#include<stdio.h>
#include<stdlib.h>
void highestscore(int *ptr)
{
	int  max=0,stu=1,i;
	for(i=0;i<20;i++)
	if(ptr[i]>=max){
				max=ptr[i];
				stu=i+1;
			}
	printf("\n student %d have highest score",stu);
	return;
}
void failinsub(int *ptr)
{
	int max=0,j;
	for(j=0;j<10;j++)
		if(ptr[j]>=max)max=j;
	printf("subject %d have max no of fail student\n",max);
	return ;
}
int main()
{
	unsigned int marks[20][10];
	int i,j,total[20],cnt[10];
	srand(getpid());

	for(i=0;i<20;i++)
		for(j=0;j<10;j++)
			marks[i][j]=rand()%101;
	printf("\n----------------------------------------------------------------------------------------------------------------\n");	      
	printf("                                    MARKS TABLE");
	printf("\n----------------------------------------------------------------------------------------------------------------\n");
	for(i=0,total[i]=0;i<20;i++,total[i]=0,printf("\n"))
	{
		printf("st%2d: ",i+1);
		for(j=0;j<10;j++)
			{printf("%4d",marks[i][j]);
				total[i]+=marks[i][j];
			}
		printf("%4d",total[i]);
	}
		highestscore(total);
		for(j=0,cnt[j]=0;j<10;j++,cnt[j]=0)
		for(i=0;i<20;i++)
		     if(marks[i][j]<=40)cnt[j]+=1;
//		printf("%d",cnt[j]);
		failinsub(cnt);	
}
		
