#include<stdio.h>
int main()
{ int a=1,b;b= ++a + ++a + ++a + ++a + ++a + ++a;
printf("%d %d ",a,b);
//printf("%d %d %d %d %d ", a++,++a,a++,a,++a);
	return 0;
}
