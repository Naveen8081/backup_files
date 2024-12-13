#include<stdio.h>
int substr(char*, char*);

int main()
{
	char main[100];
	char sub[100];
	printf("Enter Main Str:\n");
	scanf("%[^\n]",main);
	getchar();
	printf("Enter Sub Str:\n");
	scanf("%[^\n]",sub);

	//	substr(mainstr, substr);

	substr(main, sub);
}

int substr(char* str1, char* str2)
{
	int j;
	for(j=0; str2[j]; j++ );
	j=j-1;
//	printf("%d",j);
	int flag;

	int temp;
	for(int i=0; str1[i]; i++)
	{
		
		if(str1[i]==' ' || str1[i]==0)
		{
			printf("*\n");
			temp=i-1;
			for(int k=j; k>=0; k-- )
			{
				flag=0;
				printf("STR1:%cSTR2:%c\n",str1[temp],str2[k]);
				if(str2[k] != str1[temp])
				{
					flag=1;
					break;
				}	
				temp--;
			}
		}
		
			
	}	
	if(flag==1)
		printf("Not Equal\n");
	else
		printf("Equal\n");
}
