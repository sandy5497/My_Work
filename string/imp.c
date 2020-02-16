#include<stdio.h>
void func(char ptr[])
{
	ptr="sandeep";
	puts(ptr);
}
int main()
{
	char str[20]="sandeep";
	char *ptr="mithilesh";
	
	ptr="gavane";
	puts(ptr);
}
