#include<stdio.h>
int three(int a)
{ int r,n;
   for(n=a;n!=0;n=n/10)
   { r=n%10;
	   if(r==3){return 1;break;
   }
   return 0;
}
}

int prime(int n)
{ int c,a,b,d;
	for(a=1;a<=n;a++)
	{ for(c=0,d=0,b=1;b<=a;b++)
		{ if(a%b==0)c++;
		}
		if((c==2)&&(three(a)))printf("%4d",a);
	}
}
int main()
{ int n;
	printf("enter  number upto find prime no.");
       scanf("%d",&n);
       prime(n);
       return 0;
}       

