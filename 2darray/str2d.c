#include<stdio.h>
int main()
{
	char a[3][20]={"sandy","samvel","ajith"};
	
	char(*ptr)[20]=&a;
	
	printf("%s",a);
}
