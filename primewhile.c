#include<stdio.h>
int main()
{ int data,temp,max,min,count=0,z,y;
	printf("Enter the min range:");scanf("%d",&min);z=min;
	printf("enter the max range:");scanf("%d",&max);y=max;
	while(min<=max){ data=min;
		temp=2;
		while(data>temp)
		{ 
			if(data%temp==0)break;
			temp++;
		}
		if(data==temp){printf("%d\t",data);count++;}
		min++;
	}printf("no. of prime no in range%d to %d is %d",z,y,count);       return 0;
}
