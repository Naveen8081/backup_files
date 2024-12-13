#include<stdio.h>
int main()
{
	char str[100];
	printf("Enter String:\n");
	scanf("%[^\n]",str);
	
	int i;
	int count=0;
	for(i=0;str[i];i++)
	{
		if(str[i]>='0'&&str[i]<='9')
			continue;

		if(str[i]>='a'&&str[i]<='z')
		{
			str[count++]=str[i];
			continue;
		}

		if(str[i]>='A'&&str[i]<='Z')
		{
			str[count++]=(str[i]+32);			
			continue;
		}		
	}
	str[count]=0;	
	
	int flag=0;
	count=count-1;
	for(i=0;str[i];i++)
	{
		if(str[i]!=str[count])
		{
			flag=1;
			break;	
		}	
		count--;		
	}

	if(flag)
		printf("Not Palindrome\n");
	else
		printf("Palindrome\n");
}
