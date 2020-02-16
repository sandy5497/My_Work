#include<stdio.h>
struct stu
{ 
	int id;
	char name[20];
	float fee;
}s={1001,"sandeep",25000.00};
int main()
{  printf("%d",s.id);
	printf("%s",s.name);
	printf("%f",s.fee);
	return 0;
}
