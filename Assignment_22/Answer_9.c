#include<stdio.h>
#include<stdlib.h>

//fucntion declaration
int* input(int);

//main function
int main(){
    int *array;
    array = input(5);
    for(int i = 0; i<5; i++){
        printf("%d ",*(array+i));
    };
};

//function definition
int* input(int size){
    int *array;
    array = (int*)malloc(size*sizeof(int));
    if(array == NULL){
        printf("Memory allocation failed");
        return 0;
    }
    else{
        printf("Enter your elements: ");
        for(int i = 0; i<size; i++){
            scanf("%d",array+i);
        };
    };
    return array;
}