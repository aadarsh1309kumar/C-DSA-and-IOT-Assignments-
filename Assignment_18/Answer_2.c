// write a function to reverse a string
#include<stdio.h>

// function declaration
void *reverse(char*,int);

// main function
int main(){
   int size = 100;
   char string[size];
   reverse(string,size);
}

// function definition
void *reverse(char string[],int size){
   int count = -1;
   printf("Enter your string: ");
   fgets(string,size,stdin);

   for(int i = 0; string[i] ; i++){
      count++;
   }
   int first=0;
   int last = count-1;
   while(first < last){
      char temp = string[first];
      string[first] = string[last];
      string[last] = temp;
      first++;
      last--;
   }

   // printing string
   for(int i = 0; i < count ; i++){
      printf("%c",string[i]);
   }
}