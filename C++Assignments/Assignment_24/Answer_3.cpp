#include<iostream>
using namespace std;

//function declaration
void power_(int,int);
int power_recursive(int , int);

//main function
int main(){
    int number , power;
    cout<<"Enter your number: ";
    cin>>number;
    cout<<"Enter power of your number: ";
    cin>>power;
    //calling functions
    power_(number,power);
    cout<<endl;
    //calling recursive function.
    cout<<"your number by recursive approach is: "<<power_recursive(number,power);
};

//function definition
void power_(int number, int power){
    int result = 1;
    for(int i = 0; i<power; i++){
        result *= number;
    };
    cout<<"YOur number is: "<<result;
};

int power_recursive(int number , int power){
    int powe;
    if(power == 0){
        return 1;
    };
    number *=  power_recursive(number, power-1);
    return number;
};