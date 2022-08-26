#include<stdio.h>
#include<stdlib.h>

//function declaration
void largest_element(int);


//main function
int main(){
    int size;
    printf("Enter the number of elements which you want to store in your array: ");
    scanf("%d",&size);
    largest_element(size);
}

//function definition
void largest_element(int size){
    printf("Enter your elements: ");
    int *array , max = 0;
    array = (int*)malloc(size*sizeof(int));
    
    for(int i = 0;i <size; i++){
        scanf("%d",array+i);
        //logic for finding max
        if(max < *(array+i)){
            max = *(array+i);
        };
    };
    printf("max element: %d",max);
};