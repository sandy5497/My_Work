#include<stdio.h>
int LittleEnd(void)
{ int i=0x01;
	char *ptr=&i;
	return *ptr;
}
unsigned short int CnvtBigEnd(unsigned short int n)
{  if(LittleEnd())
/*	{ char temp,*ptr=&n;
		temp=*ptr;
		*ptr=*(ptr+1);
		*(ptr+1)=temp;
	}*/
	n=(n<<8)|(n>>8);
	return n;
}
int main()
{ unsigned short int n;
	printf("enter the num:");
	scanf("%hu",&n);
	printf("n=0x%x...n=%d\n",n,n);
	n=CnvtBigEnd(n);
	printf("after converting to big Endian\nn=0x%x...n=%d\n",n,n);
       return 0;
}
