#include<stdio.h>
#include<stdlib.h>

//function declaration
void input(int , int* , int*);

//main function
int main(){
    int *max , a ,*min , b; 
    max = &a;
    min = &b;
    input(5,max,min);
    printf("max: %d\nmin: %d",a,b);
};

//function definition
void input(int size , int *max_ , int *min_){
    int *array , max = 0 , min = 1000000;
    array = (int*)malloc(size*sizeof(int));
    printf("Enter your elements: ");
    for(int i = 0; i<size; i++){
        scanf("%d",array+i);
        if(max < *(array+i)){
            max = *(array+i);
        };
        if(min > *(array+i)){
            min = *(array+i);
        };
    };
    *max_ = max;
    *min_ = min;
};