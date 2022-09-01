#include<iostream>
using namespace std;

//function declaration
int highest_value(int);

//main function
int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    cout<<"Heightst digit in your number is: "<< highest_value(number);
};

//function definition
int highest_value(int number){
    int heightst = 0;
    int n = number;
    for(int i = 0;number; i++){
        if(heightst < (number%10)){
            heightst = number%10;
        };
        number = number/10;
    };
    return heightst;
};