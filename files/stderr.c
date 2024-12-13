#include<stdio.h>
#include<unistd.h>

int main()
{
	while(1)
	{
		fprintf(stdout,"hai");
		fprintf(stderr,"ERROR");
		fprintf(stdout,"**");
		usleep(50000);

		printf("\n");
	}
}

