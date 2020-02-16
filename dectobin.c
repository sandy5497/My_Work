#include<stdio.h>
int main()
{
	int data,bit;
	puts("enter the no.");scanf("%d",&data);
	bit=sizeof(int)*8-1;
	printf("binary equivlent of th %d: ",data);
       do            {
                     printf("%d",(data>>bit)&1);
                     if(bit%4==0)printf(" ");
                     bit --;
             	     }
       while(bit>=0);
      return 0;
}      
