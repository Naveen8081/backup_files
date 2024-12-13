#include<stdio.h>
int add_dig(int);
int main()
{
	int num;
	scanf("%d",&num);
	printf("%d",add_dig(num));
}

int add_dig(int num)
{
	int rem;
	int sum=0;
	while(num)
	{
		rem=num%10;
		num=num/10;
		sum=sum+rem;
	}
	return sum;
}

