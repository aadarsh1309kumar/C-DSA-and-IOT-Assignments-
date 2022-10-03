//define a class complex with appropiate instance variables and member functions. 
//Define following operators in the class + - * ==
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
        real = object.real;
        imaginary = object.imaginary;
    }
    Complex& operator=(Complex &object){
        real = object.real;
        imaginary = object.imaginary;
        return *this;
    }
    Complex& operator+(Complex &object){
        real = real+object.real;
        imaginary = imaginary+object.imaginary;
        return *this;
    }
    Complex& operator-(Complex &object){
        real = real-object.real;
        imaginary = imaginary-object.imaginary;
        return *this;
    }
    Complex& operator*(Complex &object){
        real = real*object.real;
        imaginary = imaginary*object.imaginary;
        return *this;
    }
    bool operator==(Complex &object){
        if(real == object.real){
            if(imaginary == object.imaginary){
                return true;
            }
        }
        return false;
    }
    void display(){
        cout<<real<<endl<<imaginary;
    }
};

int main(){
    Complex c1(1,2) , c2(2,2) , c4(5,6) , c3(1,2);
    c1 = c1*c2+c3-c4;
    c1.display();
}