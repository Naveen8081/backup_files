#include<stdio.h>
#include<string.h>

int main(int argc, char* argv[], char*envp[])
{
	char* ind;
	char* val;
	int i=0;
	while(envp[i] != NULL)
	{
		ind=strtok(envp[i],"=");
		if(!strcmp(argv[1],ind))
		{
			val=strtok(NULL,"\0");
			printf("%s",val);
			return 0;
		}
		i++;
	}

}
