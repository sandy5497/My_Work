#include<stdio.h>
int main()
{ int n,count=0,r,temp;
	puts("enter the no.");
	scanf("%d",&n);
	temp=n;
	while(temp!=0){
		     	r=temp%10;
			if(r%2==1){ printf("%d\t",r);
				    count++;
		   		}
			temp/=10;
	}
	printf("\n%d is having %d odd digit",n,count);
	return 0;
}
