#include<stdio.h>

//function declaration
void array_sum(int* , int* , int);

//main function
int main(){
    int sum;
    int array[5] = {1,2,3,4,10};
    array_sum(array,&sum,5);
    printf("the sum of all element in your array is: %d",sum);
}

//function definition
void array_sum(int array[] , int *sum , int length){
    int sum_element = 0;
    for(int i = 0; i < length; i++){
        sum_element += array[i];
    }
    *sum = sum_element;
}