#include<stdio.h>
#pragma pack(1)
struct 
{
	char a[20];
	int b;
	union
	{
		double c;
		struct
		{
			char d[15];
			float e;
		}x;
	}y;
}z;
int main()
{
	printf("%u %u %u \n",sizeof(z.y.x),sizeof(z.y),sizeof(z));
}
