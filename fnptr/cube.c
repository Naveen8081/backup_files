#include<stdio.h>

#define GET(num,n) num&((1<<n)-1)
#define SET(num,n) num|((1<<n)-1)
#define CLEAR(num,n) num&~(((1<<n)-1))
#define TOGGLE(num,n) num^((1<<n)-1)

#define printbits(x) \
{ \
	for(int i=31;i>=0;i--) \
        { \
                if(x & (1<<i)) \
			printf("1"); \
		else \
			printf("0"); \
        } \
	printf("\n"); \
}


int main()
{
	int num;
	printf("Enter num:\n");
	scanf("%d",&num);
	int n;
	printf("Enter n\n");
	scanf("%d",&n);
	
	int x=GET(num,n);
	printbits(x);

	x=SET(num,n);
	printbits(x);

	x=CLEAR(num,n);
	printbits(x);

	x=TOGGLE(num,n);
	printbits(x);

	printf("%s\n",__DATE__);
	printf("%s\n",__FILE__);
	printf("%s\n",__TIME__);
	printf("%d\n",__LINE__);
	printf("%s\n",__func__);
}


