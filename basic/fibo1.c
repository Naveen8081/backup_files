#include<stdio.h>
int main()
{
    int f=0;
    int s=1;
    int next=0;
    int limit;
    printf("Enter a number: ");
    scanf("%d ",&limit);
    if(limit>0)
        while(limit>next)
        {   
            printf("%d",next);
            f=s;
            s=next;
            next=f+s;
            
        }
            
    else
        printf("Invalid input");
}
