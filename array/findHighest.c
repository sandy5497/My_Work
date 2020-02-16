#include<stdio.h>
int main()
{int arr[10],n,i,max;
	n=sizeof arr / sizeof arr[0];
	printf("enter %d int:\n",n);
	for(i=0;i<n;i++)
	{ printf("enter int at %d index:\n",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
		printf("%d ,",arr[i]);
	max=arr[0];
	for(i=1;i<n;i++)
	{ if(arr[i]>=max)max=arr[i];
	}
	printf("\n Highest integer in array:%d\n",max);
return 0;
}
			
