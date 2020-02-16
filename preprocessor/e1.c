#include<stdio.h>
#define SWAP(dtype,x,y) {dtype t;t=x+y,x=t-x,y=t-y;}
int main()
{
	int a=1, b=2, x=3,y=4,s=25,t=26;
	SWAP(int ,a,b);
	SWAP(int ,x,y);
	SWAP(int ,s,t);
	printf("%d %d %d %d %d %d\n",a,b,x,y,s,t);
}
