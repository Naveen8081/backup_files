#include <stdio.h>
union Test
{
		int id; 
		char option;
		double height;
};
#if 0
int main()
{
		union Test temp_var;
}
#endif
#if 0
int main()
{
		union Test temp_var;
		printf("%zu\n",sizeof(temp_var));
}
#endif
#if 0
int main()
{
		union Test temp_var;
		temp_var.option='a';
		printf("%c\n", temp_var.option);
		temp_var.id=144;
		printf("%d\n", temp_var.id);
		temp_var.height=7.2;
		printf("%lf\n", temp_var.height);
}
#endif
#if 1
int main()
{
		union Test temp_var;
		temp_var.height = 7.2;
		printf("%lf\n", temp_var.height);
		temp_var.id = 0x1234;
		printf("%x\n", temp_var.id);
		temp_var.option = '1';
		printf("%c\n", temp_var.option);
		printf("------------------------------------\n");
		printf("%lf\n", temp_var.height);
		printf("%x\n", temp_var.id);
		printf("%c\n", temp_var.option);
		return 0;
}
#endif
#if 0
#include <stdio.h>
union FloatBits
{
		float degree;
		struct
		{
				unsigned m : 23;
				unsigned e : 8;
				unsigned s : 1;
		} elements;
};
int main()
{
		union FloatBits fb = {1.7};
		printf("Size of %zu\n", sizeof(fb));

		printf("Sign: %#X\n", fb.elements.s);
		printf("Exponent: %#X\n", fb.elements.e);
		printf("Mantissa: %#X\n", fb.elements.m);
		return 0;
}
#endif
#if 0
#include <stdio.h>
union Endian
{
		unsigned int value;
		unsigned char byte[4];
};
int main()
{
		union Endian e = {0x12345678};
		printf("%zu\n",sizeof(e));
		e.byte[0] == 0x78 ? printf("Little\n") : printf("Big\n");
}
#endif
#if 0
#include <stdio.h>
union Endian
{
		int x;
		unsigned char byte[5];
};
int main()
{
		union Endian e;
		printf("size of union = %zu\n", sizeof(e));
		return 0;
}
#endif
#if 0
#include <stdio.h>

struct Endian
{
		unsigned int value;
		unsigned char byte[38];
};
int main()
{
		struct Endian e;
		printf("size of union = %zu\n", sizeof(e));
		return 0;
}
#endif
#if 0
#include <stdio.h>
#pragma pack(1)
union st
{
		int x;
		char ch;
		double d;
};

int main()
{
		union st temp;
		printf("%zu\n",sizeof(temp));
}
#endif
#if 0
#include <stdio.h>
union IPAddress 
{
		unsigned int addr;
		unsigned char bytes[4];
};
int main() {
		union IPAddress ip;

		ip.addr = 0xC0A80164; // 100.1.168.192
		
		printf("IP Address: %u.%u.%u.%u\n", ip.bytes[0], ip.bytes[1],
						ip.bytes[2], ip.bytes[3]);
		return 0;
}
#endif
#if 0
#include <stdio.h>
int main()
{
		typedef enum
		{
				red,
				blue
		} Color;
		int blue; // we should not use same var which is already declared in the enum
		printf("%d\n", blue);
		printf("%d\n", blue);
}
#endif
#if 0
#include <stdio.h>
int main()
{
		static int num,count=0;
		static unsigned long long int fact = 1;
		if(count==0)
		{
				printf("Enter the value of N:");
				scanf("%d",&num);
				if(num==0)
				{
						printf("Factorial of the given number is 1\n");
						return 0;
				}
				count++;
		}
		if(num<0)
		{
				printf("\nInvalid Input");
		}
		else 
		{ 
				if(num>=1)
				{
						fact=fact*num;
						num--;
						main();
						return fact;
				}
		}
printf("\nFactorial of the given number is %lld\n",fact);
}
#endif
#if 0
#include <stdio.h>
union SensorData {
		int int_data;
		float float_data;
};
void processSensorData(union SensorData* sensor, int is_float) 
{
		if (is_float) 
		{
				printf("Processing float data: %.2f\n", sensor->float_data);
		} else {
				printf("Processing int data: %d\n", sensor->int_data);
		}
}
int main() 
{
		union SensorData sensor;
		sensor.int_data = 100;
		processSensorData(&sensor, 0); // Process integer
		sensor.float_data = 36.5f;
		processSensorData(&sensor, 1); // Process float
}
#endif
#if 0
#include <stdio.h>
typedef int * int_ptr;
int main()
{
		int_ptr p,q,r;
		printf("%zu %zu %zu\n",sizeof(p),sizeof(q),sizeof(r));
}
#endif
