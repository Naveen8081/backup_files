#include<stdio.h>
int power(int a,int b);
int main()
{
	int a=3;
	int b=4;
	printf("%d",power(a,b));
}
int power(int a,int b)
{
	if(b<0)
		return a*power(a,b-1);
	else
		return 1;
}
