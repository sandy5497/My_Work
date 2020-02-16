///WAP to eleminate all nonalphabet in aoccurance of the character string.
#include<ctype.h>
#include<stdio.h>
#include<string.h>
int main()
{ char str[50],*ptr;
	puts("enter the string");
	gets(str);
	for(ptr=str;*ptr;ptr++)
	{ if(!isalpha(*ptr)){ memmove(ptr,ptr+1,strlen(ptr+1)+1);
				    ptr--;
			    }

	}
	puts(str);
}
