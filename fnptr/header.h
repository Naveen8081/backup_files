#ifndef HEADER
#define HEADER

int fact(int x)
{
	int f=1;
	for(int i=1; i<=x; i++)
	{
		f=f*i;
	}
	return f;
}
#endif
