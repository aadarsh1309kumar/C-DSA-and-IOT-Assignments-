// write a program to count occurance of a given character in a string
#include<stdio.h>

int main(){
   char name[20];
   char find;
   int i ;
   printf("Enter your string: ");
   fgets(name,20,stdin);
   printf("Enter the character you want to find in the given string: ");
   scanf("%c",&find);

   for( int i = 0; name[i] ; i++){
      if(name[i] == find){
      printf("your element is found on %d index",i+1);
      break;
      }
   }
}