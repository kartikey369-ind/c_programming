#include <stdio.h>

int main(void)
{
    //  principal p,r rate,t time //
    float p , r , t ;

    //to enter principal//
    printf("enter principal : ", p);
    scanf("%f",&p);

    //to enter rate//
    printf("enter rate : ", r);
    scanf("%f",&r);

    //to enter time//
    printf("enter time : ", t);
    scanf("%f",&t);

    //do some math (p*r*t)/100//
    printf("Simple intrest is %f ", (p*r*t)/100 );
}
