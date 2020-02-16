#include<stdio.h>
int main()
{ double a[10];
	int i, n=sizeof a/sizeof a[0];
	double *ptr=&a;
	printf("enter %d int:",n);
	for(i=0;i<n;i++)
		scanf("%lf",a+i);
	for(i=0;i<n;i++)
	printf("%lf ,",a[i]);
	*ptr++;
	*++ptr;
	++*ptr;
	++a[0];
	*a;
	a[2]++;
	a[3]=a[9]-a[8];
	for(i=0;i<n;i++)
		printf("\n%lf ,",a[i]);
}

