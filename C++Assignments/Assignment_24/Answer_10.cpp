#include<iostream>
using namespace std;

//function declaration
void add(int , int);
void add(int , float);
void add(float , int);
void add(float , float);

//main function
int main(){
    int a;
    float b;
    cin>>a>>b;
    add(a,b);
}

//function definition
void add(int a , int b){
    cout<<"addition is: "<<(a+b);
};

void add(int a , float b){
    cout<<"addition is: "<<(a+b);
};

void add(float a , int b){
    cout<<"addition is: "<<(a+b);
};

void add(float a , float b){
    cout<<"addition is: "<<(a+b);
};