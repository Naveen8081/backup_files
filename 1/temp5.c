#include<stdio.h>
int main()
{
	FILE* sptr=fopen("source.txt","r");
	FILE* dptr=fopen("dest.txt","w");

	char ch;
	char str[1000];
	int i=0;
	while((ch=fgetc(sptr))!=EOF)
	{
		str[i]=ch;
		i++;
	}
	str[i]=0;
	printf("%s",str);
	char* end=str+i-1;
	char* start=str;	
	char temp;
	while( start < end)
	{
		temp=*start;
		*start=*end;
		*end=temp;
		start++;end--;
	}
	int j=0;
	while(str[j])
	{
		fputc(str[j],dptr);
		j++;	
	}
}
