#include<stdio.h>
struct student
{
        int id; 
        char name[20];
        char phno[11];
};
void scan(struct student*);
void print(struct student*);

int main()
{
	struct student s={2, "Arul", "9312345678"};
	scan(&s);
	print(&s);
}

void scan(struct student* ptr)
{
	printf("Enter ID:\n");
	scanf("%d",&(ptr-> id));
	getchar();

	printf("Enter Name:\n");
	scanf("%[^\n]",ptr->name);
	getchar();

	printf("Enter Phone:\n");
	scanf("%[^\n]",ptr->phno);
	getchar();
}

void print(struct student* ptr)
{
        printf("%d\n",ptr-> id);
        printf("%s\n",ptr->name);
        printf("%s\n",ptr->phno);
}
