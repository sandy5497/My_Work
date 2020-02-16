#include<stdio.h>
int main()
{
	int arr[]={12,13,14,15,16};
	printf("\n %lu %lu %lu\n",sizeof arr,sizeof *arr,sizeof arr[0]);
}
