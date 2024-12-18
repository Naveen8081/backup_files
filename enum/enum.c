#include<stdio.h>
typedef enum
{
	e_red=1,
	e_blue=4,
	e_green
}color;
int main()
{
	color e_white=0,e_black;
	printf("%zu\n",sizeof(color));
	printf("%d\n",e_white);
	printf("%d\n",e_black);

}
