//write a c++ program  to add two complex numbers using operator overloaded by a friend function
#include<iostream>
using namespace std;

class Complex{
    private:
    int real;
    int imaginary;
    public:
    Complex(){};
    Complex(int real , int imaginary){
        this->real = real;
        this->imaginary = imaginary;
    }
    Complex(Complex &object){
        cout<<"i am copy constructor"<<endl;
        real = object.real;
        imaginary = object.imaginary;
    }
    Complex& operator=(Complex &object){
        cout<<"i am assignment"<<endl;
        real = object.real;
        imaginary = object.imaginary;
        return *this;
    }
    friend Complex& operator+(Complex &object1 , Complex &object2){
        cout<<"i am assignment +"<<endl;
        object1.real = object1.real + object2.real;
        object1.imaginary = object1.imaginary + object2.imaginary;
        return object1;
    }
    void display(){
        cout<<real<<endl<<imaginary;
    }
};

int main(){
    Complex c1(1,2) , c2(2,3) , c3(4,5);
    c1 = c1+c2+c3;
    c1.display();
}