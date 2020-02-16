#include<stdio.h>
#include<math.h>
int main()
{
	int min=2,max=1000,temp,i;
	while(max>=min)
	{
		temp=2;
		while(min>temp)
		{
			if(min%temp==0)break;
			temp++;
		}
		if(min==temp)printf("%d ",min);
		min++;
	}
}

