#include<iostream>
using namespace std;

//function declaration
void larger(int,int);
void larger(float,float);

//main function
int main(){
    float a , b;
    cin>>a>>b;
    larger(a,b);
};

//fuctionn definition
void larger(int n, int n1){
    cout<<"Greater number is: "<<(n>n1?n:n1);
};

void larger(float n , float n1){
    cout<<"greater number is: "<<(n>n1?n:n1);
};