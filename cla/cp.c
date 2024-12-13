#include<stdio.h>
#include<string.h>

int main(int argc,char* argv[])

{

	if(!(argc==3)) 
	{
		printf("Enter two arguments!\n");
		return 0;
	}

	if((strstr(argv[1],".txt")==NULL) || (strstr(argv[2],".txt")==NULL))
        {
                printf("Enter valid file name!\n");
                return 0;
        }


	FILE* src=fopen(argv[1],"r");
	if(src == NULL)
	{
		printf("File not found!\n");
		return 0;
	}

	FILE* dest=fopen(argv[2],"w");
	char ch;
	while((ch=fgetc(src))!=EOF)
	{
		fputc(ch,dest);
	}
	
	fclose(src);
	fclose(dest);
}

