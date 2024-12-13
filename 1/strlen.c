#include<stdio.h>
unsigned int mystrlen(char*);
int main()
{
	char str[]="hello";
	
	unsigned int size=mystrlen(str);
	
	printf("%d",size);

}


unsigned int mystrlen(char* str)
{
	int i;
	for(i=0;str[i];i++);
	return i;
}
