#include<stdio.h>

int main(){
   char string_copy[40], string[40];
   int count=0;
   printf("Enter your string: ");
   fgets(string,40,stdin);
   
   for(int i = 0; string[i] ; i++){
      count++;
   }
   for(int i = 0;i<count; i++){
      string_copy[i] = string[i];
   }

   for(int i = 0; string_copy[i] ; i++){
      printf("%c",string_copy[i]);
   }
}