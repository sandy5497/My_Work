#include<stdio.h>
int main()
{ char str[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int *p,i;
	p=str;
	for(i=0;i<4;i++)
		printf("%c",*p++);
}
