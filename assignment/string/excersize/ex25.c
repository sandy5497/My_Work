#include<stdio.h>
void func(char *p)
{
	if(*p)
	{
		func(p+1);
		printf("%c",*p++);
	}
}
int main()
{

	char *str="tap";
	func(str);
	return 0;
}
