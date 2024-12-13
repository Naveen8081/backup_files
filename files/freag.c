#include<stdio.h>
int main()
{
	char x=45;
	FILE* fp=fopen("fread.txt","a+");
	if(fp==NULL)
	{
		printf("FILE NOT FOUND\n");
		return 0;	
	}

	fwrite(&x,sizeof(char),1,fp);
	fseek(fp,-10,SEEK_CUR);
	int y;
	fread(&y,sizeof(char),1,fp);
	printf("%d\n",y);
}

