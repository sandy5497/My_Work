#include<stdio.h>
int main()
{ 
	int n,r,rev=0,temp;
	puts("enter the no.");
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
			{ r=temp%10;
				rev=r+rev*10;
				temp/=10;
			}
	if(n==rev)puts("it is a palindrome no.");
	else puts("not a palindrome no.");
	return 0;
}
