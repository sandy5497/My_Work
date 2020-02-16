//WAP to search substring in main string and eliminate the extra occurance
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50],str2[50],*ptr1,*ptr2;
	int found=0;
	puts("enter the main string:");
	gets(str1);
	puts("enter substring to find in main:");
	gets(str2);
	ptr1=str1;
	while(ptr1=strstr(ptr1,str2)){
					if(found==0){ found++;
							ptr1+=strlen(str2);
					}

					else { 
						memmove(ptr1,ptr1+strlen(str2),(strlen(ptr1)-strlen(str2))+1);
						
					}
	}
	printf("main string after eliminating:");
			
	puts(str1);
}
