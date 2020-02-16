#include<stdio.h>
int main()
{ int data,start,temp,count,z=0;
	printf("enter the start value:");scanf("%d",&start);
	printf("enter the count:");scanf("%d",&count);
	
	printf("\nfirst %d prime no's starting from %d is :",count,start);
	while(z!=count){data=start;
	temp=2;
	while(data>temp)
	{    if(data%temp==0)break;
		temp++;
	}
	if(data==temp){printf("%d,",data);z++;}
	start++;
	}
	
	
	return 0;
}

