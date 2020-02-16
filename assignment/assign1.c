#include<stdio.h>
int main()
{ int n;
	printf("enter the no.");
	scanf("%d",&n);
	if((n&1)==1)printf("odd\n");
	else printf("even\n");
	if(((n>>31)&1)==1)printf("negative");
			else printf("positive");
			return 0;

}

