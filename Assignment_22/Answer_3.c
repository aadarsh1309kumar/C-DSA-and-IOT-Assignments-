#include<stdio.h>
#include<stdlib.h>

//function declaration
void sum(int);

//main function
int main(){
    int size;
    printf("Enter the size of your array: ");
    scanf("%d",&size);
    sum(size);
}

//function definition
void sum(int size){
    int *array , sum = 0;
    array = (int*)malloc(size*sizeof(int));
    
    if(array == NULL){
        printf("Your memory is not allocated");
        
    }
    else{
    printf("Enter your array: ");
        for(int i = 0; i<size; i++){
            scanf("%d",(array+i));
            sum += *(array+i);
        };
    };
    free(array);
    printf("sum is: %d",sum);
}