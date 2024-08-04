#include <stdio.h>

void sum(int,int);
void average(int,int);

void sum(int a,int b)
{
    printf("the sum is %d\n",sum(a, b));

}

void average(int a,int b)
{
    printf("the average is %f\n",average(a, b));

}


int main(void)
{
    int a = 1 , b = 2;

    sum(a,b);

    average(a,b);



}




