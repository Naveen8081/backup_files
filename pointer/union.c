#include<stdio.h>
void union_(int,int*,int,int*,int*);
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

	int united[size1+size2];   
	union_(size1,arr1,size2,arr2,united);


}

void union_(int size1,int* arr1,int size2,int* arr2,int* united)
{

	for(int i=0;i<size1+size2;i++)
	{
		if(i<size1)
			united[i]=arr1[i];
		else
			united[i]=arr2[i-size1];
	}

	int count=0;
	//int flag=0;
	for(int i=0;i<size1+size2;i++)
	{
		int flag=0;
		for(int j=0;j<count;j++)
		{
			if(united[i]==united[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
			united[count++]=united[i];	
//		printf("%d",count);	
	}	

	for(int i=0;i<count;i++)
	{
		printf("%d ",united[i]);
	}





}
