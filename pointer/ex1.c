#include<stdio.h>
int main()
{  unsigned int v1=300,v2;
	char *ptr=&v1;
	v2=*(int*)ptr;
	printf("v1=%d...v2=%d\n",v1,v2);
	
}
