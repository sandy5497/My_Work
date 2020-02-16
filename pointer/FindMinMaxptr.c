#include<stdio.h>
void findMinMax(long long data,long long *pMin,long long *pMax,long long *pcntMin,long long *pcntMax)
{ long   temp,cur;*pMin=9,*pMax=0,*pcntMin=0,*pcntMax=0;temp=data;
	while(temp!=0){
			cur=temp%10;
			if(cur<=*pMin)*pMin=cur;
			if(cur>=*pMax)*pMax=cur;
			temp/=10;
		}
	while(data!=0){
			if(data%10==*pMin)(*pcntMin)++;
			if(data%10==*pMax)(*pcntMax)++;
			data/=10;
		}
	return;
}
int main()
{ long long n,min,max,cntMin,cntMax;
	printf("enter the num:");

	scanf("%lld",&n);
	findMinMax(n,&min,&max,&cntMin,&cntMax);
	printf("\nInDigit....min=%d..max=%d\n",min,max);
	printf("occu....min=%d......max=%d\n",cntMin,cntMax);
	return 0;
}
