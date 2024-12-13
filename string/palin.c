#include<stdio.h>
int is_palin(char*);
int main()
{
    char str[100];
    printf("Enter the string:\n");
    scanf("%[^\n]",str);
    
    printf("%s",str);
    
    if(is_palin(str))
        printf("Yes\n");
    else
        printf("No\n");
    
}

int is_palin (char* str)
{
    int i;
    for(i=0; str[i]; i++)
    
    i=i-1;
    
    for(int j=0; str[j]; j++)
    {
        if(str[j]!=str[i--])
            return 0;
    }
    return 1;
}
