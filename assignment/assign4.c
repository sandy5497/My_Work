#include<stdio.h>
int main()
{ char c=0;

		printf("character\tdecimal value\n");
first:	        printf("%c\t\t%d\n",c,c);c++;
                if((c>=0)&&(c<=128))goto first;
		return 0;
}
       	
