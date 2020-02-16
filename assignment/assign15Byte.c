#include<stdio.h>
int main()
{ double f;
	long long *ptr=&f,v;
	int i,bit;
	printf("enter real data");
	scanf("%lf",&f);
	
          v=*ptr;//printf("%lf  %d",f,v);
	for(bit=63;bit>=0;bit--)
	{	printf("%d",(v>>bit)&1);if(bit%4==0)printf(" ");}
	}




