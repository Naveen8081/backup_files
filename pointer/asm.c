#include<stdio.h>
int math(int,int,int *,int *,int *);

int main()
{
int a,b;
int sum,sub,mul;
scanf("%d %d",&a,&b);
math(a,b,&sum,&sub,&mul);
printf("%d\n%d\n%d\n",sum,sub,mul);
}
int math(int a,int b,int* sum,int* sub,int* mul)
{
	*sum=a+b;
	*sub=a-b;
	*mul=a*b;
}

