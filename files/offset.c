#include<stdio.h>
int main()
{
        FILE* sptr=fopen("source.txt","r");
	printf("%ld\n",ftell(sptr));
        char ch=fgetc(sptr);
	printf("%ld\n",ftell(sptr));
	 
        while((ch=fgetc(sptr)))
        {
                if(feof(sptr))
			break;
		printf("%ld\n",ftell(sptr));
        }

	fclose(sptr);
}
