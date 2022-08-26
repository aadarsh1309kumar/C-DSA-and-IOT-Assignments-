#include<stdio.h>

// function declaration
void count_spaces(char* , int);

//main function
int main(){
    int size = 30;
    char array[size];
    count_spaces(array,size);
}

// function definition
void count_spaces(char string[] , int size){
    printf("Enter your string: ");
    fgets(string,size,stdin);

    //variables
    int items;
    int count = 0;

    //logic
    for(int i = 0; items; i++){
        items = string[i];
        if(string[i] == 32){
            count++;
        }
    }
    printf("Your string have %d words",count+1);
}