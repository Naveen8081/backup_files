#include<stdio.h>
void rotate(int,int*,int);
int main()
{
	int size;
	printf("Enter array size:\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter array elements:\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}

	int n;
	printf("Enter number of rotations\n");
	scanf("%d",&n);
	

	rotate(size,arr,n);

	for(int i=0;i<size;i++)
        {
                printf("%d ",arr[i]);
        }
}

void rotate(int size,int* arr,int n)
{ 
 	int temp;
        for(int i=0;i<n;i++)
        {
                temp=arr[size-1];
                for(int j=size;j>0;j--)
                {
                        arr[j]=arr[j-1];
                }
                arr[0]=temp;

        }
}
