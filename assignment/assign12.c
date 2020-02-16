#include<stdio.h>
int main()
{ int data,temp,count=0,min,max,z,y;
	printf("enter the min range:");scanf("%d",&min);z=min;
	printf("enter the max range:");scanf("%d",&max);y=max;
	while(min<=max){ data=min;
	temp=2;
	while(data>temp)
	{    if(data%temp==0)break;
		temp++;
	}
	if(data==temp){printf("%d,",data);count++;}
	min++;
	}
	printf("\nno. of prime no. in range %d to %d is %d",z,y,count);
	
	return 0;
}

