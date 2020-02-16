#include<stdio.h>
#include<string.h>
int cnt=0;

void hextoint(char (*p)[40],long long *q)
{
	int i,j;
	for(i=0,j=strlen(p

int main()
{
	char list[10][40];
	long long num;
	char (*p)[40]=list;
	long long *q=num;
	int i,j;
	for(i=0,j=0;i<10;i++)
		if(p[i][j]=='0'){
					if(p[i][j+1]=='x')hextoint(list,num);
					else if(p[i][j+1]=='b')bintoint(list,num);
					else octaltoint(list,num);
				}
	        else integer(list,num);
		printf("%lld\n",*q);
}

