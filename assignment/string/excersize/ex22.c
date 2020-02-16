#include<string.h>
#include<stdio.h>
int main()
{
	char *str="Deepali Srivastava";
	int  i=0;
	while(str[++i]);
	printf("%d\n",i);
	return 0;
}
