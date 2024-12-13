#include<stdio.h>
struct student
{
	int id;
	char name[20];
	char phno[11];
};

int main()
{
	struct student s;
	printf("Enter ID:\n");
	scanf("%d",&s.id);
	getchar();
	printf("NAME:\n");
	scanf("%[^\n]",s.name);
	getchar();
ph:	printf("PHONE:\n");
	scanf("%s",s.phno);
	
	int i;
	for(i=0; s.phno[i]; i++);
	if(i<10)

	{   
		printf("Enter Valid Ph.number\n");
		goto ph; 
	}


	for(i=0; s.phno[i]; i++)
	{
		if(!(s.phno[i]>='0' && s.phno[i]<='9'))
		{
			printf("Enter Valid Ph.number\n");
			goto ph;
		}
	}
}
