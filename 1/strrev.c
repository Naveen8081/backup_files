#include<stdio.h>

void rev_str(char*,int, int);
void rev_word(char*,int);

int main()
{
	int i;
	char str[100];
	printf("Enter String:\n");
	scanf("%[^\n]",str);

	for(i=0;str[i];i++);

	rev_str(str,i-1,0);       
	rev_word(str,i-1 );
	printf("%s",str);

}

void rev_str(char* ptr1, int size, int start)
{
	int temp;
	for(int i=start; i<size; i++,size--)
	{
		temp=ptr1[i];
		ptr1[i]=ptr1[size];
		ptr1[size]=temp;
	}
}

void rev_word(char* ptr, int size)
{
	int start, end = 0;
	while(end <= size)
	{
		start = end;
		for(; ptr[end] !=' ' && ptr[end] !='\0'; end++);
		rev_str(ptr, end-1,  start);
		end++;
	}

}
