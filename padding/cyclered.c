#include<stdio.h>
#pragma pack(1)
struct rect
{
	char x;
	char y;
	int z;
};
int main()
{
	struct rect r;
	printf("%zu\n",sizeof(r));
}
