// write a program in C to accept a matrix and determine whether it is a sparse matrix or not
#include<stdio.h>

int main(){
   int rows, columns , count = 0;
   printf("Enter your rows and columns: ");
   scanf("%d %d",&rows,&columns);
   int matrix[rows][columns];

   //taking input from user
   for(int i = 0; i<rows; i++){
      for(int j = 0; j<columns; j++){
         scanf("%d",&matrix[i][j]);
      }
   }

   for(int i = 0; i<rows; i++){
      for(int j = 0; j<columns; j++){
         if(matrix[i][j] == 0){
            count++;
         }
      }
   }

   count>(rows*columns/2)?printf("yes, it is a sparse matrix"):printf("no it is not a sparse matrix");
}