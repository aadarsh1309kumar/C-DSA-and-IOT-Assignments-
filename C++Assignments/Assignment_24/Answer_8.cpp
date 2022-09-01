#include<iostream>
using namespace std;

//function declaration
void area(float);
void area(int,int);
void area(float,int);

//main function
int main(){
    int radius;
    cout<<endl;
    cout<<"Enter radius: ";
    cin>>radius;
    area(radius);
    
    int length , breath;
    cout<<endl;
    cout<<"Enter length and breath: ";
    cin>>length>>breath;
    area(length,breath);
    
    float base;
    int height;
    cout<<endl;
    cout<<"Enter base and height: ";
    cin>>base>>height;
    area(base,height);
};

//function definition
void area(float radius){
    cout<<"Area of circle is: "<<3.14*radius*radius;
};

void area(int l , int b){
    cout<<"Area of rectangle is: "<<l*b;
};

void area(float base , int height){
    cout<<"Area of triangle is "<<0.5*base*height;
};