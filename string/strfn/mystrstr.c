#include<stdio.h>
char* mystrstr(char*, char*);

int main()
{
	char main[100];
	char sub[100];
	printf("Enter str1\n");
	scanf("%[^\n]",main);
	getchar();
	printf("Enter str2\n");
	scanf("%[^\n]",sub);

	char* ret=mystrstr(main, sub);

	printf("BASE ADDRESS:%p\n", &main);
	printf("RETURNED ADDRESS(ie.addr. of presence):%p\n",ret);
}
char* mystrstr(char* main, char* sub)
{
	int l;
	for(l=0; sub[l]; l++);

	int count;
	for(int i=0; main[i]; i++)
	{	
		count=0;
		if(main[i]==sub[0])
		{	
			int k=0;
			for(int j=0; sub[j]; j++,k++)
			{
				if(sub[j]==main[i+k])
					count++;
				else
					break;

			}
			if(count==l)
				return main+i;
		}
	}
	return NULL;
}
