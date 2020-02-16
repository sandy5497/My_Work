#include<stdio.h>
#pragma pack(1)
struct st
{
	int a:17;
	char c;
	int b:3;
	short int aa:5;
};


int main()
{
	printf("%d\n",sizeof(struct st));
}
