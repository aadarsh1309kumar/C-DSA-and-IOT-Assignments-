//write a c++ program to overload umary operators that is increment and decrement
#include<iostream>
using namespace std;

class Complex{
    private:
    int real;
    int imaginary;
    
    public:
    Complex(){};
    Complex(int real , int imaginary){
        this->imaginary = imaginary;
        this->real = real;
    }
    Complex(const Complex &object){
        real = object.real;
        imaginary = object.imaginary;
    }
    Complex& operator=(Complex &object){
        real = object.real;
        imaginary = object.imaginary;
        return *this;
    }
    Complex& operator++(){
        real = ++real;
        imaginary = ++imaginary;
        return *this;
    }
    Complex& operator++(int dummy){
        real = real++;
        imaginary = imaginary++;
        return *this;
    }
    void display(){
        cout<<real<<endl<<imaginary;
    }
};

int main(){
    Complex c1(1,2) , c2(3,4) , c5(5,6);
    c1 = c2++;
    c1.display();

}