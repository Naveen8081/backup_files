#include<stdio.h>
#include<string.h>

int main()
{
	int row;
	printf("Enter number of strings\n");
	scanf("%d",&row);
	char str[row][10];

	printf("Enter strings:\n");
	for(int i=0; i<row; i++)
	{
		scanf("%s",str[i]);
	}
	int larfreq=0;
	int index;
	int count;
	for(int i=0; i<row; i++)
	{
		count=0;
		for(int j=i; j<row; j++)
		{
			if( !(strcmp(str[i],str[j])) )
				count++;
		}
		if(count>larfreq)
		{
			larfreq=count;
			index=i;
		}
	}
	if(larfreq<=1)
		printf("No repetetion found!\n");
	else
	{
		printf("\nHIGHEST FREQ. STRING:%s\nCOUNT:%d\n",str[index],larfreq);
	}
}
