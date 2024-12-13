/*
Name: Arul P
Description: Printing if the element is prime or not based on the return value from is_prime function
Date: 10.10.2024
Input: Enter a number: 47
Output: 47 is a prime number
*/
#include <stdio.h>

int is_prime(int);

int main()
{
	int num;
	// printf("Enter a number:");
	scanf("%d",&num);
	if(num>0)
	{
		if(is_prime(num)==1)    //checking the return return value from is_prime function
			printf("%d is a prime number",num);
		else
			printf("%d is not a prime number",num);
	}
	else
	{
		printf("Invalid input");
	}
	return 0;
}

int is_prime(int num)
{	
	for(int i=2;i<num;i++)
	{
		if(num!=2 && num%i==0)
			return 0;		
		else
			return 1;   //return 1 if num is prime
	}
}

