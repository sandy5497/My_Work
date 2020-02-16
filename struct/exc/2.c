#include<stdio.h>
#include<stdlib.h>
int main()
{
	struct rec
	{
		char *name;
		int age;
	}*ptr;
	char name[20]="somalika";
	ptr=(struct rec *)malloc(sizeof(struct rec));
	ptr->name=name;
	ptr->age=93;
	printf("%s\t",ptr->name);
	printf("%d\n",ptr->age);
}
