#include<stdio.h>
#include<string.h>

//function declaration
void string_reverse(char*);

//main function
int main(){
    char string[20] = {"vishal"};
    string_reverse(string);
}

//function definition
void string_reverse(char string[]){
    int length = strlen(string)-1;
    for(int i = length; i >= 0; i--){
        printf("%c",string[i]);
    }
}