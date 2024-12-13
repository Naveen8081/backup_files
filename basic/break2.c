/*
Output:

	0
	0 1
	0 1 2
	0 1 2 3
*/


#include<stdio.h>
int main()
{
int i,j;
for(i=0;i<4;i++)
{
	for(j=0;j<4;j++)
	{
	printf("%d",j);
	if(i==j)
		break;
	}
	printf("\n");
}
}
