// write a function to swap strings of two char array of calling functions.
#include<stdio.h>
#include<string.h>

//function declaration
void swapping(char* , char*);

//main function
int main(){
    int size = 20;
    char string[size] , string_1[size];
    //input strings
    printf("enter your first string: ");
    fgets(string,size,stdin);
    string[strlen(string)-1] = '\0';
    printf("enter your second string: ");
    fgets(string_1,20,stdin);
    string_1[strlen(string_1)-1] = '\0';

    //function calling
    swapping(string,string_1);
    printf("%s %s",string,string_1);
}

//function definition
void swapping(char string[] , char string_1[]){
    char temp[20];
    strcpy(temp,string);
    strcpy(string,string_1);
    strcpy(string_1,temp);
}