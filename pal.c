#include<stdio.h>
#include<string.h>
int palindrome(char *p)
{
	int i,j,n;
	n=strlen(p);
	for(i=0,j=n-1;i<n;i++,j--)
		if(p[i]!=p[j])return 0;
	return 1;

}

int main()
{
	int p;

	char str[50];
	puts("enter string");
	gets(str);
	p=palindrome(str);
	if(p)puts("palindrome");
	else puts("not palindrome");
	return 0;
}
