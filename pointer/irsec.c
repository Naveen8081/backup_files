#include<stdio.h>
void irsec(int ,int* ,int ,int*);
int main()
{
	int size1;
	printf("Enter array1 size:\n");
	scanf("%d",&size1);
	int arr1[size1];
	printf("Enter array1 elements:\n");
	for(int i=0;i<size1;i++)
	{
		scanf("%d",&arr1[i]);
	}


	int size2;
	printf("Enter array2 size:\n");
	scanf("%d",&size2);
	int arr2[size2];
	printf("Enter array2 elements:\n");
	for(int i=0;i<size2;i++)
	{
		scanf("%d",&arr2[i]);
	}

	irsec(size1,arr1,size2,arr2);


}
void irsec(int size1,int *arr1,int size2,int *arr2)
{
	//int irsecarr[size1];
	int count=0;
	int flag;
	for(int i=0;i<size1;i++)//iterating arr1 elements for compa.
	{
		flag=0;
		for(int j=0;j<size2;j++) //interating arr2 ele for comp.
		{
			if(arr1[i]==arr2[j])	//if arr1 ele. and arr2 ele. matches
			{
				flag=1;
				break;
			}			
		}
		if(flag==1)
		{
			int flag2=0;
			for(int j=0;j<count;j++)
			{
				if(arr1[j]==arr1[i])
				{
					flag2=1;
					break;
				}
			}
			if(flag2==0)
			arr1[count++]=arr1[i];
		}		

		
	} 
	
	for(int i=0;i<count;i++)
	{
		printf("%d ",arr1[i]);
	}
}

