#include <stdio.h>

int main(void)

{

    int n ;
    printf("enter n : ");
    scanf("%d",&n);
    int i;

    if(n / n == 0 && n / 1 == 0)
    {

        printf("prime\n");
    }

    else
    {
        printf("not prime\n");
    }
}
