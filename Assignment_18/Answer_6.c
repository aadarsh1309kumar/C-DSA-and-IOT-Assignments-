#include<stdio.h>

int main(){
   char string[30];
   int count=-1;
   printf("Enter your string: ");
   fgets(string,30,stdin);
   
   for(int i = 0; string[i] ; i++){
      count++;
   }
   
   for(int i = 0; i < count/2; i++){
      int temp = string[i];
      string[i] = string[count-1-i];
      string[count-1-i] = temp;
   }

   for(int i = 0; string[i] ; i++){
      printf("%c",string[i]);
   }
}