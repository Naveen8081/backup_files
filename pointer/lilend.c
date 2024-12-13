#include<stdio.h>
int main()
{
	int x=0x12345678;
	char* p=(char*)&x;
	printf("%x\n",*p);
}
