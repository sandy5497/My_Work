#include<stdio.h>
int main()
{ int data,temp;
	printf("enter the no,\n");
	scanf("%d",&data);
	temp=1;
	while((temp<data)){temp*=3;
         		}
	if(temp==data)puts("number is in power of 3");
	else puts("number is not in power of 3");
	return 0;
}
