#include<stdio.h>

int main() 
{
	int nums=6;
	int numsSize[nums]={1,2,3,4,5,6};
	int flag=0;
	for(int i=0; i<numsSize; i++)
	{
		if( num[i]==num(i+1) )
		{
			for(int j=i; j<nums; j++)
			{
				num[j]=num[j+1];
			}
		}
	}
}
