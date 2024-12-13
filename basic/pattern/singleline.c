#include<stdio.h>
int main()
{
    int n;
    int m;
    int i;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {	
    	    if(i<=(n-m)/2||i>m+(n-m)/2)     // checking the index of i where we have to print $
            printf("$");
        else
            printf("*");
    }
    printf("\n");
}
