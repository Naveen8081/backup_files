#include<stdio.h>
enum bool
{
	false,
	true
};
enum bool even_odd(int x)
{
	if(x%2==0)
	{
		return true;

	}
	else
	{
		return false;
	}
}
int main()
{
	printf("%d %d\n",false,true);
	int x;
	printf("Enter the number: ");
	scanf("%d",&x);
	if(even_odd(x))
		printf("Even\n");
	else
		printf("odd\n");
}
