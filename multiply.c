#include <stdio.h>

int main(void)
{
    int i;
    int sum=0;

    scanf("%d",&i);

    for(i = 0 ; i < 10 ; i++)
    {
        sum = sum + i ;
        printf(" %d \n", sum );

    }

}
