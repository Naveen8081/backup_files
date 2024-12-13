#include<stdio.h>

void fun(char**);

int main()
{
	char* str[]={"Ajith","Arul","sam","Thulasi","Sanjay"};

	fun(str);
}


void fun(char** str)
{
	int choice;
	printf("Enter choice:\n");
	scanf("%d",&choice);

	printf("%s\n",str[choice]);

}
