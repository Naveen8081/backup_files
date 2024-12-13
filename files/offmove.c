#include<stdio.h>


int main()
{
	FILE* fp=fopen("offset.txt","r");
	if(fp==NULL)
	{
		printf("FILE NOT EXISTING\n");
		return 0;
	}
	int var;
	int pos=ftell(fp);
	printf("%d\n",pos);
	
	fseek(fp,10,SEEK_SET);
	pos=ftell(fp);
	printf("%d\n",pos);

	fscanf(fp,"%c",&var);
	printf("\n%c\n",var);

	fseek(fp,0,SEEK_END);
	pos=ftell(fp);
	printf("%d\n",pos);	

}
