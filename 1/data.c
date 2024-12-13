/*
Name: Arul P
Description: Printing greeting based on time
Date: 14.09.2024
Input: 7
Output: Good morning!
*/
#include<stdio.h>
int main()
{
    char a;
    printf("Enter the hour (0-23): ");
   // scanf("%c",&a);
   // printf("%d",a);
    a = getchar();
    a = a - 48;
    if(a>=5 && a<=11)
    printf("Good morning!");
    else if(a>=12 && a<=15)
    printf("Good afternoon!");
    else if(a>=16 && a<=21)
    printf("Good evening!");
    else if(a>=4 && a<=23)
    printf("Good night!");
    else
    printf("Invalid hour!");
}
