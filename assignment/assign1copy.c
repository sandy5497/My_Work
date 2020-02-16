#include<stdio.h>
int main()
{ int n;
	printf("enter the no.");
	scanf("%d",&n);
        (n&1)?puts("odd"):puts("even");
	(n>>31)&1?printf("negative"):puts("positive");
	return 0;
}
