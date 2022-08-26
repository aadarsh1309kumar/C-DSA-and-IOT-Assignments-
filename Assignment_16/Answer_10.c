#include<stdio.h>

int main(){
   int rows, columns,count=0,max =0,I=0; 
   printf("Enter your rows and columns: ");
   scanf("%d %d",&rows,&columns);
   int matrix[rows][columns];

   for(int i = 0; i<rows; i++){
      for(int j = 0; j<columns; j++){
         scanf("%d",&matrix[i][j]);
      }
   }

   for(int i = 0; i<rows; i++){
      count = 0;
      for(int j = 0; j<columns; j++){
         if(matrix[i][j] == 1){
            count++;
            if(max < count){
               max = count;
               I = i+1;
            }
         }
      }
   }
   printf("your row numner which contains most 1's is: '%d' with '%d' 1's",I,max);
}