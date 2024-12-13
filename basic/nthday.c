/*
*/
#include<stdio.h>
int main()
{
	int f;
	int n;
	//int count;
	printf("Enter the value of 'n':");
	scanf("%d",&n);
	printf("Choose First Day: \n1.Sunday\n2.Monday\n3.Tuesday\n4.Wednesday\n5.Thursday\n6.Friday\n7.Saturday\n");
	scanf("%d",&f);
	if(f>0||f<8)
	{
		if(n>0||n<365)
		{   n=(n+f-1)%7;
			printf("The day is ");
			switch(n)
			{   
				case 0:
					printf("Saturday");
					break;
				case 1:
					printf("Sunday");
					break;
				case 2:
					printf("Monday");
					break;
				case 3:
					printf("Tuesday");
					break;
				case 4:
					printf("Wednesday");
					break;
				case 5:
					printf("Thursday");
					break;
				case 6:
					printf("Friday");
					break;
				default:
					printf("Error: Invalid input, first day should be > 0 and <= 7");
			}
		}
		else
			printf("Error: Invalid Input, n value should be > 0 and <= 365");
	}
	else
		printf("Error");
}    

