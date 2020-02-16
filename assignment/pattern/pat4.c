#include<stdio.h>
int main()
{  int r,c,n;
	printf("enter the lines:");scanf("%d",&n);
	for(r=1;r<=n+1;r++,printf("\n")){
		for(c=1;c<=r;c++)printf("*");
	}
	for(r=1;r<=n;r++){
		for(c=1;c<=n-r+1;c++)printf("*");
		printf("\n");
	}
}
