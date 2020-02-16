#include<stdio.h>
#define prod(x) (x*x)
main()
{
	int i=4,j,k;
	j=prod(i++);
	printf("%d\n",i);
	k=prod(++i);
	printf("%d\n",i);
	printf(" %d %d\n",j,k);
}
