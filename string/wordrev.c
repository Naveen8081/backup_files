#include<stdio.h>
void reverse(char*, char*);
int main()
{
	char str[100];
	printf("Enter String:\n");
	scanf("%[^\n]",str);
	int i;
	for(i=0;str[i];i++);

	reverse(str,str+i-1);

	char* ptr=str;
	for(int j=0; j<=i; j++)
	{
		if(str[j]==' ' || str[j]==0)
		{
			reverse(ptr,str+j-1);
			ptr=str+j+1;
		}
	}
	printf("%s\n",str);
}
void reverse(char* ptr1, char* ptr2)
{	
	int temp;
	while(ptr1<ptr2)
	{
		temp=*ptr1;
		*ptr1=*ptr2;
		*ptr2=temp;
		ptr1++;ptr2--;
	}
}
