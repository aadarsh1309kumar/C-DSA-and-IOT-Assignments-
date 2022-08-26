// write a function to swap values of two in variables of calling function TSRS
#include<stdio.h>

// function declaration
void swap(int* , int*);

// main function 
int main(){
    int a, b;
    printf("Enter your number values: ");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("%d %d",a,b);
}

// function definition
void swap(int *p , int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
}