#include<stdio.h>
#include<string.h>
struct ipl
{
	char team[10];
	char captain[10];
	int trophy;
};
int main()
{
	struct ipl ipl;
	FILE* fptr= fopen("data.txt","a+");

	int choice=1;
	printf("Enter team details:\nNAME<space>CAPTAIN<spaceTROPHY>\n");
	fprintf(fptr,"%10s %10s %10s\n","NAME","CAPTAIN","TROPHY");
	while(choice)
	{
		scanf("%s %s %d",ipl.team, ipl.captain, &ipl.trophy);
		fprintf(fptr,"%10s %10s %10d\n",ipl.team, ipl.captain, ipl.trophy);
		printf("Enter 1 to add more, else enter 0\n");
		scanf("%d",&choice);
	}
	rewind (fptr);

	printf("Enter Captain Name:\n");
	char cap[10];
	scanf("%s",cap);
	while(1)
	{
		fscanf(fptr,"%s %s %d",ipl.team, ipl.captain, &ipl.trophy);
		if(!strcmp(ipl.captain,cap))
		{
			printf("------------TEAM FOUND!------------\n%10s %10s %10s\n","TEAM","CAPTAIN","TROPHY");
			printf("%10s %10s %10d\n",ipl.team,ipl.captain,ipl.trophy);
			return 0;
		}
                if(feof(fptr))
                break;
	}
	fclose(fptr); 
	printf("TEAM NOT FOUND!\n");
}

