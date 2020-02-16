#include<stdio.h>
int main()
{ unsigned int a[4]={11,22,33,44},b[4]={55,66,77,88};
	int i;
	printf("%u..%u\n",a,b);
	a[6]=11;
	b[-3]=b[-2]+a[5];
	a[5]=b[-3]+a[1];
	for(i=0;i<4;i++)printf("%u..\n",a[i]);
	for(i=0;i<4;i++)printf("%u..\n",b[i]);
	return 0;
	
}
