#include<stdio.h>
int main()
{ int a[3]={11,22,33};
	int n,i;
	printf("%u\n",a[0]);//11
	printf("%u\n",a+0);
	printf("%u\n",a+2);
	printf("%u\n",*a);
	printf("%u\n",*(a+2));
	printf("%u\n",*a+2);
	printf("%u\n",*(a+1));
	printf("%u\n",*(a+0));
}

