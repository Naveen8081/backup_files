#include <stdio.h>

int main()
{

	int a=21;
	int b=11;
	int res=0;
	int tempa=0;
	int tempb=0;
	int carry=0;
	int sum=0;

	for(int i=0; i<32;i++)
	{
		tempa=0,tempb=0;
		if(a&(1<<i))
			tempa=1;
		if(b&(1<<i))
			tempb=1;

		sum=tempa^tempb^carry;
		
		if((tempa|tempb)&(tempb|carry))
			carry=1;		
		else
			carry=0;

		if(sum)
			res=res | (1<<i);
	}

	printf("RESULT:%d\n",res);
}
