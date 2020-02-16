#include<stdio.h>
int main()
{ int a[10],n,i,j,temp;
	n=sizeof a/sizeof a[0];
	printf("enter %d int:",n);
	for(i=0;i<n;i++)
	 scanf("%d",a+i);
	printf("\nbefore reversal\n");
	for(i=0;i<n;i++)
		printf("%d,",a[i]);
	for(i=0,j=n-1;i<j;i++,j--)
	{temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	printf("\n Afetr reversal\n");
	for(i=0;i<n;i++)
		printf("%d,",a[i]);
	return 0;
}

