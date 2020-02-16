#include<stdio.h>
struct st{
	char ch:2;
	int i:2;
	double d;
}st;
struct st1{
	char ch;
unsigned int i:33;
	long i2:2;
}st1={'c',26,26};

int main()
{
	printf("%c %u %ld\n",st1.ch,st1.i,st1.i2);
//	printf("%p %p %p\n",&st1.ch,&st1.i,&st1.i2);
	printf("%d %d\n",sizeof(struct st),sizeof(struct st1));
}
