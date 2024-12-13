#include<stdio.h>
void noprime(int size,int arr1[]);
int main()
{
	int size;
	printf("Enter arr size:\n");
	scanf("%d",&size);
	int arr[size];

	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
//	printf("\nThe address:%\n",sizeof(arr));
	printf("\n%p\n",&arr);
		
	noprime(size,arr);

}

void noprime(int size,int arr1[])
{
	printf("\n size of arr1 %d\n",sizeof(arr1));
	printf("\n%p\n",arr1);
//	arr1=(int *)5;
	int count =0;
	for(int i=0;i<size;i++)
	{	
		
		for(int j=2;j<=arr1[i]/2;j++)
		{	
			if( arr1[i]%j==0 )
			{
				arr1[count]=arr1[i];
				count++;
				break;
			}	
		}
	}
	for(int i=0;i<count;i++)
	{
		printf("%d ",arr1[i]);
	}

}
