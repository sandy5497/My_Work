#include<stdio.h>
int SumofEle(int a[10],int n)
{ int sum=0,i;
	for(i=0;i<n;i++)
		sum+=a[i];
	return sum;
}
int main()
{ int a[10],n,i,sum;
	n=sizeof a/sizeof a[0];
	printf("enter %d int:",n);
	for(i=0;i<n;i++)
	{ scanf("%d",a+i);
        }
	sum=SumofEle(a,n);
	printf("\nsum of array elements:%d\n",sum);
return 0;
}

