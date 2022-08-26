#include<stdio.h>

// function declaration
char transfose_upper(char* , int );

// main function
int main(){
    int size = 30;
    char string[size];
    transfose_upper(string,size);
}

char transfose_upper(char string[] , int size){
    printf("Enter your string: ");
    fgets(string,size,stdin);
    int count = 0;
    for(int i = 0; string[i] ; i++){
        count++;
    }

    for(int j = 0 ; j < count; j++){
        if(string[j] >= 97 && string[j] <= 122){
        string[j] = string[j] - 32;
        }
    }

    printf("%s",string);
}