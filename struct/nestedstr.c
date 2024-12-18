#include<stdio.h>
struct college
{
	struct Student 
	{
		int id;
		char name[20];
		char address[60];
	}student;
	struct 
	{
		int id;
		char name[20];
		char address[60];
	}facaulty;
};
int main()
{
	struct college c;
	printf("%zu\n",sizeof(c));
	printf("Student id: ");
	scanf("%d",&c.student.id);
	printf("Student name: ");
	scanf("%s",c.student.name);
	printf("Student Address: ");
	scanf("%s",c.student.address);
	printf("Facauly id: ");
	scanf("%d",&c.facaulty.id);
	printf("Facaulty name: ");
	scanf("%s",c.facaulty.name);
	printf("Facaulty Address: ");
	scanf("%s",c.facaulty.address);
	 printf("Student id: %d\n",c.student.id);
	  printf("Student name: %s\n",c.student.name);
	  printf("Student Address:%s\n",c.student.address);
	  printf("Facauly id:%d\n",c.facaulty.id);
	  printf("Facaulty name:%s\n",c.facaulty.name);
	  printf("Facaulty Address:%s\n",c.facaulty.address);
}
