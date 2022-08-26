#include<stdio.h>

int main(){
   char name[40];
   printf("Enter your string: ");
   fgets(name,40,stdin);

   for(int i = 0; name[i] ; i++){
      printf("%c",name[i]+32);
   }
}