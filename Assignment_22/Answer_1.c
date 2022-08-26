#include<stdio.h>
#include<stdlib.h>

//function declaration
char* input();

//main function
int main(){
    char *p;
    p = input();
    for(int i = 0; p[i] ; i++){
        printf("%c",*(p+i));
    }
}


//function definition
char* input(){
    char *array , c;
    int i = 0, j = 1;

    array = (char*)malloc(sizeof(char));
    while(c != '\n'){
        c = getc(stdin);
        j++;
        array = (char*)realloc(array,j*sizeof(char));
        array[i] = c;
        i++;
    }
    array[i] = '\0';
    return array;
}
