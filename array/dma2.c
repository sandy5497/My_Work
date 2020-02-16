#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,r,c,**p;
	puts("enter no. of rows and col");
	scanf("%d%d",&r,&c);
	p=(int **)malloc(r*sizeof(int *));
	for(i=0;i<r;i++)
		p[i]=(int *)malloc(c*sizeof(int));
	int (*q)[4]=p;
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			{
				printf("enter integer");
				scanf("%d",&p[i][j]);
			}
	
	for(i=0;i<r;i++,printf("\n"))
	
		for(j=0;j<c;j++){
			printf("%d ",p[i][j]);}
			free(p);

	for(i=0;i<r;i++,printf("\n"))
		for(j=0;j<c;j++)printf("%d ",q[i][j]);
		}
