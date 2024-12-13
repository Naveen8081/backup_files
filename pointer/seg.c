#include <stdlib.h>
#include <stdio.h>

void main(){

	int *p = (int *)malloc(sizeof(int));
	*p = 10;
	free(p);
	printf("%d\n", *p);

}
