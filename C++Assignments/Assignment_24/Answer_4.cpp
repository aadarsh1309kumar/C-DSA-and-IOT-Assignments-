#include<iostream>
using namespace std;

//function declaration
void print_pattern(int);
int combination_f(int , int);
int factorial(int);

//main function
int main(){
    int n;
    cout<<"Enter n term: ";
    cin>>n;
    print_pattern(n);
};

//function definition
void print_pattern(int n){
    int k = 0;
    int k_ = 0;
    for(int i = 0; i < n; i++){
        k_ = 0;
        for(int j = 0; j <= 2*n; j++){
            // cout<< "i am k "<<k<<"..";
            if(j >= n-i && j <= 2*n-(n-i) && k){
                cout<<combination_f(i,k_);
                k_++;
                k = 0;
            }
            else{
                cout<<" ";
                k = 1;
            };
        };
        cout<<endl;
    };
};

int combination_f(int n , int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
};

int factorial(int start){
    int temp = 1;
    for(int i = start; i>0; i--){
        temp *= i;
    };
    //cout<<temp<<" ";
    return temp;
};