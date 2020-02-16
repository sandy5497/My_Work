#include<stdio.h>
int main()
{ int r,c,n,cv;
	printf(" enter the lines:");
	scanf("%d",&n);
	for(r=1;r<=(n+1)*2;r++,printf("\n"))
		for(c=-n;c<=n;c++){
		cv= c<0 ? -c : c;
		if( (r>cv) || ((r==2)&&((r-1)<=cv)) || ((r==3) || (r==4)) || (((r==5)||(r==6))&&((r-2)>=cv)) || ((r==7)&&(cv<=2)) || (((r==8)||(r==9))&&(cv<=1)) || ((r==10)&&(cv==0)) )printf("*");
		else printf(" ");
		}
}
