#include <stdio.h>

int sum(int,int);
float average(int,int);


int main(void)
{
    int a = 1 , b = 2;
    printf("the sum is %d\n",sum(a, b));
    printf("the average is %f\n",average(a, b));


}

int sum(int a,int b)
{

    return a + b;
}

float average(int a,int b)
{
   
   return (a + b)/2.0 ;
}


