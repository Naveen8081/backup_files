#include<stdio.h>

#define SEC(days) days*86400

int main()
{
	int days;
	printf("enter days\n");
	scanf("%d",&days);

	printf("%d", SEC(days));
}
