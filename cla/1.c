#include<stdio.h>
int main(int argc,char* argv[])

{
	printf("No. of cla:%d\n",argc);
	
	int i=0;
	while(argv[i] != NULL)
	{
		printf("%s\n",argv[i]);
		i++;
	}
}
