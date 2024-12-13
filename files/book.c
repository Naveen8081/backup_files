#include<stdio.h>
#include<string.h>
struct book
{
	int id;
	char book[15];
	int cost;
};

int main()
{
	struct book a;
	struct book lar;
	lar.cost=0;
	FILE* fptr=fopen("book.txt","r");
		
	while(1)
	{
		fscanf(fptr,"%d %s %d",&a.id, a.book, &a.cost);
		if(a.cost>lar.cost)
			{
				lar.id=a.id;
				strcpy(lar.book,a.book);
				lar.cost=a.cost;
			}
		if(feof(fptr))
                        break;
	}
	fclose(fptr);	

	printf("-----------------COSTLIEST BOOK INFO:------------------\n%15s %15s %15s\n","BOOK ID","BOOK NAME","COST");
	printf("%15d %15s %15d\n",lar.id, lar.book, lar.cost);
}
