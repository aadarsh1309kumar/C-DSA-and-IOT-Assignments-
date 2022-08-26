#include<stdio.h>
#include<string.h>
//function declaration
void print_reverse(int* , int);

// main function
int main(){
    int length = 5;
    int array[5] = {1,2,3,4,5};
    print_reverse(array,length);
}

// function defintiiiont
void print_reverse(int array[] , int length){
    for(int i = length-1; i >= 0 ; i--){
        printf("%d ",array[i]);
    }
}