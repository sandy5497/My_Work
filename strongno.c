#include<stdio.h>
long fact(int n)
{ 
	 long f=1;
	 while(n!=0)f=f*n--;
	 return f;
}
int strong()
{ int n,m,r,s=0;
	printf("enter the number");
	scanf("%d",&n);
	for(m=n;m!=0;m=m/10)
	{ r=m%10;
		s=s+fact(r);
	}
	printf("%d\n",s);
	return (n==s);
}
int main()

{
	printf("%s", strong()?"strong number" : "not a strong no.");
return 0;
}
			
