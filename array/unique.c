#include<stdio.h>
void printunique(int*, int);

int main()
{
	int size;
	printf("Enter array size: (should be odd!)\n");
	scanf("%d",&size);	
	
	int arr[size];
	printf("ENTER ARRAY ELEMENTS\n");
	for(int i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}

	printunique(arr, size);
}

void printunique(int* arr, int size)
{
	int count;
	printf("UNIQUE ELEMENTS:");
	for(int i=0; i<size; i++)
	{
		count=0;
		for(int j=0; (j<size) && (count<2); j++)
		{
			if(arr[i]==arr[j])
				count++;
		}
		if(count==1)
			printf("%d ",arr[i]);
	}
	printf("\n");
}

