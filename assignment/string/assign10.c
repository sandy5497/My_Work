//wap to search substring in a main string and hide all occurance of substring in main
#include<stdio.h>
#include<string.h>
int main()
{ char str1[50],str2[50],*ptr1,*ptr2;
	int n,i,j;
	puts("enter main string:");
	gets(str1);
	puts("enter substring to hide:");
	gets(str2);
	n=strlen(str2);
//	ptr2=str2;
	ptr1=str1;
	while(ptr1=strstr(ptr1,str2)){
			//		memmove(ptr2,ptr1,strlen(str2));
					for(i=0;i<n;i++)
						*(ptr1+i)=42;
					ptr1+=n;
	}
	printf("main string:");
	puts(str1);
}
