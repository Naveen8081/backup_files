#include<stdio.h>

int my_strlen(const char*); 

int main()
{
	char str[100];
	printf("Enter String:\n");
	scanf("%[^\n]",str);
	
	int res=my_strlen(str);
	
	printf("RETURNED VALUE(ie.length):%d\n",res);
}

int my_strlen(const char* str)
{
	int i;
	for(i=0; str[i]; i++);
	return i;
}
