#include<stdio.h>
int main()
{
	int num=1;
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i==1||j==1||i+j==n+1)

			{
				printf("%d",num);
				num++;
			}
			else
				printf(" ");
		}
		printf("\n");
	}
}
