#include<stdio.h>

int main()
{
	int r,c;
	printf("Enter no. row ands clms\n");
	scanf("%d %d",&r,&c);
	int arr[r][c];	


	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			scanf("%d",&arr[i][j]);	
		}
	}

	int i;
	int j;
	int flag=0;
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{   
			if(arr[i][j]==0)
			{
				flag=1;
				break;
			}		 
		}
		
		if(flag==1)
			break;
	}
	
	for(int k=0; k<r; k++)
	{
		for(int l=0; l<c; l++)
		{
			if(k==i || l==j)
				arr[k][l]=0;
		}
	}

	for(int k=0; k<r; k++)
        {
                for(int l=0; l<c; l++)
                {
                        printf("%d ",arr[k][l]); 
                }
		printf("\n");
        }
}
