#include<stdio.h>
struct tag {int i;char c;};
void func(struct tag *);
int main()
{
	struct tag var={12,'c'};
	func(&var);
	printf("%d\n",var.i);
	return 0;
}
void func(struct tag* var)
{
	var->i++;
}
