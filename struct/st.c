#include<stdio.h>
int main()
{
	struct a
	{
		int i;
		char *str;
	};
	struct a t;
	scanf("%s %d",t.str,&t.i);
	printf("%s %d\n",t.str,t.i);



}
