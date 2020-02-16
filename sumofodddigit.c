//#include<stdio.h>
//  MY LOGIC
/*
 * int sumDigit(int s)
{ int sum=0;
	sum=s+sum;
	return sum;
}
int main()
{  int n,temp,r,ans=0;
	puts("enter the no.");
	scanf("%d",&n);temp=n;
	while(temp!=0)
	{ r=temp%10;
		if(r%2==1)ans=ans+sumDigit(r);
		temp=temp/10;
	}
	printf("%d is having odd digit sum=%d",n,ans);
	return 0;
}*/

//SIR's LOgIc
#include<stdio.h>
int sumofDigit(int v)
{  int sum=0;
	while(v!=0)
	{  if(v%10%2)sum+=v%10;
		v=v/10;
		return sum;
	}}
int main()
	{ int data;
		printf("enter int: ");scanf("%d",&data);
		printf("sumofdigit=%d\n",sumofDigit(data));
	
return 0;}

