// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int r,c;//for matrix 1
   int ro,co;//for matrix 2
   int row,col;//for matrix 3
   int sum=0;
   //to get rows and columns from user//
   printf("enter rows in 1st matrix:");
   scanf("%d",&r);
   printf("enter columns in 1st matrix:");
   scanf("%d",&c);
   printf("\n");
  
   
   //initialising the matrix//
   int matrix[r][c];
   int matrixx[ro][co];
   int matrixxx[row][col];
   
   //to input elemts in matrix 1//
   printf("enter elements in 1st matrix:\n");
   printf("\n");
   for(int i=0;i<r;i++)
   {
       for(int j=0;j<c;j++)
       {
           scanf("\t%d",&matrix[r][c]);
       }
   }
   
   printf("enter rows in 2nd matrix:");
   scanf("%d",&ro);
   printf("enter columns in 2nd matrix:");
   scanf("%d",&co);
   printf("\n");
   
   
   printf("enter elements in 2nd matrix:\n");
   printf("\n");
   for(int i=0;i<ro;i++)
   {
       for(int j=0;j<co;j++)
       {
           scanf("\t%d",&matrix[ro][co]);
       }
   }
   
   
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
           for(int k=0;k<r;k++)
          {
              int sum=sum+matrix[i][j]*matrixx[k][j];
          }
          matrixxx[i][j]=sum;
       }
       
       }
   }
   
   
   printf("THE MULTIPLICATION OF MATRIX IS:\n");
   for(int i=0;i<row;i++)
   {
       for(int j=0;j<col;j++)
       {
           scanf("\t%d",&matrixxx[row][col]);
       }
   }
   
   
   
   
   
}
