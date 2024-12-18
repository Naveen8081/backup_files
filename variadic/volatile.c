#include<stdio.h>
int main()
{
	volatile unsigned int i;
	int num;
	for(int i=0;i<0XFFFFFFFF;i++)
	{
		num=5;
	}
	printf("%d\n",num);
	return 0;
}
