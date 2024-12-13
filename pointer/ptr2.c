#include<stdio.h>
#include<stdio.h>
void fun(int*);

int main()
{
        int arr[5]={1,2,3,4,5};
        printf("%d\n",sizeof(arr));
        printf("%d\n",arr);
        // printf("%d");
        // int* ptr=arr;

        fun(arr);


}

void fun(int* arr2)
{
        printf("\n%d\n",arr2);
        printf("%d\n",sizeof(arr2));
}

