#include<stdio.h>
#include<stdlib.h>
int main()
{

	int i,n,*p;
	puts("enter the number of integer to be entered");
	scanf("%d",&n);
	p=(int *)malloc(n * sizeof (int));
	printf("%u\n",p);
	printf("%lu\n",sizeof p);
	printf("%lu\n",sizeof *p);
	for(i=0;i<n;i++){
		printf("enter an integer");
		scanf("%d",&p[i]);
	}
	for(i=0;i<n;i++)
	printf("%d\n",p[i]);
return 0;	
}
