#include<stdio.h>
#include<string.h>

//function declaration
int factorial(int);

//main function
int main(){
    char names[5][30] = {"vishal","papa","mummy","priya","chachi"};
    char temp_string[30];
    int i;
    printf("Enter a string: ");
    gets(temp_string);
    for(i = 0; i<5; i++){
        if(strcmp(names[i],temp_string)==0){
            int fact_num;
            printf("Enter your number for factorial: ");
            scanf("%d",&fact_num);
            printf("%d",factorial(fact_num));
            break;
        }
    }
    if(i == 5){
        printf("Invalid string");
    }
}

//function definition
int factorial(int number){
    if(number==1){
        return 1;
    }
    number *= factorial(number-1);
    return number;
}