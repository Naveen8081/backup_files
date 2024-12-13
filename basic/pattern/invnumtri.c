#include<stdio.h>
int main()
{
int i,j,num;
scanf("%d",&num);
for(i=0;i<num;i++)
{
	for(j=num;j>i;j--)
	{
	printf("%d",i);
	}
	printf("\n");
}
}
