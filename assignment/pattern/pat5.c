#include<stdio.h>
int main()
{ int r,c,n,s;
	printf("enter the lines:");scanf("%d",&n);
	for(r=1;r<=n+1;r++,printf("\n")){
		for(s=1;s<=n-r+1;s++)printf(" ");
		for(c=s;c<=n+1;c++)printf("* ");
	}
	for(r=1;r<=n;r++){
		for(s=1;s<=r;s++)printf(" ");
		for(c=s;c<=n+1;c++)printf("* ");
		printf("\n");

	}
}
				
