#include<stdio.h>

int main()
{
	float a=1.0;
	float b=2.0;
	float c=-a/0;
	float d=b/0;

	printf("C as int:%d\n",c);
	printf("C as hex:%X\n",c);
	printf("C as fp:%f\n\n",c);

	printf("D as int:%d\n",d);
        printf("D as hex:%X\n",d);
        printf("D as fp:%f\n",d);
}
