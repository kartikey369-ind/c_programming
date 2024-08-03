#include <stdio.h>

int main(void)
{
    int a;
    printf("enter score",a);
    scanf("%d",a);



    if(int a >= 90 || int a <= 100)
    {
        printf("grade A");
    }

    else if(int a >= 80 || int a < 90 )
    {
                printf("grade B");

    }

    else if(int a >= 70 || int a < 80 )
    {
        printf("grade C");

    }

    else if(int a >= 60 || int a < 70 )
    {
        printf("grade D");

    }

    else if(int a >= 50 || int a < 60 )
    {
        printf("grade E");

    }

    else
    {
        printf("grade f");

    }




}
