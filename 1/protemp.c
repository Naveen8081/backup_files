#include<stdio.h>
#include<ctype.h>

int main()
{
	char name[]="hello";
        int i=0;
        while(name[i])
        {
               printf("%d\n", isalpha(name[i]));
		i++;	
        }
}

