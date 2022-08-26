#include<stdio.h>

// function definition
void alpha_numeric(char* , int);

// main function
int main(){
int size = 30;
char string[size];
alpha_numeric(string,size);
}

// function declaration
void alpha_numeric(char string[] , int size){
printf("Enter your string: ");
fgets(string,size,stdin);

    // variables
int test;
int for_alphabet = 0 , for_number = 0;

for( int i = 0; test ; i++){
      test = string[i];
      
      //logic
      if(string[i]>=65 && string[i]<= 90 || string[i] >= 97 && string[i]<= 122){
            for_alphabet = 1;
      }
      if(string[i] >=48 && string[i] <= 57){
            for_number = 1;
      }
      }

        //returning output by checking the conditions
for_alphabet && for_number?
      printf("yes, you enter a alphanumeric string\n"):
      printf("no you didn't enter alphanumeric string\n");
}