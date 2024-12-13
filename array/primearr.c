/*
Name: Arul P
Description: Finding prime numbers within n limit using the sieve of Eratosthenes
Date:09.10.2024
Input: Enter the value of 'n' : 20
Output: The primes less than or equal to 20 are : 2, 3, 5, 7, 11, 13, 17, 19
*/
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value of 'n':");
	scanf("%d",&n);
	if(n<0)
	{
		printf("Please enter a positive number which is > 1\n");
	}

	else
	{	
		n=n-1;
		int a[n];
		int j=2;
		for(int i=0;i<n;i++)
		{
			a[i]=j++;
		}

		for(int i=1;i<=n/2;i++)
		{
			a[i*2]=0;
		}
		for(int i=1;i<=n/3;i++)
		{
			a[i*3+1]=0;
		}

		for(int i=0;i<n;i++)
		{
			if(a[i]!=0)
				printf("%d ",a[i]);
		}
	}
}
