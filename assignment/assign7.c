#include<stdio.h>
int main()
{ int data,temp;
	printf("enter the no,\n");
	scanf("%d",&data);
	temp=data;
	while((temp!=3)){ 
			if(temp%3)break;
               		temp/=3;
         		}
	if(temp==3)puts("no is in power of 3");
	else puts("no is not in power of 3");
	return 0;
}
