#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d",&n);

    for(int i = 0 ; i <= 12 ; i++ )
    {
        printf("%d X %d = %d \n",n , i , n*i);
    }

}
