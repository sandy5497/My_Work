#include<stdio.h>
int main()
{ int n,r,c,R,C;
	printf("enter the lines:");scanf("%d",&n);
	for(r=n;r>=0;r--,printf("\n")){
		for(c=-n;c<=n;c++){ 
			(c<0) ? (C=-c) : (C=c);
			if(r<=C)printf("*");
			else printf(" ");
		}
	}
	for(r=1;r<=n;r++,printf("\n")){
		for(c=-n;c<=n;c++){
		(c<0) ? (C=-c) : (C=c);
			if(r<=C)printf("*");
			else printf(" ");
		}
	}
}
