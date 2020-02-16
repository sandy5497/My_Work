#include<stdio.h>
#include<string.h>
char tx1[10][6]={"one","two","three","four","five","six","seven","eight","nine"};
char tx2[10][10]={"eleven","twelve","thirteen","fourteen","fifteen","sixteen","eighteen","nineteen"};
char tx3[10][8]={"ten","twenty","thirty","four","five","six","seventy","eighty","ninty"};

void txtprn(int i){
        int d0,d1,d2,d3;
        if(i==0)printf("zero\n");
	else{
	     if(i<0){ printf("-");
		     i=-i;
	} 
	     d0 = i % 10; i/=10;
	     d1 = i % 10; i/=10;
	     d2 = i % 10; i/=10;
	     d3 = i % 10; i/=10;
             
	     if(d3>0)printf("%s thousand ",tx1[d3-1]);
	     if(d2>0)printf("%s hundred ",tx1[d2-1]);
	     if((d3>0 || d2>0) && (d1>0 || d0>0))printf("and ");
	     if(d1==1 && d0>0)printf("%s",tx2[d0-1]);
	     else{
		     if(d1>0)printf("%s",tx3[d1-1]);
		     if(d0>0)printf("%s",tx1[d0-1]);
	     }
	     printf("\n");
	}
}
int main()
{ int n;
	printf("enter the no.");
	scanf("%d",&n);
	txtprn(n);
}
