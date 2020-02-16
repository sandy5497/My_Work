#include<stdio.h>
int main()
{	int i,k,j;int arr[3][3];
	int arr1[][3]={{1,1,1},{1,1,1},{1,1,1}};
	int arr2[][3]={{1,2,3},{4,5,6},{7,8,9}};
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			arr[i][j]=0;
			for(k=0;k<3;k++)
				arr[i][j]+=arr1[i][k]*arr2[k][j];
		}
			for(j=0;j<3;j++,printf("\n"))					
			for(i=0;i<3;i++)
					printf("%d ",arr[i][j]);

			
}







