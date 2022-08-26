#include<stdio.h>

//function declaration
void function_max(int* , int* , int*);

// main function
int main(){
    int number_1,number_2,max;
    printf("Enter your numbers: ");
    scanf("%d %d",&number_1,&number_2);
    function_max(&number_1,&number_2,&max);
    printf("Your max number between these two numbers are : %d",max-1);
}

//function definition
void function_max(int *number_1 , int *number_2 , int *max){
    *max = *number_1>*number_2?*number_1:*number_2;
}