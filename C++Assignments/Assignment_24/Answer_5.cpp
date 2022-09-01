#include<iostream>
using namespace std;

//function declaration
int check_fib(int);

//main function
int main(){
    int  number;
    cout<<"Enter a number: ";
    cin>>number;
    check_fib(number)==1?
    cout<<"Yes "<<number<<" is arrived in fibonacci series":
    cout<<"no "<<number<<"is not arrived in fibonacci series";
};

//function definition
int check_fib(int number){
    int a = 0, b = 1 , sum = 0;
    while(sum < number){
        sum = a+b;
        a = b;
        b = sum;
    };
    return sum == number?1:0;
};