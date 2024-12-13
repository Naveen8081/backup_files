#include<stdio.h>
int main()
{
char a = 65;
int n;
scanf("%d",&n);
for(int i=1;i<=n*n;i++)
{
    printf("%d ",a);
    a++;
    if (i%2==0)
        a=a-32;
    else
        a=a+32;
    if (i%n==0)
        printf("\n");
}
}
