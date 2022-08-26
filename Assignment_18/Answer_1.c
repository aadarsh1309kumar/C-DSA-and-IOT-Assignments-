#include<stdio.h>

int length(char*);

// main function
int main(){
   // int size;
   // printf("Enter size of your string: ");
   // scanf("%d",&size);
   char String[30];
   printf("%d",length(String));
}

// function definition
int length(char Strint[]){
   int count=0;
   printf("Enter your string: ");
   fgets(Strint,30,stdin);
   for(int i = 0; Strint[i]; i++){
      count++;
   }
   
   return count-1;
}