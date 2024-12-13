#include<stdio.h>
int main()
{
	int n;
	int largest;
        printf("Enter number of elements:\n");
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);
        }
	largest=arr[0];
	for(int j=0;j<n;j++)
	{
		if(arr[j]>largest)
			largest=arr[j];
	}
	printf("%d\n",largest);
	
}
