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

        for(int i=0; i<r; i++)
        {
		max=arr[i][0];
                for(int j=1; j<c; j++)
                {
                        if(arr[i][j] > max)
				max=arr[i][j];
                }
		printf("Max of row %d is %d\n",i,max);
        }

	int min;
        for(int i=0; i<r; i++)
        {
                min=arr[i][0];
                for(int j=1; j<c; j++)
                {
                        if(arr[i][j] < min)
                                min=arr[i][j];
                }
                printf("Min of row %d is %d\n",i,min);
        }

	



}

