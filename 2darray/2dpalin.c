#include<stdio.h>
#include<string.h>
int ispalin(char*);

int main()
{
	int row;
	printf("Enter number of strings\n");
	scanf("%d",&row);
	char str[row][20];
	printf("Enter strings:\n");
	for(int i=0; i<row; i++)
	{
		scanf("%s",str[i]);
	}

	int larlen=0,len,index;
	for(int i=0; i<row; i++)
	{
		len=ispalin(str[i]);
		if(len>larlen)
		{
			larlen=len;
			index=i;
		}
	}
	if(!larlen)
		printf("NO PALINDROME FOUND!\n");
	else
		printf("Largest Palindrome:%s\n",str[index]);
}
int ispalin(char* str)
{
	int len=strlen(str);
	int last=len-1;
	for(int i=0; i<(len/2); i++)	
	{
		if(str[i]!=str[last--])
			return 0;
	}
	return len;
}
