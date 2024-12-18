#include<stdio.h>
typedef int* int_ptr;
int main()
{
	int_ptr p,q,r;
	printf("%zu %zu %zu\n",sizeof(p),sizeof(q),sizeof(r));
}

