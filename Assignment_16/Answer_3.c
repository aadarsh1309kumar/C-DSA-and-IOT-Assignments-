// write a program to find the transpose of a given matrix
#include<stdio.h>

int main(){
   int rows, columns; 
   printf("Enter your rows and columns: ");
   scanf("%d %d",&rows,&columns);
   int array_1[rows][columns];
   
   // entering matrix from user
   printf("Enter your matrix: \n");
   for(int i = 0; i<rows; i++){
      for(int j = 0; j<columns; j++){
         scanf("%d",&array_1[i][j]);
      }
   }

   // printing normal matrix
   printf("Your original matrix: \n");
   for(int i = 0; i<rows; i++){
      for(int j = 0; j<columns; j++){
         printf("%d ",array_1[i][j]);
      }
      printf("\n");
   }
   printf("\n");
   // displaying transpose of a matrix 
   printf("Your transposed matrix: \n");
   for(int i = 0; i<columns; i++){
      for(int j = 0; j<rows; j++){
         printf("%d ",array_1[j][i]);
      }
      printf("\n");
   }
}