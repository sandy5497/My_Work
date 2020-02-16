#include<stdio.h>
#include<stdlib.h> 
#include<ctype.h>
#include<unistd.h>
int  countVowel(char *,int);

void input(char *ptr,int n)
{ int i;char ch;
	srand(getpid());
	for(i=0;i<n;i++){
		while(!isalpha(ch=rand()%128));
		ptr[i]=ch;
	}
	return ;
}

void print(char *ptr,int n)
{ int i;
	for(i=0;i<n;i++)printf("%c,",ptr[i]);
	printf("\n");
	return;
}

int main()
{ char arr[20];int ch;
	int n=sizeof arr/sizeof *arr;
	input(arr,n);
	print( arr,n);
	ch=countVowel(arr,n);
	printf("\nvowels count : %d\n" ,ch);
	return 0;
}
 
int countVowel(char *ptr,int n)
{ int cnt=0,i;
	while(n--){ 
                          switch(*ptr){
				  case 'A':
				  case 'E':
				  case 'I':
				  case 'O':
				  case 'U':
				  case 'a':
				  case 'e':
				  case 'i':
				  case 'o':
				  case 'u':cnt++;
						
			  }
			  ptr++;
	}
return cnt;
} 

	 
