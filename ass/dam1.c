
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int **db=NULL;
	int cnt=5,i;
	db=calloc(5,sizeof(int *));
	for(i=0;i<5;i++)
		db[i]=calloc(5,sizeof(int));
	puts("enter value");
	for(i=0;i<5;i++)
		for(int j=0;j<5;j++)
		{
			scanf("%d",&db[i][j]);
		}
	for(i=0;i<5;i++)
		for(int j=0;j<5;j++)
		{
			printf("%d ,",db[i][j]);
		}



}

