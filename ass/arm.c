#include<stdio.h>
#include<math.h>
int main()
{
	int min=0,max=1000,i,r,temp,c=0,sum;
	while(min<=max)
	{	temp=min;
		for(c=0;temp;temp=temp/10)c++;
		for(temp=min,sum=0;temp;temp=temp/10)
		{
			r=temp%10;
			sum=sum+pow(r,c);
		}
		if(sum==min)printf("%d ",min);
		min++;
	}
}
