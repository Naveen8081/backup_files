#include<stdio.h>

int main()
{
        int r,c;
        printf("Enter row and column:\n");
        scanf("%d %d",&r,&c);
        int arr[r][c];

        printf("Enter elements\n");
        for(int i=0; i<r; i++)
        {
                for(int j=0; j<c; j++)
                {
                        scanf("%d",&arr[i][j]);
                }
        }

        int max;

        for(int i=0; i<c; i++)
        {
                max=arr[0][i];
                for(int j=1; j<r; j++)
                {
                        if(arr[j][i] > max)
                                max=arr[j][i];
                }
                printf("Max of clm %d is %d\n",i,max);
        }

        int min;
        for(int i=0; i<c; i++)
        {
                min=arr[0][i];
                for(int j=1; j<r; j++)
                {
                        if(arr[j][i] < min)
                                min=arr[j][i];
                }
                printf("Min of clm %d is %d\n",i,min);
        }
}


