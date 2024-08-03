#include <stdio.h>

int main(void)
{
    int a ;
    printf("enter score",a);
    scanf("%d",&a);




    if(a >= 90 &&  a <= 100)
    {
        printf("grade A");
    }

    else if(a >= 80 && a < 90 )
    {
                printf("grade B");

    }

    else if(a >= 70 && a < 80 )
    {
        printf("grade C");

    }

    else if( a >= 60 && a < 70 )
    {
        printf("grade D");

    }

    else if( a >= 50 &&  a < 60 )
    {
        printf("grade E");

    }

    else
    {
        printf("grade f");

    }




}
