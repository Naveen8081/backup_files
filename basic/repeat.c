#include<stdio.h>
int main()
{
	int s,flag=0,index1,count=0;
	printf("Enter the size: ");
	scanf("%d",&s);
	int str[s];
	printf("Enter the array elements: ");
	for(int i=0;i<s;i++)
	{
	scanf("%d",&str[i]);
	}
	for(int i=0;i<s;i++)
	{
	   for(int j=s;j>i;j--)
	       {

	       	   if(str[i]==str[j])
			{
				count++;
				index1=i;
				flag=1;
				break;
			}
	       }
	   if(flag==1)
		   break;
	}
	if(flag==1)
	{
		printf("Index: %d %d\n",index1,count);
		return 0;
	}
	printf("No Repeating elements found\n");
}
