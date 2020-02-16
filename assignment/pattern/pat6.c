#include<stdio.h>
int main()
{ int n,r,c,R;
	printf("enter the lines:");scanf("%d",&n);
	for(r=-n;r<=n;r++,printf("\n")){
		(r<0) ? (R=-r) : (R=r);
		for(c=n;c>=0;c--)if(c<=R)printf("*");
		else printf(" ");
	}
}
