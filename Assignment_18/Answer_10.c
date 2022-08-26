#include<stdio.h>

int main(){
   char String[40];
   int count = -1;
   int count_ele = 1;
   int temp = 0;
   fgets(String,40,stdin);
   for(int i = 0; String[i]; i++){
      count++;
   }

   for(int i = 0; i < count; i++){
      for (int j = 0; j<count-1-i; j++){
         if(String[j] > String[j+1]){
            int temp = String[j];
            String[j] = String[j+1];
            String[j+1] = temp;
         }
      }
   }

   for(int i = 0; i < count; i++){
      for(int j = 0; j < count-1; j++){
         if(String[i] == String[j] && i != j){
            count_ele++;
         }
      }
      if(temp != String[i] && String[i] != 32){
         printf("Your %c element frequency is: %d\n",String[i],count_ele);
         temp = String[i];
      }
      count_ele = 0;
   }
}