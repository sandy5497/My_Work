#include<stdio.h>
int isPrime(int v)
{ int temp=v,r=2;
	while(temp>r){if((temp%r)==0)return 0;r++;}
	if (temp==r)return 1;
	else return 0;
}
int testAscend(int v)
{ int max=9,r,temp=v;
	while(temp!=0){ r=temp%10;
		        if(r<=max)max=r;
			
			else return 0;
				temp=temp/10;
	}
	return 1;
}
int testDecend(int v)
{ int min=0,r,temp=v;
	while(temp!=0){ r=temp%10;
		        if(r>=min)min=r;
			else return 0;
			temp/=10;
	}
	return 1;
}
int main()
{ int data,temp,min,max;
	printf("enter the min,max:");
	scanf("%d%d",&min,&max);
	while(min<=max)
	{  data=min;
		temp=isPrime(data);
		if ((temp==1)&&((testAscend(data))||(testDecend(data))))printf("\n %d",data);
		min++;
	}
return 0;}
