#include<stdio.h>
#include<stdlib.h>

//function declaration
int* sum_display(int* , int);


//main function 
int main(){
    int *array , sum ,size;
    printf("Enter the size of your array: ");
    scanf("%d",&size);
    array = sum_display(&sum,size);
    for(int i = 0; i<size; i++){
        if(i==0){
            printf("%d",*(array+i));
        }
        else{
        printf("+%d",*(array+i));
        }
    }
    printf("= %d",sum);
}

//function definition
int* sum_display(int *sum , int size){
    int *array , temp = 0;
    array = (int*)malloc(size*sizeof(int));
    printf("Enter your elements: ");
    for(int i = 0; i<size; i++){
        scanf("%d",(array+i));
        temp += *(array+i);
    };
    *sum = temp;
    return array;
}