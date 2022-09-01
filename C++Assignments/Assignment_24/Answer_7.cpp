#include<iostream>
using namespace std;

//function declaration
void add(int = 0, int = 0);

//main function
int main(){
    int a,b;
    cout<<"Enter your value: ";
    cin>>a>>b;

    //calling function by passing empty values
    add();
    cout<<endl;
    //calling function by passing one value
    add(a);
    cout<<endl;
    //calling function by passing two values
    add(a,b);
    cout<<endl;

};

//function definition
void add(int a , int b){
    cout<<a+b;
};