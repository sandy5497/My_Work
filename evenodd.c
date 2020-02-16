#include<stdio.h>
int sum(int n)
{ return n%2;
}
int main()
{ int n;
	printf("enter the no.");
	scanf("%d",&n);
	if(sum(n))printf("odd");
	else printf("even");
	return 0;
}
