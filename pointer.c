#include <stdio.h>

int func(int,int);

int main(void)
{
    int a = 3;


    printf("the adress of i is %p\n",&a);
}

int func(int,int)
{
    int* b = &a;
    printf("the adress of b is %p\n",&b)
}
