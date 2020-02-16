#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr=NULL,i;
	char *p=NULL;
	ptr=calloc(5,4);
	if(ptr==NULL)
	{
		printf("mem allo failed");
		exit(0);
	}
	printf("enter the 5 element\n");

	for(i=0;i<5;i++)
		scanf("%d",&ptr[i]);
	for(i=0;i<5;i++)
		printf("%d  ",ptr[i]);
	p=ptr;
	for(i=0;i<5;i++)
	printf("\n%p\n",ptr++);
		
	p++;
	printf("\n%p\n",p);
}
