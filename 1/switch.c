#include<stdio.h>
int main()
{
int option;
printf("Enter your choice");
scanf("%d",&option);
switch(option)
{case 1:
	{
		printf("You selected Open operation");
	break;
	}
	case 2:
	{
		printf("You slected Delete operation");
	break;
	}

	case 3:
	{
		printf("You selected Save operation");
	break;
	}
	case 4:
	printf("You selected Exit operation");
}
}
