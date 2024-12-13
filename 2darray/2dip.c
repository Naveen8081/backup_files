#include<stdio.h>

int main()
{
	int r,c;
	printf("Enter row and column:\n");
	scanf("%d %d",&r,&c);
	int arr[r][c];

	printf("Enter elements\n");	
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
        for(int i=0; i<r; i++)
        {
                for(int j=0; j<c; j++)
                {
                        printf("%d",arr[i][j]);
                }   
		printf("\n");
        }
	
	float average=0;

	for(int i=0; i<r; i++)
        {
                for(int j=0; j<c; j++)
                {
                        average=average + arr[i][j];
                }
        }

	printf("Average=%f\n",average/(r*c));

}
