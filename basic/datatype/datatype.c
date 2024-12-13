/*
Author:Arul Periyasamy
Description:Understanding the storage and limits of Data types
*/
#include<stdio.h>
int main()
{
unsigned char a=256;
char b=128;
char c=129;
printf("%d %d %d\n",a,b,c);
}

//127 -128 -127
//overflow
