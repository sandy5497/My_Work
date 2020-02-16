#include<stdio.h>
void func(char str[])
{
	str=str+5;
	puts(str);
}
int main()
{
	char str[]="vijaynagar";
	func(str);
	return 0;
}

