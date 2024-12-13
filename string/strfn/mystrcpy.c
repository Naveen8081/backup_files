#include<stdio.h>
void my_strcpy(const char*, char*);

int main()
{
	char src[100];
	printf("Enter source str:\n");
	scanf("%[^\n]",src);

	char dest[100];
	my_strcpy(src,dest);	

	printf("DESTINATION:\n%s\n",dest);
}

void my_strcpy(const char* str1, char* str2)
{
	int i;
	for(i=0; str1[i]; i++)
	{
		str2[i]=str1[i];
	}
	str2[i]=0;
}
