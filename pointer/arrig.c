#include<stdio.h>
void mergearr(int,int*,int,int*,int*); 
int main()
{
	int size1;
	printf("Enter arr1 size:\n");
	scanf("%d",&size1);
	int arr1[size1];
	printf("Enter array1 elements:\n");
	for(int i=0;i<size1;i++)
	{
		scanf("%d",&arr1[i]);
	}

	int size2;
	printf("Enter arr2 size:\n");
	scanf("%d",&size2);
	int arr2[size2];
	printf("Enter array2 elements:");
	for(int i=0;i<size2;i++)
	{
		scanf("%d",&arr2[i]);
	}

	int mergesize=size1+size2;
	int merged[mergesize];
	printf("\nmerged:%d\n",merged);
	int s3=sizeof(merged)/4;	
	printf("s3:%d\n",s3);

	mergearr(size1,arr1,size2,arr2,merged);
	for(int i=0;i<mergesize;i++)
	{
		printf("%d ",merged[i]);
	}
}
void mergearr(int size1,int arr1[],int size2, int arr2[],int merged[])
{
	/*
	for(int i=0;i<size1;i++)
	{
		merged[i]=arr1[i];
	}
	for(int i=0;i<size2;i++)
	{
		merged[size1+i]=arr2[i];
	}
	*/
	printf("\nmerged:%d\n",merged);
	int s3=sizeof(merged)/4;
	printf("s3:%d\n\n",s3);	

	for(int i=0;i<size1+size2;i++)
	{
		if(i<size1)
			merged[i]=arr1[i];
		else
			merged[i]=arr2[i-size1];
	}
}

