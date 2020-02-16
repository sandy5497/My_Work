#include<stdio.h>
float findHighest(float *ptr)
{ float n,i;
	n=*ptr;
	for(i=1;i<=10;i++)
	{ if(*ptr>n)n=*ptr;
	   printf("%f...",*ptr++);}
	  printf("\n");
	return n;
}
int main()
{ float arr[]={10.5,11.5,12.5,13.5,14.5,15.5,16.5,17.5,18.5,19.5};
	float *ptr=arr;
	printf("%f\n",*ptr++);//10
	ptr++;
	printf("%f\n",*ptr);//12
	printf("%f\n",*arr);//10.5
	printf("%f\n",ptr[2]);//14
	printf("%f\n",ptr[-1]);;//11
	ptr=arr;
	printf("highest no:%f\n",findHighest(arr));
			return 0;
}
