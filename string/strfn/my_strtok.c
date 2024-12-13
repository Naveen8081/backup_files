#include<stdio.h>
char* my_strtok(char*, char*);
int main()
{
	char str[100];
	char delim[10];
	printf("Enter string:\n");
	scanf("%[^\n]",str);
	getchar();
	printf("Enter delimiter:\n");
        scanf("%[^\n]",delim);
        getchar();

	char* token=my_strtok(str, delim);
	printf("%s",token);
	token=my_strtok(NULL, delim);
        printf("%s",token);
}
char* my_strtok(char* str, char* delim)
{
	static int i=0;
	static char* ptr=str;
	for(; ptr[i]; i++)
	{
		for(int j=0; delim[j]; j++)
		{
			if(ptr[i]==delim[j])
			{
				ptr[i]=0;
			}
		}
	}
	return ptr+i;
}

