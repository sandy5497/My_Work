//wap to add two binary value input from user with proper error message display
#include<stdio.h>
#include<string.h>
#include<math.h>

int checkBin(char str[])
{
	int i;
	for(i=0;str[i];i++){if(!((str[i]=='0')||(str[i]=='1'))){puts("invalid input,enter only bin");return 1;}}
	return 0;
}

long  BinToInt(char str[])
{
	int n,i,j,sum=0;
	n=strlen(str);printf("%d\n",n);
	for(i=0,j=n-1;i<n;i++,j--)
		sum+=(1<<i)*(str[j]-48);
	printf("%d\n",sum);
	return sum;
}
void Bineq(long r)
{
	int bit=31,i;
	for(i=0;i<32;i++,bit--)
		{printf("%d",(r>>bit)&1);if(bit%4==0)printf(" ");}
	 

}
int main()
{ 
	char str1[32],str2[32];
	long num1,num2,r;
	
lable1:	puts("enter binary value 1 upto 32 bit");
	gets(str1);
	if(checkBin(str1))goto lable1;
lable2:	puts("enter binary value 2 upto 32 bit");
	gets(str2);
	if(checkBin(str2))goto lable2;
	
	num1=BinToInt(str1);
	num2=BinToInt(str2);
	printf("value 1(%s)=%ld\nvalue 2(%s)=%ld\n",str1,num1,str2,num2);
	printf("Result=%ld\t ",r=num1+num2);
	Bineq(r);
	puts(" "); 
	return 0;
}
