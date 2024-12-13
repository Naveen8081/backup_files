#include<stdio.h>
int diagonalsum(int, int, int(*)[]);

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

	int sum=diagonalsum(r, c, &arr);	
        printf("SUM OF DIAGONAL ELEMENTS:%d\n",sum);

}


int diagonalsum(int r,int c,int arr[r][c])
{
	int sum=0;
        for(int i=0; i<r; i++)
        {
                for(int j=0; j<c; j++)
                {
                        if(i==j || (i+j==r-1))
                                sum=sum+arr[i][j];    
                }
        }    
        printf("SUM OF DIAGONAL ELEMENTS:%d\n",sum);
}
