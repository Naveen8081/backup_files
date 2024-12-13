/*
Name: Arul P
Description: Printing the series depending on the following condition
Date: 18.09.2024
Input: 
Output: 
*/
#include<stdio.h>
int main()
{
    int i=1;
    while(i<=100)
    {
        if(i%3==0 && i%5==0)
        printf(" Fizz Buzz");
        else if(i%3==0 && i%5!=0)
        printf(" Fizz");
        else if(i%5==0 && i%3!=0)
        printf(" Buzz");
        else
        printf(" %d",i);
        i++;
    }
}
