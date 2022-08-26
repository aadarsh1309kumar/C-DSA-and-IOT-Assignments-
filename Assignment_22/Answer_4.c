#include<stdio.h>
#include<stdlib.h>

//function declaration
char* input();

//main function
int main(){
    char *string;
    string = input();
    for(int i = 0; string[i] ; i++){
        printf("%c",*(string+i));
    };
};


//function definition
char* input(){
    char *string , c;
    int i , j;
    string = (char*)malloc(sizeof(char));

    for( i = 0 , j = 1; c != '\n' ; i++ , j++){
        c = getc(stdin);
        string = (char*)realloc(string,j*sizeof(char));
        string[i] = c;
    }
    string[i] = '\0';
    return string;
};
