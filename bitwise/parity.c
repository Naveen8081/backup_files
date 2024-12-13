#include<stdio.h>

int main()
{
	int num;
	printf("Enter number\n");
	scanf("%d",&num);
	int countone=0;
//	int countzero=0;

	for(int i=0; i<=31; i++) //lft to ryt
	{
		if(num&(1<<i))
			countone++;
		else
			countzero++;
	}

	printf("ONEs:%d\n",countone);
	printf("ZEROs:%d\n",countzero);
	
	if((countone) & 1)
		printf("ODD PARITY\n");
	else
		printf("EVEN PARITY\n");
}
