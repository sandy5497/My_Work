#include<stdio.h>
#include<string.h>
char * strrev(char b[])
{ static char c[100];
	int i,j;
	char temp;
	for(i=0;b[i]!='\0';i++);printf("%d\n",i);
	for(i--,j=0;j<i;j++,i--){
		temp=b[j];
		b[j]=b[i];
		b[i]=temp;
	}
	return b;
}
	
int main()
{ char a[100],b[100];
	int i;
	printf("enter the string");
	gets(a);
	strcpy(b,a);
	printf("%s\n",strrev(b));
	
	if (strcmp(b,a)==0){printf("it is palindrome\n");}
	else {printf("not a palindrome\n ");}
	return 0;
}

