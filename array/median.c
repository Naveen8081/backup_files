#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int a[n];
	int b[m];
	int temp;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int j=0;j<m;j++)
	{
		scanf("%d",&b[j]);
	}
	//------------sorting-----------
	for(int i=0;i<n;i++)
	{
		if(a[i]>a[i++])
		{
			temp=a[i++];
			a[i++]=a[i];
			a[]	
		}
	}
}
