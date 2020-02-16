#include<stdio.h>
int main()
{
	int n;
	puts("enter number");
	scanf("%d",&n);
	n=~n;
	n+=1;
	printf("%d\n",n);
}
