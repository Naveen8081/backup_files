#include<stdio.h>
#include<stdlib.h>
float aver(int*,int);

int main()
{

	int size;
	printf("Enter size:\n");
	scanf("%d",&size);

	int* ptr=calloc(sizeof(int),size);

	printf("Array elements before ip:\n");	
	for(int i=0; i<size; i++)
        {
                printf("%d",ptr[i]);
        }
	printf("\n");	

	printf("Enter elements\n");
	for(int i=0; i<size; i++)
	{
		scanf("%d",ptr+i);
	}


	float ret=aver(ptr, size);
	printf("AVER:%f\n",ret);

}

float aver(int *ptr,int size)
{
	float total=0;
	for(int i=0; i<size; i++)
	{
		total=total+ptr[i];
		printf("%d",total);
	}

	printf("Total:%d\n",total);
	
	return total/size;
}


