#include<stdio.h>
#include<unistd.h>
int main()
{
	for(int i=1; i<=100; i++)
	{
		printf("LOADING[");
		for(int j=1; j<=100; j++)
		{
			if(j<=i)
				printf("_");
			else
				printf(" ");
		}
		printf("]%d%%",i);
		usleep(50000);
		fflush(stdout);
		printf("\r");
	}
	printf("\n");
}

