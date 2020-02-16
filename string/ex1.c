#include<stdio.h>
#include<string.h>
int main()
{ char b[20]="VECTOR.123";
	int i;
	printf("%s\n",b);
	printf("%s\n",b+5);
	b[6]=0;
	printf("%s\n",b);
	printf("%s\n",b+5);
	printf("%s\n",b+7);
	b[3]='\0';
	printf("%s\n",b);
	printf("%s\n",b+1);
	printf("%s\n",b+3);
	printf("%s\n",b+4);
	printf("%s\n",b+8);


}
