#include<stdio.h>
int main()
{
	int min=0,max=1000,i,temp,sum;
	while(max>=min)
	{
		temp=min;
		for(i=1,sum=0;i<min;i++)
		{
			if(temp%i==0)sum+=i;
		}
		if(temp==sum)printf("%d ",temp);
		min++;
	}
	printf("\n");
}


