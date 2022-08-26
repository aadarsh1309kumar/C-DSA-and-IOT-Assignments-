// write a program to multiply two matrix of 3*3
#include<stdio.h>

int main(){
   int rows = 3,columns = 3;
   int matrix_1[rows][columns];
   int matrix_2[rows][columns];
   int matrix_3[rows][columns];
   int sum = 0;
   printf("Enter your first matrix of 3*3: ");
   for(int i = 0; i<rows; i++){
      for(int j = 0; j<columns; j++){
      scanf("%d",&matrix_1[i][j]);
      }
   }
   printf("Enter your second matrix: ");
   for(int i = 0; i<rows; i++){
      for(int j = 0; j<columns; j++){
         scanf("%d",&matrix_2[i][j]);
      }
   }
   
   
   for(int i = 0; i<rows; i++){
      for(int j = 0; j<columns; j++){
         for(int k = 0; k < 3; k++){
            sum = sum + (matrix_1[i][k] * matrix_2[k][j]);
            matrix_3[i][j] = sum;
         }
         sum = 0;
         printf("%d ",matrix_3[i][j]);
      }
      printf("\n");
   }

}