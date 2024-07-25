#include <stdio.h>


int main(void)
{
    float c , f ;
    
    //to get input in celsius
    printf("enter celsius : ",c);
    scanf("%f",&c);
    
    f=((9.0/5.0*c)) + 32;   //some math
    
    //prints the value
    printf("the value of farenheit is %f",f);


}
