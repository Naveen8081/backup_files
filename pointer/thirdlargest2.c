/*
Name: Arul P
Description: Finding third largest element in an array
Date: 22.10.2024
Input: Enter the size of the Array : 5
        Enter the elements into the array: 5 1 4 2 8
Output: Third largest element of the array is 4
*/
#include <stdio.h>

int third_largest(int [], int);

int main()
{
    int size, ret;
    
    //Read size from the user
    printf("Enter the size of the array :");
    scanf("%d", &size);
    
    int arr[size];
    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    //funtion call
    ret = third_largest(arr, size);
    
    printf("Third largest element of the array is %d\n", ret);
}

int third_largest(int* arr, int size)
{
      
        int temp=arr[0];
        for(int i=1;i<size;i++)
        {
                if(temp<arr[i])
                {
                    temp=arr[i];
                }
        }

        //int temp2=arr[0];
        int temp2=arr[0];
        for(int j=0;j<size;j++)
        {
                if(arr[j]==temp)
                {   
                    //printf("\n%d\n",temp);
                    continue;
                }
                if(temp2<arr[j])
                {    
                    temp2=arr[j];
                }
        }
        //printf("\n%d\n",temp2);

        // temp=arr[0];
        temp=arr[0];
        for(int k=0;k<size;k++)
        {
                if(arr[k]>=temp2)
                        continue;
                if(temp<arr[k])
                        temp=arr[k];
        }

        return temp;
}
