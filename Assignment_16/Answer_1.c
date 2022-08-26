#include<stdio.h>

//main function
int main(){
   int rows,columns;
   printf("Enter your array rows and columns: ");
   scanf("%d %d",&rows,&columns);
   int array1[rows][columns];
   int array2[rows][columns]; 
   int result[rows][columns];

   //taking array as input;
   printf("Enter your first array: ");
   for(int i = 0; i < rows; i++){
      for(int j = 0; j<columns; j++){
         scanf("%d",&array1[i][j]);
      }
   }
   printf("Enter your second array: ");
   for(int i = 0; i < rows; i++){
      for(int j = 0; j<columns; j++){
         scanf("%d",&array2[i][j]);
      }
   }

   // adding array
   for(int i = 0; i<rows; i++){
      for(int j = 0; j<columns; j++){
         result[i][j] = array1[i][j]+array2[i][j];
         printf("%d ",result[i][j]);
      }
      printf("\n");
   }
}
