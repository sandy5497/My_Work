#include<stdio.h>
int main()
{ int n,a,b,s;
	printf("enter the lines:");scanf("%d",&n);
	for(a=n;a>0;a--){
		for(s=1;s<=n-a;s++)printf(" ");
		for(b=s;b<=n;b++)printf("* ");
		printf("\n");
	}
}

				
			
