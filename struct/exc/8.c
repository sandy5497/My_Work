#include<stdio.h>
#include<string.h>
int main()
{
	union tag
		{
			char name[15];
			int age;
		}rec;
	strcpy(rec.name,"somalika");
	rec.age=23;
	printf("NAME %s\n",rec.name);
}
