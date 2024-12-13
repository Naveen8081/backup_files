#include<stdio.h>
void add_student(FILE*,struct student*);

struct student
{
	char name[20];
	char add[30];
	int id;
};

int main()
{
	FILE* fptr=fopen("data.txt","a+");
	struct student s;
	int choice,i=1;
	while(i)
	{
		printf("1.Add Contact\n2.Exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:
			add_student(fptr,&s);
			break;
		case 2:
			return 0;
		}
		printf("enter 1 if you want to continue");
		scanf("%d",&i);
	}
}

void add_student(FILE* fptr,struct student* s)
{
	scanf("%s %s %d",s.name,s.add,&s.id);
	fprintf(fptr,"%s %s %d\n",s->name,s->add,s->id);

}
