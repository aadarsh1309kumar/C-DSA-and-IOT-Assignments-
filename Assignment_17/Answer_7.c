#include<stdio.h>

int main(){
   int count_alpha = 0 , count_special = 0 , count_digit = 0;
   char string[40];
   printf("Enter your string: ");
   fgets(string,40,stdin);
   
   for(int i = 0; string[i] ; i++){
      printf("%c",string[i]);
      // for alphabet counting.
      if(string[i] >= 65 && string[i] <= 90 || string[i] >= 97 && string[i] <= 122){
         count_alpha++;
      }
      
      // for special character counting.
      else if(string[i] >= 32 && string[i] <= 47 || string[i] >= 58 && string[i] <= 64 || string[i] <= 123 && string[i] >= 126){
         count_special++;
      }
      
      // for digit counting
      else if(string[i] >= 48 && string[i] <= 57){
         count_digit++;
      }
   }

   printf("In your string:\nSpecial character: %d\nAlphabet: %d\nDigits: %d",count_special,count_alpha,count_digit);
}