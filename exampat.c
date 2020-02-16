#include<stdio.h>
int main()
{ int r,c,n,C,a=1,s;char ch='A';
	printf("enter the lines:");
	scanf("%d",&n);
         for(r=1;r<=n;r++,printf("\n"))
	 {  for (s=1;s<n-r;s++)printf(" ");
		 for(c=n;c<n+r;c++)
		 {  printf("%d",c);}
	    for(C=c-2,c=1;c<r;c++)printf("%d",C--);
	 }
	 


}
	
