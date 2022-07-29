// 7. Write a function to print first N terms of Fibonacci series (TSRN)
#include<stdio.h>

// Function declaration
void printFibonacciSeries(int);

// main fuction
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printFibonacciSeries(num);
    return 0;
}
