#include<stdio.h>

//function declaration
void sort(int* , int size);

// main function
int main(){
    int size = 5;
    int array[size];
    printf("Enter your values: ");
    for(int i = 0; i <size; i++){
        scanf("%d",&array[i]);
    }

    sort(array,size);

    for(int i = 0; i<size; i++){
        printf("%d ",array[i]);
    }
}

// function definition
void sort(int *array , int size){
    for(int i = 0; i<size; i++){
        for(int j = 0; j<size-i; j++){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}