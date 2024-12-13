#include<stdio.h>
int main()
{
	char str[100];
	int ret=printf("%s", str);
	
	printf("\n%d\n",ret);	
	
	int ret2=scanf("%[^/n]",str);
	printf("\n%d\n",ret2);

}
