/*
Name: Arul P
Description: Finding third largest element in an array
Date: 20.10.2024
Input: Enter the size of the Array : 5
Enter the elements into the array: 5 1 4 2 8
Output: Third largest element of the array is 4
*/

#include <stdio.h>

int third_largest(int [], int);

int main()
{
	int size, ret;

	//Read size from the user
	printf("Enter the size of the array :");
	scanf("%d", &size);

	int arr[size];

	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}


	ret = third_largest(arr, size);

	printf("Third largest element of the array is %d\n", ret);
}
int third_largest(int* ptr, int size)
{

	//ptr is the array name

	int smallest=ptr[0];    

	//finding smallest

	for(int i=1;i<size;i++)
	{
		if(ptr[i]<smallest)
		{
			smallest=ptr[i];
		}
	}

	//finding largest 

	int largest=ptr[0];
	for(int i=1;i<size;i++)
	{
		if(ptr[i]>largest)
		{
			largest=ptr[i];
		}
	}    

	//finding second laegest

	int sec_lar=smallest;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			if(ptr[j]>sec_lar && ptr[j]<largest)
			{
				sec_lar=ptr[j];
			}
		}    
	}

	//finding third largest

	int third_lar=smallest;

	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			if(ptr[j]>third_lar && ptr[j]<sec_lar)
			{
				third_lar=ptr[j];
			}
		}    
	}
	return third_lar;

}
