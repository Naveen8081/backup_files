#include"std.h"
#include<stdlib.h>
int compare(const void* p,const void* q)
{

	return *(int*)p < *(int*)q;	

}

int main()
{
	int arr[5]={1,3,2,4,5};
	qsort(arr, 5,sizeof(int),compare);	
	for(int i=0; i<5; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
