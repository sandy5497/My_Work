#include<stdio.h>
#include<string.h>
int main()
{
	printf("%c\n","determination"[2]);
	printf("%c\n",*("determination"+2));
	printf("%s\n","determination"+2);
	printf("determination"+2);
	printf("\t");
	printf("determination"+strlen("deepali"));
	printf("\t");
	printf("determination"+sizeof("Deepali"));
	printf("\n");
	return 0;
}
