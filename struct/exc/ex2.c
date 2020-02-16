#include<stdio.h>
struct course
{
	int courseno;
	char coursename[25];
};
int main()
{
	struct course c[]={
				{102,"thermal"},{103,"Manufacturing"},{104,"Design"}
	};
	printf("%d",c[1].courseno);
	printf("%s\n",(*(c+2)).coursename);
}


