#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
for(int i=1;i<=n;i++)
{
    if(i==n/2+1||i==1||i==n)
    {
        for(int j=1;j<=n;j++)
        {
                 printf("*");
        }
    }
    else
    {
        for(int k=1;k<=n;k++)
        {
        if(k>1&&k<n)
            printf(" ");
        else
            printf("*");
        }
    }
    printf("\n");
}
}

