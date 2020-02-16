
#include<stdio.h>
void func(char (*)[20]);
int main()
{
	char (*p)[20]=NULL;
	func(p);
	return 0;
}
void func(char (*p)[20])
{
	if(p==NULL)
		puts("NULL");
	else puts("address:");
	return ;
}


