#include<stdio.h>
int main()
{
int num;
scanf("%d",&num);
for(int i=2;i<num;i++)
{
	if(num%i==0)
{
		printf("Not a prime");
		break;
}
}
}
}
