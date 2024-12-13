#include<stdio.h>
int main()
{
	int x=1, y=2;
	int *ip;
	printf("%d\n",ip);
	ip=&x;
	printf("%d\n",ip);
	printf("%d\n",*ip);
	y=*ip;
	printf("%d\n",y);
	printf("%d\n",&y);
	*ip=0;
	printf("%d %d\n",x,y);
}
