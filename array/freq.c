#include<stdio.h>
int main()
{
	int n;
	int count;
	int flag;
	printf("Enter number of elements:\n");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int j=0;j<n;j++)
	{
		count=0;
		for(int l;l<j;l++)
		{
			flag=0;
			if(arr[l]==arr[j])
			{	flag=1;
				break;
			}
		}
		if(flag==1)
			continue;


		for(int k=0;k<n;k++)
		{

			if(arr[j]==arr[k])
				count++;

		}
		printf("freqency of %d is %d\n",arr[j],count);

	}
}

