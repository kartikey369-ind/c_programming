#include <stdio.h>

int main(void)
{

    int sum=0;
    int n ;
    scanf("%d",&n);



    for(int i = 1 ; i <= n ; i++)
    {
        sum = sum + i ;


    }
    printf(" the sum of first %d natural numbers is %d \n", n, sum );

}
