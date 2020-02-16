#include<stdio.h>
#include<stdlib.h>
int main()
{
	int ***db=NULL,cnt,i,j,k;
	db=(int ***)calloc(2,sizeof(int **));
	for(i=0;i<2;i++)
	db[i]=(int **)calloc(3,sizeof(int *));
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
		db[i][j]=calloc(5,sizeof(int));
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			for(k=0;k<5;k++)
				scanf("%d",&db[i][j][k]);
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			for(k=0;k<5;k++)
				printf("%d ,",db[i][j][k]);
}



