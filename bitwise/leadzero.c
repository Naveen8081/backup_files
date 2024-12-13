#include<stdio.h>

int main()
{
	int num;
	printf("Enter Number:\n");
	scanf("%d",&num);
	int count=0;
	for(int i=31; i>=0; i--)
	{
		if((num & (1<<i)))
			break;	
		count++;
	}
	printf("LEADING ZEROs:%d\n",count);

}
