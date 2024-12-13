#include<stdio.h>

#define SWAP(x,y) \
{	\
int temp=x; \
x=y; \
y=temp;	\
}



int main()
{
	int x=3;
	int y=2;

	SWAP(x,y);
	printf("%d %d\n",x,y);
	SWAP(x,y);
        printf("%d %d\n",x,y);

}
