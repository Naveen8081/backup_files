#include<stdio.h>
union floatconv
{
	float degree;
	struct
	{
		unsigned int s:1;
		unsigned int e:8;
		unsigned int m:23;
	}elements;
};
int main()
{
	union floatconv u={1.7};
	printf("%hhx\n",u.elements.s);
	printf("%hx\n",u.elements.e);
	printf("%x\n",u.elements.m);
}
