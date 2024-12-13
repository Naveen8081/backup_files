#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
for(int j=1;j<=n;j++)
{
for(int i=2;i<n/2;i++)
{
if(j%i!=0)
{
	printf("%d ",j);
}
}
}
}
