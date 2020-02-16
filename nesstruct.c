#include<stdio.h>
struct stu
{ int id;
	char name[20];
};
struct stu showstu()
{struct stu s={'a',"sandeep"};
	return s;

}
int main()
{ struct stu st=showstu();
	printf("%d\n%s",st.id,st.name);
	return 0;
}

