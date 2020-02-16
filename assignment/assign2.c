#include<stdio.h>
int main()
{ int c=0,n,i,bit;
	puts("enter the no.");
	scanf("%d",&n);i=n;
first:
	if(n>=0){ if ((n&1)==1)c++;
		  n=n>>1;
		  if(n!=0)goto first;
		  goto last;
	        }
	
	else { bit=31;
	       	if(((n>>bit)&1)==1)c++;
	       bit--;n=n<<1;
               if(bit>=0)goto first;
        	}
last:  
	 printf("%d is having  %d set bit",i,c);
	 return 0;
}
