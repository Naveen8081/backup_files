#include<stdio.h>

int main()
{
	int num;
	printf("Enter num\n");
	scanf("%d",&num);
	int count=0;
	int n;
	for(int i=31; i>=0; i--)
	{
		if(num & (1<<i))
		{
			count++;
			if(count>1)
			{
				printf("No, it is not 2^n series\n");
				return 0;
			}
			n=i;
		}
	}
	printf("Yes, it is  2^n series i.e.2^%d\n",n);
}
