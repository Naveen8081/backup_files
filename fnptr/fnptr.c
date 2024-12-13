#include<stdio.h>
int fun(int,int );

int main()
{
	int sum=fun(3,4);
	printf("%d",fun(3,4));
	printf("%p\n",printf);
	printf("%p\n",main);
	printf("%p\n",fputc);
}

int fun(int a, int b)
{

	return a+b;
}
