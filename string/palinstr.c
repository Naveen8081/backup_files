#include<stdio.h>
int main()
{
	char str[100];
	printf("Enter str:\n");
	scanf("%[^\n]",str);
	
	int i;
	for( i=0;str[i];i++);

	// printf("\n%d\n",i);
	int flag=0;
	i=i-1;	
	for(int j=0;j<=i;j++)
	{
		if(str[j]!=str[i])
		{	
			flag=1;
			break;
		}
		i--;
			
	}
	if(flag)
		printf("Not Palindrome\n");
	else	
		printf("Plaindrome\n");
}
