#include<iostream>
using namespace std;

//function declaration
void swap(int&,int&);

//main function
int main(){
    int n1, n2;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;
    cout<<"before swap: "<<n1<<" "<<n2;
    swap(n1,n2);
    cout<<endl;
    cout<<"after swap: "<<n1<<" "<<n2;
};

//function definition
void swap(int &n1, int &n2){
    n1 = n1+n2;
    n2 = n1-n2;
    n1 = n1-n2;
};