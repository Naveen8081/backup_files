#include<stdio.h>
int main()
{
int f=0,s=1,limit,next=0;
scanf("%d",&limit);
while(next<limit)
{
printf("%d ",next);
f=s;
s=next;
next=f+s;

}
}

