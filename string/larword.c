#include<stdio.h>
int wordsize(char*, char*);
int main()
{
	char str[100];
	printf("Enter String:\n");
	scanf("%[^\n]",str);
	int l;
	for(l=0; str[l]; l++);	
	
	int larcount=0;
	int count;
	char* lar;
	char* ptr=str;
	for(int i=0; i<=l; i++)
	{
		if(str[i]==' ' || str[i]==0)
		{
			count=wordsize(ptr, str+i-1);
			if(count>larcount)
			{
				larcount=count;
				lar=ptr;		
			}
			ptr=str+i+1;
		}
	}

	printf("LARGEST WORD:");
	for(int i=0; lar[i]!=' ' && lar[i]!=0; i++)
	{
		printf("%c",lar[i]);
	}
	printf("\nSIZE OF WORD:%d\n",larcount);
}

int wordsize(char* ptr1, char* ptr2)
{
	int count=0;	
	while(ptr1<=ptr2)
	{
		count++;
		ptr1++;
	}	
	return count;
}
