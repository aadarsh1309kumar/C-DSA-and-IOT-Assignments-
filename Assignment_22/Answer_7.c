#include<stdio.h>
#include<stdlib.h>

//main function
int main(){
    int *number;
    number = (int*)malloc(sizeof(int)); // here we allocated memory
    scanf("%d",number);
    printf("square of your number is: %d",(*number)*(*number));
    
    /*now here is the case of memory leak because malloc function memory is not free.
    for free the memory we have to write*/ 

    //free(number).
}