#include<stdio.h>
typedef char arr[1024];
int main()
{
	arr buff1;
	printf("%zu\n",sizeof(buff1));
	arr buff2={0};
	printf("%d\n",buff2[1]);

}
