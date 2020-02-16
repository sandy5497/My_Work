#include<stdio.h>
int d;
	extern int g;
void f1(void);
int main()
{
 	int g=8;
//static int v=20;
	f1();
	printf("%d\n",g);
	f1();
	printf("%d\n",g);
	f1();
	printf("%d\n",g);
}

void f1(void )
{  
 	int g;
	g++;
	g++;
	printf("%d\n",g);
}

