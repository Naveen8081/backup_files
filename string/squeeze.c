#include <stdio.h>

void squeeze(char [], char []);

int main()
{
	char str1[30], str2[30];
	printf("Enter string1:");
	scanf("%[^\n]", str1);
	printf("Enter string2:");
	getchar();
	scanf("%[^\n]", str2);
	squeeze(str1, str2);
	printf("After squeeze s1 : %s\n", str1);
}

void squeeze(char* str1, char* str2)
{
	for(int i=0; str2[i]; i++)
	{
		printf("\n%c\n",str2[i]);
		for(int j=0; str1[j]; j++)
		{
			printf(" %c ",str1[j]);
			if(str2[i]==str1[j])
			{	
				for(int k=j;str1[k];k++)
				{
					str1[k]=str1[k+1];
				}
				j--;	
			}

		}

	}
}
