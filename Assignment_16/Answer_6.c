#include<stdio.h>

int main(){
   int rows,columns;
   printf("Enter your matrix rows and column: ");
   scanf("%d %d",&rows,&columns);
   int matrix[rows][columns];

   for(int i = 0; i<rows; i++){
      for(int j = 0; j<columns; j++){
         scanf("%d",&matrix[i][j]);
      }
   }
   int sum_row = 0,sum_column=0,j;
   for(int i = 0; i<rows; i++){
      for(j = 0; j<columns; j++){
         sum_row += matrix[i][j];
         sum_column += matrix[j][i];
      }
      printf("your sum of: %d\nrow is: %d and column is: %d\n",i+1,sum_row,sum_column);
      sum_row = 0;
      sum_column = 0;
   }
}