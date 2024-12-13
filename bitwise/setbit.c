#include<stdio.h>

int main()
{
	int num,pos;
	printf("Enter Num & Set Pos\n");
	scanf("%d %d",&num,&pos);
	
	if(num & (1<< pos))
		printf("Already set\n");
	else
	{
		int var= num | (1<< pos);
		printf("NUM after SETTING bit:%d\n",var);
	}

	printf("NUM after CLEARING bit:%d\n", num & (~(1<<pos)));
	

}

