#include<stdio.h>
#include<stdlib.h>

int main()
{
	int r;
	printf("Enter no. of rows\n");
	scanf("%d",&r);
	
	int** p=malloc(r*sizeof(int*));


	int clmsize[r];
	for(int i=0;i<r ;i++)
	{
		printf("Enter num of elements in %d row\n",i+1);	
		scanf("%d",&clmsize[i]);	
		p[i]=malloc((clmsize[i])*(sizeof(int)));
	}

	for(int i=0; i<r; i++)
	{
		printf("Enter %d elements of %d row\n",clmsize[i],i+1);
		for(int j=0;j<clmsize[i]; j++)
		{
			scanf("%d",&p[i][j]);
		}
	}

        for(int i=0; i<r; i++)
        {
                for(int j=0;j<clmsize[i]; j++)
                {
                      printf(" %d",p[i][j]);
                }   
		printf("\n");
        }

	int sum;
	for(int i=0; i<r; i++)
        {
		sum=0;
                for(int j=0;j<clmsize[i]; j++)
                {
                      sum=sum+p[i][j];
                }
                p[i][j+1]=sum;
        }
}
