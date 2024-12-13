#include<stdio.h>
void printspriral(int, int (*)[]);

int main()
{
	int r,c;
	printf("Enter no rows and colms:\n");
	scanf("%d %d",&r,&c);
	int arr[r][c];
	printf("Enter elements:\n");	

	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
}

void printspiral(int c, int (*ptr)[c])

{}
