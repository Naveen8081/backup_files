/*
Name: Arul P
Description: Finding median of two unsorted arrays
Date: 04.10.2024
Input:  Enter the 'n' value for Array A: 5
Enter the 'n' value for Array B: 5
Enter the elements one by one for Array A: 3 2 8 5 4
Enter the elements one by one for Array B: 12 3 7 8 5
Output: Median of array1 : 4
Median of array2 : 7
Median of both arrays : 5.5    
 */
#include<stdio.h>
int main()
{
	int n,m;
	printf("Enter the 'n' value for Array A:\n");
	scanf("%d",&n);
	printf("Enter the 'n' value for Array B:\n");
	scanf("%d",&m);
	int a[n];
	int b[m];
	
//reading each elements of array

	printf("Enter the elements one by one for Array A:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the elements one by one for Array B:\n");
	for(int j=0;j<m;j++)
	{
		scanf("%d",&b[j]);
	}

// sorintg two independent arrays

	int temp;
	for(int k=0;k<n-1;k++)
	{
		for(int l=0;l<n-k-1;l++)

		{
			if(a[l]>a[l+1])
			{
				temp=a[l];
				a[l]=a[l+1];
				a[l+1]=temp;
			}
		}
	}
	for(int k=0;k<m-1;k++)
	{
		for(int l=0;l<m-k-1;l++)

		{
			if(b[l]>b[l+1])
			{
				temp=b[l];
				b[l]=b[l+1];
				b[l+1]=temp;
			}
		}
	}

// median of each arrays

	float medn;
	if(n%2==0)
		medn=(float)(a[(n/2)-1]+a[(n/2)])/2;
	else
		medn=a[n/2];
	printf("Median of array1:%g\n",medn);

	float medm;
	if(n%2==0)
		medm=(float)(b[(m/2)-1]+b[(m/2)])/2;
	else
		medm=b[m/2];
	printf("Median of array2:%g\n",medm);

//median of both arrays		

	float median;
	median=(float)(medn+medm)/2;
	printf("Median of both arrays :%g",median);
}
