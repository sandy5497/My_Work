#include<stdio.h>
int main()
{
	int c[]={1.8,2.4,6,8.7,7};
	int j,*p=c,*q=c;
	for(j=0;j<5;j++)
	{
		printf("%d ",*c);
		++q;
	}
	for(j=0;j<5;j++)
	{
		printf("%d ",*p);
		++p;
	}
	return 0;
}
