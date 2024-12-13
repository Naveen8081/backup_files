#include<stdio.h>
void print_array(int, int, int(*)[]);
int main()
{
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int(*ptr)[3]=&arr;
	
	print_array(3,3,ptr);
}

void print_array(int r,int c,int(*ptr)[c])
{
	for(int k=0; k<r; k++)
	{
		for(int l=0; l<c; l++)
		{
			printf("%d ",ptr[k][l]);
		}
		printf("\n");
	}
}
