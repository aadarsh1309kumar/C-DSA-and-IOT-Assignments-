#include<stdio.h>

int main(){
   int rows,columns;
   printf("Enter your matrix rows and columns: ");
   scanf("%d %d",&rows,&columns);
   int matrix[rows][columns];

   for(int i = 0; i<rows; i++){
      for(int j = 0; j<columns; j++){
         scanf("%d",&matrix[i][j]);
      }
   }

   for(int i = 0; i<rows; i++){
      for(int j = 0; j<columns; j++){
         if(j<=columns-1-i){
            printf("%d ",matrix[i][j]);
         }
         else{
            matrix[i][j]=0;
            printf("%d ",matrix[i][j]);
         }
      }
      printf("\n");
   }
}