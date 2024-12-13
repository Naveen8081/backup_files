#include<stdio.h>
void sqcu(int,int*,int*);
int main()
{
	int n;
	int sq,cu;
	scanf("%d",&n);
	sqcu(n,&sq,&cu);
	printf("%d %d\n",sq,cu);
}

void sqcu(int n,int*sq,int*cu)
{
	*sq=n*n;
	*cu=n*n*n; 
}
