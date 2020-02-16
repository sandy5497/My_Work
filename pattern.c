#include<stdio.h>
#include<math.h>
int main()
{ int n,r,c;
	printf("enter no. of row");
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{ for(c=0;c<n-r;c++)printf(" ");
		for(c=1;c<=2*r-1;c++)printf("*");
		printf("\n");
		}
	n--;
	for(r=1;r<=n;r++)
	{ for(c=1;c<=r;c++)printf(" ");
		for(c=1;c<=2*(n-r)+1;c++)printf("*");
		printf("\n");
	}
}
