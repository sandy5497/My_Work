#include<stdio.h>
void findMinMax(int data,int *pMin,int *pMax,int *pcntMin,int *pcntMax)
{ int max=0,min=9,cntMax=0,cntMin=0,cur,temp;temp=data;
	while(temp!=0){
			cur=temp%10;
			if(cur<=min)min=cur;
			if(cur>=max)max=cur;
			temp/=10;
		}
	while(data!=0){
			if(data%10==min)cntMin++;
			if(data%10==max)cntMax++;
			data/=10;
		}
	*pMin=min;
	*pMax=max;
	*pcntMin=cntMin;
	*pcntMax=cntMax;
	return;
}
int main()
{  int n,min,max,cntMin,cntMax;
	printf("enter the num:");

	scanf("%d",&n);
	findMinMax(n,&min,&max,&cntMin,&cntMax);
	printf("\nInDigit....min=%d..max=%d\n",min,max);
	printf("occu....min=%d......max=%d\n",cntMin,cntMax);
	return 0;
}
