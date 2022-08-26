#include<stdio.h>

int main(){
   int rows, columns; 
   printf("Enter your matrix rows and columns: ");
   scanf("%d %d",&rows,&columns);
   int matrix[rows][columns];

   // takin matrix as input from user
   for(int i = 0; i<rows; i++){
      for(int j = 0; j<columns; j++){
         scanf("%d",&matrix[i][j]);
      }
   }
   int sum=0;
   // logic for adding left diagonal
   for(int i = 0,j=0; i<rows&&j<columns; i++,j++){
      sum += matrix[i][j];
   }
   printf("%d",sum);
}