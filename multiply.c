#include <stdio.h>

int main(void)
{

    int fact = 1;
    int n ;
    printf("enter n : ");
    scanf("%d",&n);

    int i = 1 ;

  while(i<=n)
{
    fact = fact * i ;
    i++ ;
}

printf("the factorial of %d is %d \n",n,fact);
}


