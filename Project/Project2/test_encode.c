#include <stdio.h>
#include "encode.h"
#include "types.h"
#include<unistd.h>
int main(int argc,char*argv[])
{
    EncodeInfo encInfo;//encinfo is variable name
    uint img_size;
    check_operation_type(argv);
	usleep(1);
	printf("Yes you selected a encoded option\n");
	read_and_validate_encode_args(argv,&encInfo);
	do_encoding(&encInfo);

}

