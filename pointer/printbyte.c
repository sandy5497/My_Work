#include<stdio.h>
int main()

{ long long a;
	printf("enter the hex value\n");
	scanf("%x",&a);
	char *ptr=&a,ch;
	printf(" ch=%x    %d\n",ch=*ptr++);
	printf(" ch=%x    %d\n",ch=*++ptr,ch);
	printf(" ch=%x    %d\n",ch=++*ptr,ch);
	printf(" ch=%x    %d\n",ch=*(ptr++),ch);
	
	printf(" ch=%x    %d\n",ch=*ptr,ch);
/*	printf(" ch=%x    %d\n",ch=++*ptr);
	printf(" ch=%x    %d\n",ch=*ptr);
	ptr++;
	ptr++;
	printf(" ch=%x    %d\n",ch=--*ptr);
	ptr++;
	printf(" ch=%x    %d\n",ch=*ptr++);
	printf(" ch=%x    %d\n",ch=++*ptr);*/
	printf("printf ch=%x    %d\n",a,a);
}


		
