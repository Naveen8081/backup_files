#include<stdio.h>
char* my_strchr(char*, char);

int main()
{
	char str[100];
	printf("Enter String:\n");
        scanf("%[^\n]",str);
	getchar();
	printf("Enter Character:\n");
	char ch;
	scanf("%c",&ch);

	char* ret=my_strchr(str,ch);

	printf("BASE ADDRESS:%p\n", str);
	printf("RETURN ADDRESS(ie.address of presence):%p\n", ret);
}

char* my_strchr(char* str, char ch)
{	
	int i;
	for(i=0; str[i]; i++)
	{
		if(ch==str[i])
			return str+i;
	}
	return NULL;
}
