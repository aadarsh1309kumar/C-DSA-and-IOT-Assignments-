#include<stdio.h>

//function daclaration
char repeat_character(char* );


// main function
int main(){
    char string[100] = "vishal tyagi";
    repeat_character(string);
}

//function definition
char repeat_character(char string[] ){
    int temp[1000] = {0};

    for(int i = 0; string[i] ; i++){
        temp[string[i]]++;
    }

    for(int  i = 0; i < 1000; i++){
        if(temp[i] == 2){
        printf("%c frequency is: %d\n",i,temp[i]);
        }
    }
}