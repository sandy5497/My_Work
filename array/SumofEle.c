#include<stdio.h>
int main()
{ int a[10],n,i,sum=0;
	n=sizeof a/sizeof a[0];
	printf("enter %d int:",n);
	for(i=0;i<n;i++)
	{ scanf("%d",a+i);
		sum+=a[i];
	}
	printf("\nsum of array elements:%d\n",sum);
return 0;
}

