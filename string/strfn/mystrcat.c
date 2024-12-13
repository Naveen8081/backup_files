#include<stdio.h>
void my_strcat(char*, char*);

int main()
{
	char str1[100];
	char str2[100];
	printf("Enter str1\n");
	scanf("%[^\n]",str1);
	getchar();
	printf("Enter str2\n");
	scanf("%[^\n]",str2);

	my_strcat(str1, str2);

	printf("%s\n",str1);
}

void my_strcat(char* str1, char* str2)
{
	int i;
	for(i=0; str1[i]; i++);

	for(int j=0; str2[j]; j++)
	{
		str1[i++]=str2[j];	
	}
	str1[i]=0;
}
