#include<stdio.h>
void Armstrong(int n,int *temp)
{ 
	int r,sum=0;
	while(n){
		r=n%10;
		sum=sum+r*r*r;
		n/=10;
	}
	if(*temp==sum)printf("%d\t",*temp);
	return;
}
int main()
{
	int min,max,temp;
	printf("enter the min and max value:");
	scanf("%d%d",&min,&max);

	while(max>=min)
	{  
		temp=min;
		Armstrong(min,&temp);
		min++;
	}
	return 0;
}
