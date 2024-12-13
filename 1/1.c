#include<stdio.h>
void fun();
static int x=45;
int main()
{
	fun();
	printf("%d",x);
}
