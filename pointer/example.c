#include<stdio.h>
int main()
{ int v=5000;
	char *ptr=&v;
	printf("v=0x%x...v=%u\n",v,v);
	++*ptr;
	printf("v=0x%x...v=%u\n",*ptr,*ptr);
	*ptr++;
	printf("v=0x%x...v=%u\n",*ptr,*ptr);
	*++ptr;
	printf("v=0x%x...v=%u\n",*ptr,*ptr);
	--*ptr;
	printf("v=0x%x...v=%u\n",*ptr,*ptr);
	ptr++;
	printf("v=0x%x...v=%u\n",*ptr,*ptr);
	++*ptr;
	printf("v=0x%x...v=%u\n",*ptr,*ptr);
	printf("v=0x%x...v=%u\n",v,v);
}

