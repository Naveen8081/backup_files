#include<stdio.h>

int main()
{
	int num;
	printf("Enter num:\n");
	scanf("%d",&num);
	

	int count1=0;
	int bit;
	int count2=0;
	for(int i=0; i<32; i++)
	{	
		if(num & (1<<i))
		{
			count1++;
			if(count1 >=3)
				{
					count2++;		
				}			
		}
		else
			count1=0;	
	}
	printf("Count of triplets:%d\n",count2);
}


