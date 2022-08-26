#include<iostream>
using namespace std;

//main function
int main(){
    int a , b;
    cout<<"Enter your numbers: ";
    cin>>a>>b;
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"a = "<<a<<" b = "<<b;
};