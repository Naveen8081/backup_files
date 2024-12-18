#include <stdio.h>
#include <stdlib.h>
void magic_square(int **, int);

int main()
{
    int n,row,col;
    //printf("Enter a number:");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("Error : Please enter only positive odd numbers");
        return 0;
    }
    //Dynamic memory allocation
    int*ptr=(int)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
        ptr[i]=(int*)calloc(n,sizeof(int));
    }
    //passing ptr to modify the values and n size of the matrix represents row and col
    magic_square(ptr,n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",ptr[i][j]);
        }
        printf("\n");
    }
    //free the dynamically allocated memory 
    for(int i=0;i<n;i++)
    {
        free(ptr[i]);//free each row
    }
    free(ptr);//free the pointer
}
void magic_square(int **ptr, int n)
{
    int row=0,col=n/2;
    //store 1 in 0'th row and middle column(n/2)
    ptr[row][col]=1;
    for(int i=2;i<=n*n;i++)
    {
        //store the current position of row and col
        int prev_row=row,prev_col=col;
        //move row up and col towards right,shortcut for creating n*n magic square
        row--,col++;
        //if no row to move up come to last row
        if(row<0)
        {
            row=n-1;
        }
        //if no column to move twrds right come to 0th column
        if(col>=n)
        {
            col=0;
        }
        //if number is alrdy present come to previous value and insert the new value down from that
        if(ptr[row][col]!=0)
        {
            //move down from the previous position
            row=prev_row+1;
            //keep the same column
            col=prev_col;
        }
        //insert the new value
        ptr[row][col]=i;
    }
}
