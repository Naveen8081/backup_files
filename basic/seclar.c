#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	int lar=a[0];
	int sml=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]>lar)
			lar=a[i];
		if(a[i]<sml)
			sml=a[i];
	}

	int seclar=sml;
	for(int i=0;i<n;i++)
	{
		if (a[i]<lar&&a[i]>seclar)
			seclar=a[i];
	}
	printf("The second largest is %d\n",seclar);	
}
