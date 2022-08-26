#include<stdio.h>

int main(){
   char String[30] , count = -1;
   fgets(String,30,stdin);
   for(int i = 0; String[i]; i++){
      count++;
   }
   for(int i = 0; i < count; i++){
      for(int j = 0; j < count-1-i; j++){
         if(String[j] > String[j+1]){
            int temp = String[j];
            String[j] = String[j+1];
            String[j+1] = temp; 
         }
      }
   }
   
   for(int i = 0; String[i] ; i++){
      printf("%c",String[i]);
   }
}