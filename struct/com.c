#include<stdio.h>
int main()
{
	struct st{
//		char c[20];
		int i;
	}s={2};
	struct st s2;
	s2=s;
	if(s2==s)
		puts("same");
	else 
		puts("different");
}

