#include<stdio.h>

int rev_num(int);

int main()
{
	int num;
	printf("Enter NUM:\n");
	scanf("%d",&num);
	printf("Reversed Number: %d\n",rev_num(num));
}

int rev_num(int num)
{
	static int sum=0;
	static int rem;	
	if(num)
	{
		rem=num%10;
		sum=sum*10+rem;
		rev_num(num/10);
	}
	return sum;
}


