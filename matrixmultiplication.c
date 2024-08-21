// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int r,c;//for matrix 1
   int ro,co;//for matrix 2
 
   
   //to get rows and columns from user//
   printf("enter rows in 1st matrix:");
   scanf("%d",&r);
   printf("enter columns in 1st matrix:");
   scanf("%d",&c);
   printf("\n");
  
   
   //initialising the matrix//
   int a[r][c];
   
   
   
   //to input elemts in matrix 1//
   printf("enter elements in 1st matrix:\n");
   printf("\n");
   for(int i=0;i<r;i++)
   {
       for(int j=0;j<c;j++)
       {
           scanf("\t%d",&a[i][j]);
       }
   }
   
   printf("enter rows in 2nd matrix:");
   scanf("%d",&ro);
   printf("enter columns in 2nd matrix:");
   scanf("%d",&co);
   printf("\n");
   
   int b[ro][co];
   printf("enter elements in 2nd matrix:\n");
   printf("\n");
   for(int i=0;i<ro;i++)
   {
       for(int j=0;j<co;j++)
       {
           scanf("\t%d",&b[i][j]);
       }
   }
   
    int x[r][co];
   if(c != ro)
   {
       printf("can't multiply");
   }
   else
   {
       for(int i=0;i<r;i++)
       {
       for(int j=0;j<co;j++)
          {
           int sum=0;
           for(int k=0;k<c;k++)
          {
              sum=sum+a[i][k]*b[k][j];
          }
          x[i][j]=sum;
       }
       
       }
   }
   
  
   printf("THE MULTIPLICATION OF MATRIX IS:\n");
   for(int i=0;i<r;i++)
   {
       for(int j=0;j<co;j++)
       {
           printf("%d ",x[i][j]);
       }
       printf("\n");
   }
   
   
   
   
   
}
