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
	int size;
	printf("Enter number of teams want to enter:\n");
	scanf("%d",&size);
	struct ipl ipl[size];
	FILE* fptr= fopen("data.txt","a+");
	
	printf( "NAME<>CAPTAIN<>TROPHY\n");
	fprintf(fptr,"%10s %10s %10s\n","NAME","CAPTAIN","TROPHY");
	for(int i=0; i<size; i++)
        {
                scanf("%s %s %d",ipl[i].team, ipl[i].captain, &ipl[i].trophy);
		fprintf(fptr," %10s %10s %10d\n",ipl[i].team, ipl[i].captain, ipl[i].trophy);
        }          
   	rewind (fptr);

	printf("Enter Captain Name:\n");
	char cap[10];
	int i,flag=0;
	scanf("%s",cap);

	for(i=0; i<size; i++)
	{
		if(!strcmp(ipl[i].captain,cap))
		{
			flag=1;	
			break;
		}
	}
	if(flag==1)
		printf(" %10s %10s %10s \n %10s %10s %10d\n","NAME","CAPTAIN","TROPHY",ipl[i].team, ipl[i].captain, ipl[i].trophy);
	else
		printf("TEAM NOT FOUND!\n");
}
