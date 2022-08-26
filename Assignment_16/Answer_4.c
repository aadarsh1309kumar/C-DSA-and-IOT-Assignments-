// write a program in c to find the sum of right diagonals of a matrix
#include<stdio.h>

int main(){
   int rows , columns; 
   printf("Enter your matrix rows and columns: ");
   scanf("%d %d",&rows,&columns);
   int matrix[rows][columns];

   for(int i = 0; i<rows; i++){
      for(int j = 0; j<columns; j++){
         scanf("%d",&matrix[i][j]);
      }
   }
   int i =0,sum=0,j;
   while(i != rows && columns > 0 ){
      sum += matrix[i][columns-1];
      i++;
      columns--;
   }

   printf("%d",sum);
}