#include<iostream>
using namespace std;

//function declaration
void prime(int);

//main function
int main(){
    int number;
    cout<<"Enter a number";
    cin>>number;
    prime(number);
}


//function definition
void prime(int number_1){
    int i , flag = 1;
    for( i = 2; i < number_1-1; i++){
        if((number_1 % i) == 0){
            flag = 0;
            cout<<"no it is not a prime number";
            break;
        };
    }
    if(flag){
        cout<<"yes you enter a prime number";
    };
};