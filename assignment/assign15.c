#include<stdio.h>
int main()
{ double f;
	char *ptr=&f,v;
	int i,bit;
	printf("enter real data");
	scanf("%lf",&f);
	
	for(i=7,ptr+=i;i>=0;i--,ptr--)
	{  
          v=*ptr;//printf("%lf  %d",f,v);
	for(bit=7;bit>=0;bit--)
	{	printf("%d",(v>>bit)&1);if(bit%4==0)printf(" ");}
	}
}



