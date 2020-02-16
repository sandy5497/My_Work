#include<stdio.h>
#include<stdlib.h> 
#include<ctype.h>
#include<unistd.h>
void  countChar(char *,int *,int *,int *,int);

void input(char *ptr,int n)
{ int i;
	srand(getpid());
	for(i=0;i<n;i++)
		ptr[i]=rand()%128;
	return ;
}

void print(char *ptr,int n)
{ int i;
	for(i=0;i<n;i++)printf("%c,",ptr[i]);
	printf("\n");
	return;
}

int main()
{ char arr[20];
	int cntAlph=0,cntDigit=0,cntSchar=0;
	int n=sizeof arr/sizeof *arr;
	input(arr,n);
	print( arr,n);
	countChar(arr,&cntAlph,&cntDigit,&cntSchar,n);
	printf("\ncount value Alpha:%d ..Digit:%d ..Spl char: %d\n" ,cntAlph,cntDigit,cntSchar);
	return 0;
}
 
void countChar(char *ptr,int *Alpha,int *Digit,int *SplC,int n)
{ int i=0;
	for(i=0;i<n;i++){
		if(isalpha(ptr[i]))++*Alpha;
		else if(isdigit(ptr[i]))++*Digit;
		else ++*SplC;
	}
return;
} 

	 
