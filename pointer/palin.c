#include<stdio.h>
int ispalin(int*,int*);
int main()
{
	int size;
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}

	if(ispalin(arr,arr+size-1))
		printf("Palindrome\n");
	else
		printf("Not Palindrome\n");
}

/*
int ispalin(int ptr1[],int ptr2[])
{
	while(ptr1<ptr2)
	{
		if(*ptr1!=*ptr2)
			return 0;
		ptr1++;ptr2--;
	}	
	return 1;
	
}
*/

int ispalin(int ptr1[],int ptr2[])
{
	if(ptr1<ptr2)
	{
		if(*ptr1!=*ptr2)
			return 0;
		ispalin(ptr1+1,ptr2-1);
	}
	return 1;	

}
