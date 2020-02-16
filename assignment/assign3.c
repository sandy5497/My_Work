#include<stdio.h>
int main()
{
	char c;
	int d,bit;
        printf("enter the character");
	scanf("%c",&c);
	d=c;

	printf("%c having decimal:%d\thex:%x\toctal:%o\n",c,c,c,c);
       printf("Binary eq. of %c\t:",c);
       bit=sizeof(int)*8-1;
       testbit:
                printf("%d",((c>>bit)&1));
	 if(bit%8==0)printf("  ");
         bit--;  
          if(bit>=0)goto testbit;
 return 0;
} 
