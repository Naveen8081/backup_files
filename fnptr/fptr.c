#include<stdio.h>

void fun()
{
	printf("HI\n");
}

int main()
{
	void (*fptr)()=&fun;
	(*fptr)();
}
