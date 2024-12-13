/*

*/
#include<stdio.h>
int main()
{
int num1,num2,i=1;
char oper;
//scanf("%d%c%d ",&num1,&oper,&num2);
num1=1;
num2=2;
oper='+';
while(i==1)
{	printf("hi");
	if(1){
		if(1)
		{
		continue;
		}
	}
	switch(oper)
	{
	case '+':
		printf("%d",num1+num2);
	break;
	case '-':
		printf("%d",num1-num2);
	break;
	case '*':
		printf("%d",num1*num2);
	break;
	case '/':
		printf("%d",num1/num2);
	break;
	default:
		printf("Invalid Operation");
	}
//printf("If youbreskt to continue enter 1 else enter 0\n");
//scanf("%d",&i);

}
}
