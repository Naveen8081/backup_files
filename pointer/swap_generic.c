#include<stdio.h>
void generic_swap(void*, void*);

int main()
{
	int x=0xabcd1234;
	int y=0x1234abcd;
	generic_swap(&x, &y, sizeof(int));
	printf("%x, %x\n",x,y);

	float a=1.1;
	float b=1.1;
	generic_swap(&a, &b, sizeof(float));
	printf("%f, %f\n",a,b);


}



void generic_swap(void* a, void* b, int s)
{
	char t;
	for(int i=0; i<s; i++)
	{
		t=*(char*)a+i;		
		*(char*)a+i=*(char*)b+i;
		*(char*)b+i=t;
	}
}


