#include<stdio.h>

void print_binary(void*);
int main()
{
	float a=-1.1;

	void *p=&a;	

	print_binary(p);
}

void print_binary(void* p)
{
	int* fp=p;
	printf("%d\n",*fp);
}
