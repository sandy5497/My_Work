#include<stdio.h>
enum option1{
	yes,
	no,
	maybe
};
enum option2{
	yes,
	maybe
};
int main()
{
	option1 x,option y;
	x=maybe;
	y=yes;
	printf("%d",y);
}
	
