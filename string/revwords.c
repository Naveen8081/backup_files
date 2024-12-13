#include<stdio.h>
void reverse(char*, int);
void rev_word(char*, int);

int main()
{
	char str[100];
	printf("Enter String:\n");
	scanf("%[^\n]",str);

	int i;
	for(i=0;str[i];i++);


	reverse(str,i-1 );	
	printf("%s",str);
	printf("\n");



}

void reverse(char* ptr1, int size)
{
	int temp;
	for(int i=0; i<size; i++,size--)
	{
		temp=ptr1[i];
		ptr1[i]=ptr1[size];
		ptr1[size]=temp;
	}	
}

/*
void rev_word(char* start,int size)
{
	for(int i=0; start[i]; i++)
	{
		if( start[i]!=' ' || start[i]!=0)
			continue;
	} 

}
*/
