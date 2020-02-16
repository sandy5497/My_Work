#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void checknum(char *ptr)
{
	char *temp=ptr;
	int i,j;
	for(i=0;temp[i]!='.';i++)
	{
		if(!isdigit(temp[i]))
		{
					puts("invalid input");
					exit(0);
		
		}
	}
	for(j=i+1;temp[j];j++)
	{

		if(!isdigit(temp[j]))
		{
					puts("invalid input");
					exit(0);
		}
	}
}

float myatof(char *ptr)
{
	char *temp=ptr;
	int i,j,k=1;float res1=0,res2=0;
	for(i=0;temp[i]!='.';i++)
	{
		res1=res1*10+(temp[i]-48);
	}
	j=i+1;
	for(;temp[j];j++)
	{
		res2=res2*10+(temp[j]-48);
		k=k*10;
	}
	res2/=k;
	return (res1+res2);
}

int main()
{
	char str[100];
	float num;
	puts("enter floating point value");
	gets(str);
	checknum(str);
	num=myatof(str);
	printf("%f\n",num);
}
