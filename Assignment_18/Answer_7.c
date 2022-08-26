#include<stdio.h>

// function definition
void palandrome_check(char* , int);

//main function
int main(){
    int size = 20;
    char string[size];
    palandrome_check(string,size);
}

// function declaration
void palandrome_check(char string[] , int size){
    printf("Enter your string: ");
    fgets(string,size,stdin);
    
    // variables
    int count = -1;
    for(int i = 0; string[i] ; i++){
        count++;
    }
    int i;
    for(i = 0; i<count; i++){
        if(string[i] != string[count-1-i]){
            printf("No you don't enter a palandrome number\n");
            break;
        }
    }
    if(i == count){
    printf("yes, you enter a palandrome string");
    }
}