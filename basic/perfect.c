#include<stdio.h>
int main()
{
    int num;
    int sum=0;
    int i;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num>0)
    {
        for(i=0;i<=num/2;i++)
        {
            if(num%i==0)
            {
                sum=sum+i;
            }
            
        }
        
    }
    else
    {
        printf("Invalid Input, Enter only positive number");
    }
    
}
