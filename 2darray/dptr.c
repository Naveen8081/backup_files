#include<stdio.h>

void fun(int** );

int main()
{
	int a[3]={1,2,3};
	int b[3]={4,5,6};
	int c[3]={7,8,9};

	int* arr[3]={a,b,c};
	fun(arr);

}


void fun(int **ptr)
{
	printf("%d\n",*(*(ptr+1)));


}
