#include <stdio.h>

void fun(int*,int, int*, int*);

int main()
{
	int size;
	printf("Enter the size:");
	scanf("%d",&size);
	printf("Enter elements into the array:");

	int arr1[size];
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr1[i]);
	}

	int new_size;
	int arr2[size];
	fun(arr1,size,arr2,&new_size);

	for(int i=0;i<new_size;i++)
	{
		printf("%d ",arr2[i]);
	}
}

void fun(int arr1[], int size, int arr2[], int *ptr)
{
	*ptr=0;
	for(int i=0;i<size;i++)
	{
		int flag=0;
		for(int j=0;j<*ptr;j++)
		{
			if(arr1[i]==arr2[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
			arr2[(*ptr)++]=arr1[i];

	}
	

}
