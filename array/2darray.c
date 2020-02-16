#include<stdio.h>
int main()
{
	int arr[10][5]={{11},{22},{33},{44},{55},{66},{77},{88},{99},{111}};
	int i,j;
	for(i=0;i<5;i++,printf("\n"))
		for(j=0;j<5;j++)
			printf("%4d ",arr[i][j]);
}
	
