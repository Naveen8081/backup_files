#include<stdio.h>
int main()
{
        int size;

        //Read size from the user
        printf("Enter the size of the array :");
        scanf("%d", &size);

        int arr[size];

        for(int i=0;i<size;i++)
        {
                scanf("%d",&arr[i]);
        }
	
	int temp=arr[0];
	for(int i=0;i<size;i++)
	{
		if(temp<arr[i])
			temp=arr[i];
	}

	int temp2=arr[0];	
	for(int j=0;j<size;j++)
	{
		if(arr[j]==temp)
			continue;
		if(temp2<arr[j])
			temp2=arr[j];
	}

	temp=arr[0];	
	for(int k=0;k<size;k++)
	{
		if(arr[k]>=temp2)
			continue;
		if(temp<arr[k])
			temp=arr[k];
	}
	printf("\n%d\n",temp);     
}

