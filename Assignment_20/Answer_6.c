#include<stdio.h>

//function declaration
void string_length(char*,int*);

//main function
int  main(){
    char string[20] = {"vishal"};
    int length;
    string_length(string,&length);
    printf("your string length is %d",length);
}

//function definition
void string_length(char *string , int *length){
    int count = 0;
    for(int i = 0; string[i]; i++){
        count++;
    }
    *length = count;
}