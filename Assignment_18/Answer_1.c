// write a program to claculate length of a string
#include<stdio.h>

int main(){
   char String[20];
   int count=0;
   fgets(String,20,stdin);
   for(int i = 0; String[i]; i++){
      count++;
   }
   printf("%d",count-1); // because we want to remove the terminator which is passsed in string (terminators: enter key,)
}