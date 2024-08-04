#include <stdio.h>

int main(void)
{
    int i;
    int sum=0;

    scanf("%d",&i);

    for(i = 0 ; sum < i ; i++)
    {
        sum = sum + i ;
        printf(" %d \n", sum );

    }

}
