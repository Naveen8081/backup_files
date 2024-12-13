#include<stdio.h>
#include<string.h>

int main()
{
	int r;
	scanf("%d",&r);
	char str[r][20];
	printf("Enter names:\n");	
	for(int i=0; i<r; i++)
	{
		scanf("%s",str[i]);		
	}
	int len;
	for(int i=0; i<r; i++)
	{
		printf("\n%s\n",str[i]); 
		len=strlen(str[i]);   
		printf("len:%d\n",len);
	}   



}
