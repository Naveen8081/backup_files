#include<stdio.h>

int main()
{	
	int num;
	printf("Enter num:\n");
	scanf("%d",&num);

	int res=num & (0x55555555);
	printf("Value of num by considering only even position bit:%d\n",res);

	res=num & (~(0x55555555));  
	printf("Value of num by considering only odd position bit:%d\n",res); 

}
