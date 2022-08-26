#include<stdio.h>

int main(){
   int row, column;
   printf("Enter your matrix rows and columns: ");
   scanf("%d %d",&row,&column);
   int matrix[row][column];
   
   for(int i = 0; i<row; i++){
      for(int j = 0; j<column; j++){
         scanf("%d",&matrix[i][j]);
      }
   }

   for(int i = 0; i<row; i++){
      for(int j = 0; j<column; j++){
         if(j>=column-1-i){
            printf("%d ",matrix[i][j]);
         }
         else{
            matrix[i][j] = 0;
            printf("%d ",matrix[i][j]);
         }
      }
      printf("\n");
   }
}