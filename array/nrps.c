/*
Name: Arul P
Date: 09.11.2024
Description: Generating consecutive NRPS of length of n ny using k distinct character
Input: Enter the number characters C : 3
        Enter the Length of the string N : 6
        Enter 3 distinct characters : a b c
Output: Possible NRPS is abcbca
*/

#include <stdio.h>
void nrps(char [], int, int);
int main()
{       
        // getting inputs
        int k,l;
        printf("Enter the number characters C: ");
        scanf("%d",&k);
        printf("Enter the Length of the string N: ");
        scanf("%d",&l);
        char arr[k];
        printf("Enter %d distinct characters:\n",k);
        for(int i=0; i<k; i++)
        {
                scanf(" %c",&arr[i]);
        }

        // checking if the elements are unique   
        for(int i=0; i<k; i++)
        {
                for(int j=i+1; j<k; j++)
                {
                        if(arr[i]==arr[j])
                        {
                                printf("Error : Enter distinct characters\n");
                                return 0;       // terminating function if elements not unique
                        }
                }
        }
        nrps(arr,k,l);
}

void nrps(char* arr, int k, int l)
{
        int count=0;
        int temp;
        printf("Possible NRPS is ");
        while(count<l)
        {
                if(count)       // array elements won't be swaped in first iteration since count is 0
                {
                        temp=arr[0];
                        arr[0]=arr[1];
                        arr[1]=temp;
                }
                
                for(int i=0; count<l  && i<k; i++,count++)      // incrementing count by one after printing 
                {
                        printf("%c",arr[i]);
                }
        }
}
