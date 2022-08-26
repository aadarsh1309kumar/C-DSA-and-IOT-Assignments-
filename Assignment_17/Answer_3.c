#include<stdio.h>

int main(){
   char name[30];
   int count=0;
   printf("enter your string: ");
   fgets(name,30,stdin);
   for(int i = 0; name[i] ; i++){
      if(name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u'){
         count++;
      }
   }
   printf("your string contains %d vowels",count);
}