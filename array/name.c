#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<unistd.h>
int cnt=0;

void input(char *ptr,int n)
{ int i;
	char name[200],ch;
	puts("enter the string want to get");
	gets(name);
	srand(getpid());
	for(i=0;name[i];i++){

	while(name[i]!=(ch=rand()%122));
	ptr[i]=ch;

		cnt++;
		
	}
	ptr[i]='\0';
	return;
}
void print(char *ptr,int n)
{ int i;
	for(i=0;ptr[i];i++)printf("%c",ptr[i]);
	printf("\n");
	printf("loop executes %d times\n",cnt);
	return;
}
int main()
{ char arr[200];
	int n=200;
	input(arr,n);
	print(arr,n);
	return 0;
}
