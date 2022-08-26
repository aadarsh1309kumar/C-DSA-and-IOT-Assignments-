#include<stdio.h>

// fucntion declaration
void transpose_lower(char*,int);

//main function
int main(){
    int size  = 30;
    char string[size];
    transpose_lower(string,size);
}

void transpose_lower(char string[],int size){
    printf("Enter your string: ");
    fgets(string,size,stdin);
    int count = 0; 

    for(int i = 0; string[i] ; i++){
        count++;
    }

    for(int i = 0; i < count; i++){
        if(string[i] >= 65 && string[i] <= 90){
            string[i] = string[i]+32;
        }
    }

    printf("%s",string);
}