#include<stdio.h>
#include<stdlib.h>
int main()
{
	int data,choice,res,a=1,bitpos,rev;
	while(1){
	printf("-----------MENU--------------\n");
	printf(" choose any one of option\n");
	printf(" 1. SET BIT\n 2. CLEAR BIT\n 3. COMPLIMENT BIT\n 4. EXIT\n");
	scanf("%d",&choice);
	printf("enter the data");scanf("%d",&data);
	switch(choice)
	{
		case 1: printf("enter bit position from 1 to 31\n");
			scanf("%d",&bitpos);
			res=(a<<bitpos)|data;
			printf("result=%d\n",res);break;

		case 2: printf("enter bit position from 1 to 31\n");
			scanf("%d",&bitpos);a=0;
			res=(a<<bitpos)&data;
			printf("result=%d\n",res);break;

		case 3: printf("enter bit position from 1 to 31\n");
			scanf("%d",&bitpos);a=1;
			res=(a<<bitpos)^data;
			printf("resuli=%d\n",res);break;
			
		case 4: exit(0);

		default:printf("enter valid choice");
	}
	}
	return 0;
}
			
