#include<stdio.h>
char* substr(char*, char*);

int main()
{
        char main[100];
        char sub[100];
        printf("Enter Main Str:\n");
        scanf("%[^\n]",main);
        getchar();
        printf("Enter Sub Str:\n");
        scanf("%[^\n]",sub);

       char* res=substr(main, sub);

	if(res == NULL)
                printf("Not Found\n");
        else
                printf("Found\n");
}

int substr(char* str1, char* str2)
{
        int j;
        for(j=0; str2[j]; j++ );

        int temp;
	int i;
        for(i=0; str1[i]; i++)
        {
		for(int k=0; str2[k]; k++)
		{
			if(str1[i] == str2[k])
			{
				i++;	
			}
			if(str[k]==0)
				return str1-k-1;
		}	            
    	}    
}

