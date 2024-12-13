#include<stdio.h>
int main()
{
int i,j,n;
scanf("%d",&n);
/*
for(i=n;0<i;i--)
{
	for(j=0;j<i;j++)
	{
		printf("*");
	}
	printf("\n");
}
*/
for(i=0;i<n;i++)
{
	for(j=n;j>0;j--)
	{
		printf("*");
	}
	printf("\n");
}

}
