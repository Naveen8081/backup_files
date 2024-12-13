#include<stdio.h>
int my_strcmp(const char*,const char*);

int main()
{
	char str1[100];
	char str2[100];
	printf("Enter str1\n");
	scanf("%[^\n]",str1);
	getchar();
	printf("Enter str2\n");
	scanf("%[^\n]",str2);

	int res=my_strcmp(str1, str2);
	printf("RETURN VALUE:%d\n",res);

	if(res)
		printf("Not Equal\n");
	else
		printf("Equal\n");	
}

int my_strcmp(const char* ptr1, const char* ptr2)
{
	int i;
	for(i=0; ptr1[i] || ptr2[i]; i++)
	{
		if(ptr1[i]-ptr2[i])
		{
			return (ptr1[i]-ptr2[i]);
		}
	}
	return (ptr1[i]-ptr2[i]);
}
