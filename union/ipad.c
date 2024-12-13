#include<stdio.h>
union IPAddress
{
	unsigned int addr;
	unsigned char bytes[4];

};
int main()
{
	union IPAddress ip;
	ip.addr=0XC0A80164;
	printf("IP Address: %u.%u.%u.%u\n",ip.bytes[0],ip.bytes[1],ip.bytes[2],ip.bytes[3]);
	return 0;
}
