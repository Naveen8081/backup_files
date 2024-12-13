#include<stdio.h>
int main()
{
int n; //number of integers needs to be added
int num; //integer that needs to be added (asked in each itertion)
int sum=0; //for storing sum (initialised to zero)
int i=0; //for counting iterations done (needs to check with n)
scanf("%d",&n);
while(i<n)
{
	scanf("%d",&num);
	sum=sum+num;
	i++;
}	
printf("%d",sum\n);
}
