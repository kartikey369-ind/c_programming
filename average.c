#include <stdio.h>

float average(int a ,  int b, int c );
float average(int a,  int b, int c)
{

    int average;
    return (a + b + c)/3 ;


}


int main(void)
{
        int a = 1, b = 2 , c = 3 ;

        printf("the average is %f\n", average(a,b,c ));


}




