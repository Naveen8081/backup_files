#include<stdio.h>

int sumofmaxmin(int,int,int (*)[]);

int main()
{
        int r,c;
        printf("Enter row and column:\n");
        scanf("%d %d",&r,&c);
        int arr[r][c];

//	int(*ptr)[c]=&arr;
        printf("Enter elements\n");
        for(int i=0; i<r; i++)
        {
                for(int j=0; j<c; j++)
                {
                        scanf("%d",&arr[i][j]);
                }
        }
	int ret=sumofmaxmin(r,c,&arr);
}

int sumofmaxmin(int r,int c, int arr[r][c])
{
	int maxofrows=0;
	int max;
	for(int i=0; i<r; i++)
        {   
		max=arr[i][0];
                for(int j=0; j<c; j++)
                {
			if(max<arr[i][j])
				max=arr[i][j];
                }  
		 if(maxofrows<max)
			maxofrows=max;
        }

	int minofrows=0;
	int min;	
	for(int i=0; i<r; i++)
	{
		min=arr[0][j];
		for(int j=0; j<c; j++)
                {
                        if(max<arr[i][j])
                                max=arr[i][j];
                }
                 if(maxofrows<max)
                        maxofrows=max;


	}
   
}
