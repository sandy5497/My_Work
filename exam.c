#include<stdio.h>
int cntDigit(int v)
{
	int cnt=0;
	do{ cnt++;
		v=v/10;
	}while(v!=0);
	return cnt;
}
int main()
{ int a=1,b=1,min,max;
	printf("enter min and max value:");
	scanf("%d%d",&min,&max);
	for(b=1;b<=10;b++,printf("\n"))
	for(a=min;a<=max;a++)
			printf("%*d",cntDigit(max)+2,a*b);
	//	printf("%d",a*b);
	float z=34.5,x;
	x=(float)34.5==34.5;
	printf("%f\n",x);
}

