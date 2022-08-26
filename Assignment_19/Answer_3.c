#include<stdio.h>

int main(){
    char array[4][30];

    // taking user input
    for(int i = 0; i < 4; i++){
        gets(array[i]);
    }

    for(int i = 0; i<4; i++){
        printf("%s ",array[i]);
    }
}