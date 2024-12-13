#include<stdio.h>

int main()
{
	int num;
	printf("Enter number in Hex:\n");
	scanf("%x",&num);
	printf("%x\n",num);
	// ABCD1234
	// 3412CDAB
	int val=0x00;
	for(int i=0; i<sizeof(num)/2; i++)
	{
		int res=num & (0xff<<i*8);
		printf("res:%x\n",res);
		printf("mask:%x\n",0xff<<i*8);

		res= res << ((i)*8);

		printf("RES:%x\n",res);
		val= val | ( res);
		printf("val:%x\n",val);

		printf("\n");
	}

	printf("%x\n",val);


}
