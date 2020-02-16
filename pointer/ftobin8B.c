#include<stdio.h>
int main()
{ double f;
	long long *ptr=&f,v;
	int bit;
	printf("enter real no.");
	scanf("%lf",&f);
	v=*ptr;
	for(bit=63;bit>=0;bit--)
	{	printf("%d",(v>>bit)&1);
		if(bit%4==0)printf(" ");
	
	}

}
