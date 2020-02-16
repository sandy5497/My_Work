#include<stdio.h>
int main()
{ int n,a,b;
	printf("enter the lines:");scanf("%d",&n);
	for(a=1;a<=n;a++,printf("\n"))
		for(b=1;b<=a;b++)
		if((a==b)||((a+b)%2==0))printf("0");
	        else printf("1");
}
