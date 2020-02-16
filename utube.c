#include<stdio.h>
int main()
{ int n=1024;
	for(;n;n>>=1)
	{printf("%d\t",n);}
	return 0;
}

