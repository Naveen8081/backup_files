#include<stdio.h>
int main()
{
	int arr[4]={1,2,3,4};

	int *ptr=arr;
		
	int* ptr2=&arr;
	
	printf("ptr:%p\n",ptr+1);
	printf("ptr2:%p\n",ptr2+1);


}
