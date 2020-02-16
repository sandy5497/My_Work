#include<stdio.h>
int main()
{ 
	int arr[]={10,20,36,72,87,20};
	int *j,*k;
	j=&arr[4];
	k=(arr+4);
	if(j==k)printf("the two pointer points same");
	else printf("not points same addres:");
}
